#!/bin/sh
# Write support/<unit>_setup.c: the one UtTest_Setup of each runner. It calls
# every <Fn>_covmock_Register() in the case files covmock's manifest lists
# for that unit.
cd "$(dirname "$0")/.."
for dir in covmock/*/; do
  unit=$(basename "$dir")
  cases=$(python3 -c 'import json,sys; m=json.load(open(sys.argv[1])); print("\n".join(o["path"] for o in m["outputs"] if o["kind"]=="case"))' "${dir}manifest.json")
  regs=$(for c in $cases; do grep -ho '^void [A-Za-z0-9_]*_covmock_Register(void)' "$dir$c"; done | sed 's/^void //; s/(void)$//' | sort)
  {
    echo "/* Written by support/make_setup.sh -- regenerate, do not edit. */"
    for r in $regs; do echo "void $r(void);"; done
    echo "void UtTest_Setup(void)"
    echo "{"
    for r in $regs; do echo "    $r();"; done
    echo "}"
  } > "support/${unit}_setup.c"
done

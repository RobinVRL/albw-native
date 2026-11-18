// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern undefined *PTR_00556f4c;
extern undefined *PTR_00556f50;
extern undefined *PTR_00556f54;
extern undefined *PTR_00556f58;
extern undefined *PTR_00556f5c;
extern undefined *PTR_00556f60;

// USA 00556ED8 <- EU 00556EB0 (Ghidra, non-matching)
// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)
// GLOBAL PTR_00556f4c undefined *
// GLOBAL PTR_00556f50 undefined *
// GLOBAL PTR_00556f54 undefined *
// GLOBAL PTR_00556f58 undefined *
// GLOBAL PTR_00556f5c undefined *
// GLOBAL PTR_00556f60 undefined *

/* WARNING: Unknown calling convention */

undefined4 func_00556ED8(undefined4 param_1,undefined *param_2)

{
  int iVar1;
  
  if (((*(uint *)PTR_00556f4c & 1) == 0) &&
     (iVar1 = func_00100174((int *)PTR_00556f4c), iVar1 != 0)) {
    *(undefined **)PTR_00556f50 = PTR_00556f54;
  }
  if (PTR_00556f50 != param_2) {
    if (((*(uint *)PTR_00556f58 & 1) == 0) &&
       (iVar1 = func_00100174((int *)PTR_00556f58), iVar1 != 0)) {
      *(undefined **)PTR_00556f5c = PTR_00556f60;
    }
    if (PTR_00556f5c != param_2) {
      return 0;
    }
  }
  return 1;
}


// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_004102BC(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4);

// USA 0025B894 <- EU 0025B8BC (Ghidra, non-matching)
// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)

undefined4 func_0025B894(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x7c);
  piVar2 = *(int **)(param_1 + 0x80);
  *(undefined4 *)(param_1 + 0x78) = uVar1;
  if ((int)piVar2 <= param_2) {
    return 0;
  }
  *(int *)(param_1 + 0x80) = param_2;
  if (param_2 < 0x3d) {
    return func_004102BC(3,2,uVar1,piVar2);
  }
  if (param_2 < 0xb5) {
    return func_004102BC(3,1,uVar1,piVar2);
  }
  return func_004102BC(3,0,uVar1,piVar2);
}


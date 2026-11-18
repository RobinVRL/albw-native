// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_004102BC(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4);

// USA 0025B88C <- EU 0025B8B4 (Ghidra, non-matching)
// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)

undefined4 func_0025B88C(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 0x40);
  uVar2 = *(undefined4 *)(iVar1 + 0x7c);
  piVar3 = *(int **)(iVar1 + 0x80);
  *(undefined4 *)(iVar1 + 0x78) = uVar2;
  if ((int)piVar3 <= param_2) {
    return 0;
  }
  *(int *)(iVar1 + 0x80) = param_2;
  if (param_2 < 0x3d) {
    return func_004102BC(3,2,uVar2,piVar3);
  }
  if (param_2 < 0xb5) {
    return func_004102BC(3,1,uVar2,piVar3);
  }
  return func_004102BC(3,0,uVar2,piVar3);
}


#include "ghidra_types.h"

extern int func_00308B54(int param_1,undefined4 *param_2,undefined4 param_3);
extern int func_003096D8(int *param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern int *DAT_003090fc;
extern int *DAT_00309100;

// USA 0030906C <- EU 00309048 (Ghidra, non-matching)
// GLOBAL DAT_003090fc int *
// GLOBAL DAT_00309100 int *

undefined4 func_0030906C(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (((*(int *)(param_2 + 0x2c) != 0) &&
      (uVar3 = (uint)*(byte *)((int)param_1 + 0x435), uVar3 == 0)) &&
     (*(char *)(*(int *)(param_2 + 0x2c) + 1) == '\x0f')) {
    iVar1 = func_0052FBA0(*DAT_003090fc + 0x3dbbc,*(uint *)(param_2 + 0x28));
    if (*(char *)((int)param_1 + 0x437) == '\0') {
      if (iVar1 == 0) {
        return 0;
      }
    }
    else {
      if (iVar1 == 0) {
        return 0;
      }
      iVar2 = func_00588BE4(iVar1);
      if (iVar2 != *DAT_00309100) {
        return 0;
      }
    }
    iVar1 = func_00308B54((int)param_1,(undefined4 *)(iVar1 + 0x3d0),uVar3);
    if (iVar1 == 0) {
      func_003096D8(param_1);
      return 1;
    }
  }
  return 0;
}


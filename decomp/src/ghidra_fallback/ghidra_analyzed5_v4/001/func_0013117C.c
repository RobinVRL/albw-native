#include "ghidra_types.h"

extern int func_00130334(int param_1,uint param_2);
extern int func_001309A4(int param_1,int *param_2,undefined4 param_3,int param_4);
extern int func_0016B990(int param_1,undefined4 param_2,undefined4 param_3);
extern int func_002FE86C(int param_1);
extern int func_002FE9A8(int param_1);
extern int func_002FE9CC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int DAT_00131238;
extern int DAT_0013123c;
extern int *DAT_00131240;

// USA 0013117C <- EU 0013117C (Ghidra, non-matching)
// GLOBAL DAT_00131238 int
// GLOBAL DAT_0013123c int
// GLOBAL DAT_00131240 int *

undefined4 func_0013117C(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_r1;
  uint in_r2;
  int in_r3;
  
  func_00130334(param_1,2);
  if ((*(int *)(*(int *)(DAT_00131238 + param_1) + 8) != 0) &&
     ((*(byte *)(DAT_0013123c + param_1) & 0x10) == 0)) {
    piVar1 = (int *)func_002FE9CC(*(int *)(param_1 + 0x4c),extraout_r1,in_r2,in_r3);
    piVar2 = *(int **)(param_1 + 0x28d8);
    iVar3 = (**(code **)(*piVar2 + 0x18))(piVar2,0);
    piVar2 = *(int **)(param_1 + 0x28d8);
    iVar4 = (**(code **)(*piVar2 + 0x18))(piVar2,1);
    func_0016B990(*DAT_00131240,iVar4 + 4,iVar3 + 4);
    func_001309A4(param_1,piVar1,*(undefined4 *)(param_1 + 0x28d0),4);
    return func_002FE86C(*(int *)(param_1 + 0x4c));
  }
  return func_002FE9A8(*(int *)(param_1 + 0x4c));
}


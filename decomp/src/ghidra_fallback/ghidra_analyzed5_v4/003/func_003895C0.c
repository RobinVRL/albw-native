#include "ghidra_types.h"

extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_00667DD0(undefined4 *param_1,undefined1 param_2);
extern float DAT_00389658;

// USA 003895C0 <- EU 0038959C (Ghidra, non-matching)
// GLOBAL DAT_00389658 float

undefined4 func_003895C0(int param_1)

{
  int iVar1;
  undefined4 extraout_r1;
  float *pfVar2;
  int *in_r3;
  
  iVar1 = *(int *)(param_1 + 0x460);
  pfVar2 = (float *)(param_1 + 0x3d0);
  *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar1 + 0x80),*(uint *)(param_1 + 1000),pfVar2);
  func_00169A80(*(int **)(param_1 + 0x464),extraout_r1,pfVar2,in_r3);
  func_00168E9C(*(int **)(param_1 + 0x464),*(int *)(param_1 + 0x460),(int *)0x0);
  iVar1 = *(int *)(*(int *)(param_1 + 0x464) + 0x14);
  if (*(char *)(iVar1 + 0x1c) == '\0') {
    if (*(float *)(iVar1 + 0x10) < DAT_00389658) {
      if (DAT_00389658 < *(float *)(iVar1 + 8)) goto LAB_0038964c;
    }
    else if (*(float *)(iVar1 + 8) != *(float *)(iVar1 + 0x14)) goto LAB_0038964c;
    func_00667DD0((undefined4 *)(param_1 + 0x40c),1);
  }
LAB_0038964c:
  return func_004CEAF0(*(int *)(param_1 + 0x460));
}


#include "ghidra_types.h"

extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_004CEAF0(int param_1);
extern float func_00590EC8(float fparam_0,float fparam_1);
extern float DAT_00287760;
extern float DAT_00287764;

// USA 0028765C <- EU 00287684 (Ghidra, non-matching)
// GLOBAL DAT_00287760 float
// GLOBAL DAT_00287764 float

undefined4 func_0028765C(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  
  if (*(char *)(param_1 + 0x2d7) != '\0') {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x40c);
  *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
  *(undefined4 *)(iVar1 + 0x8c) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(iVar1 + 0x9c) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(iVar1 + 0xac) = *(undefined4 *)(param_1 + 0x3d8);
  fVar4 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x420),(byte)(in_fpscr >> 0x15) & 3);
  fVar4 = *(float *)(param_1 + 0x41c) / fVar4;
  if ((int)ALBW_AS_U32(fVar4) < 0x3f800000) {
    fVar3 = DAT_00287760;
    if (DAT_00287760 < fVar4) {
      func_00590EC8(fVar4,DAT_00287764);
      fVar3 = *(float *)(param_1 + 0x418) * fVar4;
    }
  }
  else {
    fVar3 = *(float *)(param_1 + 0x418);
  }
  iVar1 = *(int *)(param_1 + 0x40c);
  uVar2 = *(uint *)(iVar1 + 0x164) | 0x40000000;
  fVar3 = fVar3 / *(float *)(param_1 + 0x418);
  *(uint *)(iVar1 + 0x164) = uVar2;
  *(float *)(iVar1 + 0x74) = fVar3;
  *(float *)(iVar1 + 0x78) = fVar3;
  *(float *)(iVar1 + 0x7c) = fVar3;
  func_00169A80(*(int **)(param_1 + 0x410),uVar2,param_3,param_4);
  func_00168E9C(*(int **)(param_1 + 0x410),*(int *)(param_1 + 0x40c),(int *)0x0);
  return func_004CEAF0(*(int *)(param_1 + 0x40c));
}


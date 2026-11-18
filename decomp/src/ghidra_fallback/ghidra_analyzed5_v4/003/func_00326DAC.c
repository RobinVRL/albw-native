#include "ghidra_types.h"

extern undefined4 func_00151148(int param_1,int param_2);
extern int func_001512B4(int param_1,float *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_004ED9C8(int param_1);
extern float DAT_00326ea0;

// USA 00326DAC <- EU 00326D88 (Ghidra, non-matching)
// GLOBAL DAT_00326ea0 float

undefined4 func_00326DAC(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((*(int **)(param_1 + 0x494) != (int *)0x0) && (*(char *)(param_1 + 0x475) == '\0')) {
    func_00169A80(*(int **)(param_1 + 0x494),0,param_3,param_4);
    func_00168E9C(*(int **)(param_1 + 0x494),*(int *)(param_1 + 0x490),(int *)0x0);
  }
  iVar2 = *(int *)(param_1 + 0x490);
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar2 + 0x80),*(uint *)(param_1 + 1000),(float *)(param_1 + 0x3d0));
  func_004CEAF0(*(int *)(param_1 + 0x490));
  if (*(char *)(param_1 + 0x48c) == '\0') {
    iVar2 = *(int *)(param_1 + 0x538);
    if (iVar2 == 0) goto LAB_00326e30;
    iVar3 = 0;
LAB_00326e1c:
    func_00151148(iVar2,iVar3);
  }
  else if (*(char *)(param_1 + 0x48c) != '\a') {
    iVar2 = *(int *)(param_1 + 0x538);
    if (iVar2 == 0) goto LAB_00326e30;
    iVar3 = 1;
    goto LAB_00326e1c;
  }
  if (*(int *)(param_1 + 0x538) != 0) {
    func_001512B4(*(int *)(param_1 + 0x538),(float *)(param_1 + 0x3d0));
  }
LAB_00326e30:
  fVar1 = DAT_00326ea0;
  iVar2 = *(int *)(param_1 + 0x40c);
  if (iVar2 != 0) {
    uVar4 = *(undefined4 *)(param_1 + 0x3d4);
    uVar5 = *(undefined4 *)(param_1 + 0x3d8);
    *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_1 + 0x3d0);
    *(undefined4 *)(iVar2 + 8) = uVar4;
    *(undefined4 *)(iVar2 + 0xc) = uVar5;
    iVar2 = *(int *)(param_1 + 0x40c);
    *(float *)(iVar2 + 8) = *(float *)(iVar2 + 8) + *(float *)(param_1 + 0x498);
    iVar2 = *(int *)(param_1 + 0x40c);
    *(float *)(iVar2 + 0xc) = *(float *)(iVar2 + 0xc) - fVar1;
    return func_004ED9C8(*(int *)(param_1 + 0x49c));
  }
  return 0;
}


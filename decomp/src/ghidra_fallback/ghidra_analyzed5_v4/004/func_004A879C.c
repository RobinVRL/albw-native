#include "ghidra_types.h"

extern int func_0010F1DC(int *param_1,int *param_2);
extern void func_0010F1F8(int *param_1,float fparam_0);
extern undefined4 func_004A7F00(int param_1,int param_2,uint param_3);
extern int func_00581A18(undefined4 param_1,float *param_2,int param_3);
extern int func_00589A64(int param_1);
extern int *DAT_004a8900;
extern int DAT_004a8904;

// USA 004A879C <- EU 004A8774 (Ghidra, non-matching)
// GLOBAL DAT_004a8900 int *
// GLOBAL DAT_004a8904 int

undefined4 func_004A879C(int param_1,int param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  float fparam_0;
  
  *(uint *)(param_2 + 0x1c) = param_3;
  bVar1 = func_00589A64(param_2);
  if (bVar1) {
    iVar2 = *(int *)(param_2 + 0x10);
    if ((0x40000000 < (int)ALBW_AS_U32((*(float *)(iVar2 + 0x40) - *(float *)(iVar2 + 0x34)))) ||
       (fparam_0 = *(float *)(iVar2 + 0x48) - *(float *)(iVar2 + 0x3c), 0x40000000 < (int)ALBW_AS_U32(fparam_0)))
    {
LAB_004a88ec:
      return func_004A7F00(param_1,param_2,param_3);
    }
    iVar5 = (int)*(short *)(param_2 + 0x2c);
    if (iVar5 < 0) {
      iVar5 = (int)*(short *)(*(int *)(*DAT_004a8900 + 0x38) + DAT_004a8904);
    }
    uVar3 = func_00581A18(param_1,(float *)(iVar2 + 4),iVar5);
    piVar6 = (int *)(param_1 + 0x11c);
    uVar4 = uVar3;
    if (uVar3 < 0x2a4) {
      uVar4 = uVar3 * 9;
      piVar6 = (int *)(param_1 + 0x11c + uVar3 * 0x48);
    }
    if (param_3 < 6) {
      uVar4 = param_3 * 3;
    }
    iVar2 = *(int *)(param_2 + 0x3c);
    if (param_3 < 6) {
      piVar6 = piVar6 + uVar4;
    }
  }
  else {
    iVar2 = *(int *)(param_2 + 0x18);
    if ((0x40000000 < (int)ALBW_AS_U32((*(float *)(iVar2 + 0x40) - *(float *)(iVar2 + 0x34)))) ||
       (fparam_0 = *(float *)(iVar2 + 0x48) - *(float *)(iVar2 + 0x3c), 0x40000000 < (int)ALBW_AS_U32(fparam_0)))
    goto LAB_004a88ec;
    iVar5 = (int)*(short *)(param_2 + 0x2c);
    if (iVar5 < 0) {
      iVar5 = (int)*(short *)(*(int *)(*DAT_004a8900 + 0x38) + DAT_004a8904);
    }
    uVar3 = func_00581A18(param_1,(float *)(iVar2 + 4),iVar5);
    piVar6 = (int *)(param_1 + 0x11c);
    uVar4 = uVar3;
    if (uVar3 < 0x2a4) {
      uVar4 = uVar3 * 9;
      piVar6 = (int *)(param_1 + 0x11c + uVar3 * 0x48);
    }
    if (param_3 < 6) {
      uVar4 = param_3 * 3;
    }
    iVar2 = *(int *)(param_2 + 0x3c);
    if (param_3 < 6) {
      piVar6 = piVar6 + uVar4;
    }
  }
  if (iVar2 != 0) {
    *(undefined4 *)(param_2 + 0x3c) = 0;
    func_0010F1F8((int *)(param_2 + 0x30),fparam_0);
    *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + -1;
  }
  *(int **)(param_2 + 0x3c) = piVar6;
  func_0010F1DC(piVar6,(int *)(param_2 + 0x30));
  piVar6[2] = piVar6[2] + 1;
  return 0;
}


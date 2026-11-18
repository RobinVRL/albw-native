#include "ghidra_types.h"

extern int func_0010F1DC(int *param_1,int *param_2);
extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_004a8d48;
extern int *DAT_004a8d4c;
extern int DAT_004a8d50;
extern undefined4 DAT_004a8d54;

// USA 004A8BFC <- EU 004A8BD4 (Ghidra, non-matching)
// GLOBAL DAT_004a8d48 int *
// GLOBAL DAT_004a8d4c int *
// GLOBAL DAT_004a8d50 int
// GLOBAL DAT_004a8d54 undefined4

void func_004A8BFC(int param_1,int param_2,uint param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  float in_s0;
  
  *(char *)(param_2 + 0x20) = (char)param_3;
  iVar2 = *(int *)(param_2 + 0x10);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(iVar2 + 4);
    *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(iVar2 + 8);
    *(undefined4 *)(iVar2 + 0x24) = *(undefined4 *)(iVar2 + 0xc);
    *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar2 + 4);
    *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(iVar2 + 8);
    *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(iVar2 + 0xc);
  }
  piVar4 = DAT_004a8d48;
  iVar2 = (int)*(short *)(param_2 + 0x18);
  if (iVar2 == 0xff) {
    iVar2 = func_0052FBA0(*DAT_004a8d4c + 0x3dbbc,*(uint *)(param_2 + 0x14));
    if ((iVar2 == 0) || (sVar1 = *(short *)(iVar2 + 0x54), sVar1 < 0)) {
      sVar1 = *(short *)(*(int *)(*piVar4 + 0x38) + 0x15b40);
    }
    iVar2 = (int)sVar1;
    if (iVar2 < 0) {
      iVar2 = (int)*(short *)(*(int *)(*piVar4 + 0x38) + 0x15b40);
      goto LAB_004a8c98;
    }
LAB_004a8ca0:
    if (-1 < *(short *)(DAT_004a8d50 + *(int *)(*piVar4 + 0x38))) {
      iVar2 = *(int *)(*piVar4 + 0x38) + 0x183c + (int)(short)iVar2 * (int)(short)DAT_004a8d54 * 4;
      piVar4 = (int *)(iVar2 + 0x400);
      if (param_3 < 0xf) {
        iVar2 = param_3 * 3;
      }
      iVar3 = *(int *)(param_2 + 0x4c);
      if (param_3 < 0xf) {
        piVar4 = piVar4 + iVar2;
      }
      goto joined_r0x004a8cd4;
    }
  }
  else {
LAB_004a8c98:
    if (-1 < iVar2) goto LAB_004a8ca0;
  }
  if (param_3 < 0xf) {
    iVar2 = param_3 * 3;
  }
  iVar3 = *(int *)(param_2 + 0x4c);
  piVar4 = (int *)(param_1 + 0x10);
  if (param_3 < 0xf) {
    piVar4 = piVar4 + iVar2;
  }
joined_r0x004a8cd4:
  if (iVar3 != 0) {
    *(undefined4 *)(param_2 + 0x4c) = 0;
    func_0010F1F8((int *)(param_2 + 0x40),in_s0);
    *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + -1;
  }
  *(int **)(param_2 + 0x4c) = piVar4;
  func_0010F1DC(piVar4,(int *)(param_2 + 0x40));
  piVar4[2] = piVar4[2] + 1;
  return;
}


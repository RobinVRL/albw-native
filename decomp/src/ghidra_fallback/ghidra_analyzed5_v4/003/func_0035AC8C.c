#include "ghidra_types.h"

extern int func_001E410C(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_00332970(int param_1,undefined4 param_2);
extern int func_00332AB8(int param_1);
extern int func_00332BFC(int param_1);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004CEAF0(int param_1);
extern undefined4 *DAT_0035ad24;

// USA 0035AC8C <- EU 0035AC68 (Ghidra, non-matching)
// GLOBAL DAT_0035ad24 undefined4 *

undefined4 func_0035AC8C(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  uint in_fpscr;
  float fparam_0;
  
  if (*(char *)(param_1 + 0x518) == '\0') {
    func_00332970(param_1,*DAT_0035ad24);
    func_00332AB8(param_1);
    func_00332BFC(param_1);
    *(undefined1 *)(param_1 + 0x518) = 1;
  }
  piVar6 = *(int **)(param_1 + 0x4d4);
  piVar3 = (int *)(*(int *)(param_1 + 0x4dc) + *(char *)(param_1 + 0x4c4) * 8);
  uVar1 = *(uint *)(*(int *)(param_1 + 0x4dc) + *(char *)(param_1 + 0x4c4) * 8 + 4);
  if ((uVar1 & 1) != 0) {
    piVar3 = (int *)(*piVar3 + *(int *)((int)piVar6 + ((int)uVar1 >> 1)));
  }
  (*(code *)*piVar3)();
  iVar5 = *(int *)(param_1 + 0x4d0);
  iVar2 = *(int *)(param_1 + 0x4c0) + 1;
  *(int *)(param_1 + 0x4c0) = iVar2;
  uVar4 = extraout_r1;
  if (iVar5 != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(iVar5,1,fparam_0);
    uVar4 = extraout_r1_00;
  }
  func_001E410C(param_1,uVar4,iVar5,piVar6);
  return func_004CEAF0(*(int *)(param_1 + 0x47c));
}


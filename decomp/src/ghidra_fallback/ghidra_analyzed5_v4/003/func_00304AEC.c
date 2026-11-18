#include "ghidra_types.h"

extern int func_00165E28(int param_1,undefined2 param_2);
extern int func_001E410C(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004CEAF0(int param_1);
extern int DAT_00304b94;

// USA 00304AEC <- EU 00304AC8 (Ghidra, non-matching)
// GLOBAL DAT_00304b94 int

void func_00304AEC(int param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  uint in_fpscr;
  float fparam_0;
  
  piVar6 = (int *)(*(char *)(param_1 + 0x4c4) * 8 + 4);
  uVar1 = *(uint *)(*(int *)(param_1 + 0x4dc) + (int)piVar6);
  pcVar3 = *(code **)(*(int *)(param_1 + 0x4dc) + *(char *)(param_1 + 0x4c4) * 8);
  if ((uVar1 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(int *)(*(int *)(param_1 + 0x4d4) + ((int)uVar1 >> 1)));
  }
  (*pcVar3)((int)(*(int *)(param_1 + 0x4d4)) + ((int)uVar1 >> 1));
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
  func_004CEAF0(*(int *)(param_1 + 0x47c));
  if (*(char *)(param_1 + 0x51d) != '\0') {
    if (*(uint *)(param_1 + 0x50c) < *(uint *)(param_1 + 0x510)) {
      *(uint *)(param_1 + 0x50c) = *(uint *)(param_1 + 0x50c) + 1;
    }
    else {
      func_00165E28(*(int *)(param_1 + 0x508),*(undefined2 *)(DAT_00304b94 + 0x2a));
      *(undefined1 *)(param_1 + 0x51d) = 0;
    }
  }
  return;
}


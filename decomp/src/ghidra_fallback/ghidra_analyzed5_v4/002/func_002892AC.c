#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004356B4(int *param_1);
extern int func_004CEAF0(int param_1);
extern int func_004D7EB0(float *param_1,uint param_2,uint param_3,float *param_4);
extern uint DAT_00289424;
extern int *DAT_00289428;

// USA 002892AC <- EU 002892D4 (Ghidra, non-matching)
// GLOBAL DAT_00289424 uint
// GLOBAL DAT_00289428 int *

undefined4 func_002892AC(int param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  uint in_fpscr;
  float fparam_0;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0x428) + *(char *)(param_1 + 0x410) * 8 + 4);
  pcVar3 = *(code **)(*(int *)(param_1 + 0x428) + *(char *)(param_1 + 0x410) * 8);
  if ((uVar1 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(int *)(*(int *)(param_1 + 0x420) + ((int)uVar1 >> 1)));
  }
  (*pcVar3)((int)(*(int *)(param_1 + 0x420)) + ((int)uVar1 >> 1));
  iVar2 = *(int *)(param_1 + 0x40c) + 1;
  *(int *)(param_1 + 0x40c) = iVar2;
  if (*(int *)(param_1 + 0x41c) != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0x41c),1,fparam_0);
  }
  func_0014E2A0(param_1,*(undefined4 *)(param_1 + 0x434),param_1 + 0x438,DAT_00289424,0,0);
  func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3dc));
  *(int *)(param_1 + 0x45c) = *DAT_00289428 + *(int *)(param_1 + 0x45c);
  iVar2 = *(int *)(param_1 + 0x458);
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  func_004D7EB0((float *)(iVar2 + 0x80),*(uint *)(param_1 + 0x45c),*(uint *)(param_1 + 1000),
                (float *)(param_1 + 0x3d0));
  func_004CEAF0(*(int *)(param_1 + 0x458));
  iVar2 = *(int *)(param_1 + 0x434);
  if ((iVar2 != 0) && (*(char *)(*(int *)(param_1 + 0x430) + 0x61) != '\0')) {
    *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_1 + 0x3d0);
    *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(param_1 + 0x3d4);
    *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(param_1 + 0x3d8);
    return func_004356B4(*(int **)(param_1 + 0x434));
  }
  return 0;
}


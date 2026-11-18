#include "ghidra_types.h"

extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern uint DAT_0013ab54;

// USA 0013AA90 <- EU 0013AA90 (Ghidra, non-matching)
// GLOBAL DAT_0013ab54 uint

undefined4 func_0013AA90(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint in_fpscr;
  float fparam_0;
  
  iVar1 = *(short *)(param_1 + 0x440) + -1;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  *(short *)(param_1 + 0x440) = (short)iVar1;
  func_0014E2A0(param_1,*(undefined4 *)(param_1 + 0x410),param_1 + 0x450,DAT_0013ab54,0,0);
  piVar3 = (int *)(*(int *)(param_1 + 0x438) + *(char *)(param_1 + 0x420) * 8);
  uVar2 = *(uint *)(*(int *)(param_1 + 0x438) + *(char *)(param_1 + 0x420) * 8 + 4);
  if ((uVar2 & 1) != 0) {
    piVar3 = (int *)(*piVar3 + *(int *)(*(int *)(param_1 + 0x430) + ((int)uVar2 >> 1)));
  }
  (*(code *)*piVar3)();
  iVar1 = *(int *)(param_1 + 0x41c) + 1;
  *(int *)(param_1 + 0x41c) = iVar1;
  if (*(int *)(param_1 + 0x42c) != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
    return func_00352210(*(int *)(param_1 + 0x42c),1,fparam_0);
  }
  return 0;
}


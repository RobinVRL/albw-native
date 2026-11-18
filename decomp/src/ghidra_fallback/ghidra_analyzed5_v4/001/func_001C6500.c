#include "ghidra_types.h"

extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_001C6354(int param_1);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern uint DAT_001c65d8;

// USA 001C6500 <- EU 001C6500 (Ghidra, non-matching)
// GLOBAL DAT_001c65d8 uint

undefined4 func_001C6500(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint in_fpscr;
  float fparam_0;
  
  iVar1 = *(short *)(param_1 + 0x4c4) + -1;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  *(short *)(param_1 + 0x4c4) = (short)iVar1;
  if ((short)iVar1 == 0) {
    func_0014E2A0(param_1,*(undefined4 *)(param_1 + 0x4a0),param_1 + 0x4c8,DAT_001c65d8,0,0);
  }
  piVar3 = (int *)(*(int *)(param_1 + 0x430) + *(char *)(param_1 + 0x418) * 8);
  uVar2 = *(uint *)(*(int *)(param_1 + 0x430) + *(char *)(param_1 + 0x418) * 8 + 4);
  if ((uVar2 & 1) != 0) {
    piVar3 = (int *)(*piVar3 + *(int *)(*(int *)(param_1 + 0x428) + ((int)uVar2 >> 1)));
  }
  (*(code *)*piVar3)();
  iVar1 = *(int *)(param_1 + 0x414) + 1;
  *(int *)(param_1 + 0x414) = iVar1;
  if (*(int *)(param_1 + 0x424) != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0x424),1,fparam_0);
  }
  return func_001C6354(param_1);
}


#include "ghidra_types.h"

extern int func_003AACF4(int param_1,uint param_2);
extern void func_004AD9E8(int param_1,uint param_2,uint param_3,uint param_4,float fparam_0);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_005822A0(int param_1,uint param_2,undefined4 param_3);
extern int *DAT_003aaccc;

// USA 003AAC44 <- EU 003AAC20 (Ghidra, non-matching)
// GLOBAL DAT_003aaccc int *

undefined4 func_003AAC44(int param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  float in_s0;
  
  piVar1 = DAT_003aaccc;
  if (*(char *)(param_1 + 0x5b8) == '\0') {
    bVar2 = func_005822A0(*DAT_003aaccc,(uint)*(ushort *)(param_1 + 0x36),
                          (uint)*(byte *)(param_1 + 0x34));
    if (bVar2) {
      *(undefined1 *)(param_1 + 0x42c) = 1;
      func_003AACF4(param_1,1);
    }
  }
  else {
    bVar2 = func_005822A0(*DAT_003aaccc,(uint)*(ushort *)(param_1 + 0x36),
                          (uint)*(byte *)(param_1 + 0x34));
    if (bVar2) {
      func_004AD9E8(*piVar1,(uint)*(ushort *)(param_1 + 0x36),(uint)*(byte *)(param_1 + 0x34),
                    (uint)(*(char *)(param_1 + 0x5b7) == '\0'),in_s0);
    }
  }
  iVar3 = *(int *)(param_1 + 0x41c);
  *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar3 + 0x80),*(uint *)(param_1 + 1000),(float *)(param_1 + 0x3d0));
  return func_004CEAF0(*(int *)(param_1 + 0x41c));
}


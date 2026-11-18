#include "ghidra_types.h"

extern int func_0014D994(float *param_1,float fparam_0,float fparam_1,float fparam_2);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern float DAT_0039a414;
extern float DAT_0039a418;
extern float DAT_0039a41c;

// USA 0039A364 <- EU 0039A340 (Ghidra, non-matching)
// GLOBAL DAT_0039a414 float
// GLOBAL DAT_0039a418 float
// GLOBAL DAT_0039a41c float

void func_0039A364(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  uint in_fpscr;
  float fparam_0;
  
  if (*(char *)(*(int *)(*(int *)(param_1 + 4) + 0x8bc) + 10) != '\0') {
    if (*(int *)(param_1 + 0x4c) != 0) {
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
    }
    *(undefined1 *)(param_1 + 0x49) = 0;
    piVar1 = (int *)(*(int *)(param_1 + 0x2c) + *(char *)(param_1 + 0x14) * 8);
    uVar4 = *(uint *)(*(int *)(param_1 + 0x2c) + *(char *)(param_1 + 0x14) * 8 + 4);
    piVar5 = (int *)(*(int *)(param_1 + 0x24) + ((int)uVar4 >> 1));
    if ((uVar4 & 1) != 0) {
      piVar1 = (int *)(*piVar1 + *piVar5);
    }
    (*(code *)*piVar1)(piVar5);
    iVar2 = *(int *)(param_1 + 0x10) + 1;
    *(int *)(param_1 + 0x10) = iVar2;
    if (*(int *)(param_1 + 0x20) != 0) {
      fparam_0 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
      func_00352210(*(int *)(param_1 + 0x20),1,fparam_0);
    }
    func_0014D994((float *)(param_1 + 0x38),DAT_0039a41c,DAT_0039a418,DAT_0039a414);
    iVar2 = *(int *)(param_1 + 0x34);
    uVar3 = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(iVar2 + 0x74) = uVar3;
    *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
    *(undefined4 *)(iVar2 + 0x78) = uVar3;
    *(undefined4 *)(iVar2 + 0x7c) = uVar3;
  }
  return;
}


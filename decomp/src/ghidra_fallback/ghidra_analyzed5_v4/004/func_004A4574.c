#include "ghidra_types.h"

extern ulonglong func_00110710(uint param_1,uint param_2);

// USA 004A4574 <- EU 004A454C (Ghidra, non-matching)

void func_004A4574(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint in_fpscr;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar3 = *(uint *)(*(int *)(param_1 + 0x1c) + 8);
  iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
  iVar1 = iVar2;
  if (1 < uVar3) {
    iVar1 = iVar2 + 0x38;
  }
  uVar4 = VectorFloatToUnsigned(ALBW_AS_F32(*(undefined4 *)(iVar1 + 0x20)),3);
  uVar6 = func_00110710(param_2,uVar4);
  if (1 < uVar3) {
    iVar2 = iVar2 + 0x38;
  }
  uVar5 = ALBW_AS_U32(VectorUnsignedToFloat((int)((ulonglong)uVar6 >> 0x20),(byte)(in_fpscr >> 0x15) & 3));
  *(undefined4 *)(iVar2 + 0x14) = uVar5;
  *(undefined4 *)(*(int *)(iVar2 + 0x10) + 0x10) = uVar5;
  return;
}


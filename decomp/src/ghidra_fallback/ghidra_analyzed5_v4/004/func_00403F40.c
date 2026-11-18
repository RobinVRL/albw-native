#include "ghidra_types.h"


// USA 00403F40 <- EU 00403F20 (Ghidra, non-matching)

undefined4 func_00403F40(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  byte bVar1;
  int iVar2;
  uint in_fpscr;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  bVar1 = *(byte *)(param_1 + 0x33);
  uVar4 = *param_2;
  uVar5 = param_2[1];
  iVar2 = param_1 + (uint)bVar1 * 0x10;
  uVar6 = *param_3;
  uVar7 = param_3[1];
  uVar3 = ALBW_AS_U32(VectorUnsignedToFloat(bVar1 + 0x20,(byte)(in_fpscr >> 0x15) & 3));
  *(undefined4 *)(param_1 + 0x600) = uVar3;
  *(undefined4 *)(iVar2 + 0x3f8) = uVar4;
  *(undefined4 *)(iVar2 + 0x3fc) = uVar5;
  *(undefined4 *)(iVar2 + 0x400) = uVar6;
  *(undefined4 *)(iVar2 + 0x404) = uVar7;
  *(byte *)(param_1 + 0x33) = bVar1 + 1;
  return (undefined4)param_1;
}


#include "ghidra_types.h"


// USA 00403EA0 <- EU 00403E80 (Ghidra, non-matching)

undefined4 func_00403EA0(int param_1,undefined4 *param_2)

{
  int iVar1;
  uint in_fpscr;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  uVar4 = param_2[1];
  iVar1 = param_1 + (uint)*(byte *)(param_1 + 0x31) * 0x10;
  uVar5 = param_2[3];
  uVar6 = param_2[4];
  uVar7 = param_2[5];
  uVar8 = param_2[6];
  uVar2 = param_2[2];
  uVar3 = param_2[7];
  *(undefined4 *)(iVar1 + 0x1f8) = *param_2;
  uVar9 = param_2[8];
  *(undefined4 *)(iVar1 + 0x1fc) = uVar4;
  uVar4 = param_2[9];
  *(undefined4 *)(iVar1 + 0x200) = uVar2;
  uVar2 = param_2[10];
  uVar10 = param_2[0xb];
  *(undefined4 *)(iVar1 + 0x214) = uVar3;
  *(undefined4 *)(iVar1 + 0x218) = uVar9;
  *(undefined4 *)(iVar1 + 0x21c) = uVar4;
  *(undefined4 *)(iVar1 + 0x220) = uVar2;
  *(undefined4 *)(iVar1 + 0x224) = uVar10;
  *(undefined4 *)(iVar1 + 0x204) = uVar5;
  *(undefined4 *)(iVar1 + 0x208) = uVar6;
  *(undefined4 *)(iVar1 + 0x20c) = uVar7;
  *(undefined4 *)(iVar1 + 0x210) = uVar8;
  uVar2 = ALBW_AS_U32(VectorUnsignedToFloat((uint)*(byte *)(param_1 + 0x31),(byte)(in_fpscr >> 0x15) & 3));
  *(undefined4 *)(param_1 + 0x5fc) = uVar2;
  *(byte *)(param_1 + 0x31) = *(byte *)(param_1 + 0x31) + 3;
  return (undefined4)param_1;
}


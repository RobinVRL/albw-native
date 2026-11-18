#include "ghidra_types.h"

extern float DAT_00567ad0;

// USA 00567904 <- EU 005678DC (Ghidra, non-matching)
// GLOBAL DAT_00567ad0 float

void func_00567904(int param_1,int *param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  
  uVar1 = param_3 & 0xffff;
  iVar2 = *param_2 + uVar1 * 0x278;
  iVar5 = iVar2 + 4;
  if (*(char *)(param_1 + 0x29) == '\0') {
    *(undefined1 *)(iVar5 + param_4 + 0x164) = 0;
  }
  else {
    iVar3 = iVar5 + param_4;
    *(undefined1 *)(iVar3 + 0x164) = 1;
    if (*(char *)(param_1 + 0x28) == '\v') {
      *(undefined1 *)(iVar3 + 0x16c) = 1;
      *(undefined4 *)(*param_2 + uVar1 * 0x278 + param_4 * 4 + 0x238) =
           *(undefined4 *)(param_1 + 0x50);
      *(byte *)(iVar2 + 0x1a0) = *(byte *)(param_1 + 0x2b) & 0xf;
      *(byte *)(iVar2 + 0x1a2) = *(byte *)(param_1 + 0x2b) >> 4;
      *(byte *)(iVar2 + 0x1a1) = **(byte **)(param_1 + 0x50) & 1;
    }
    else {
      *(undefined1 *)(iVar3 + 0x16c) = 0;
      *(undefined4 *)(*param_2 + uVar1 * 0x278 + param_4 * 4 + 0x238) = 0;
    }
    if ((*(byte *)(param_1 + 0x2a) & 2) == 0) {
      *(undefined1 *)(iVar3 + 0x174) = 0;
      *(undefined4 *)(*param_2 + uVar1 * 0x278 + param_4 * 4 + 600) = 0;
    }
    else {
      *(undefined1 *)(iVar3 + 0x174) = 1;
      iVar3 = iVar5 + param_4 * 0x2c;
      fVar6 = DAT_00567ad0 / (*(float *)(param_1 + 0x58) - *(float *)(param_1 + 0x54));
      fVar7 = -(*(float *)(param_1 + 0x54) * fVar6);
      iVar2 = 0;
      if ((ABS(fVar6) == 0.0) || (iVar2 = ((uint)((int)ALBW_AS_U32(fVar6) << 1) >> 0x18) - 0x40, -1 < iVar2)) {
        uVar4 = (uint)((int)ALBW_AS_U32(fVar6) << 9) >> 0x14 | iVar2 << 0xc | ((uint)ALBW_AS_U32(fVar6) >> 0x1f) << 0x13;
      }
      else {
        uVar4 = ((uint)ALBW_AS_U32(fVar6) >> 0x1f) << 0x13;
      }
      *(uint *)(iVar3 + 0x24) = uVar4;
      iVar2 = 0;
      if ((ABS(fVar7) == 0.0) || (iVar2 = ((uint)((int)ALBW_AS_U32(fVar7) << 1) >> 0x18) - 0x40, -1 < iVar2)) {
        uVar4 = (uint)((int)ALBW_AS_U32(fVar7) << 9) >> 0x14 | iVar2 << 0xc | ((uint)ALBW_AS_U32(fVar7) >> 0x1f) << 0x13;
      }
      else {
        uVar4 = ((uint)ALBW_AS_U32(fVar7) >> 0x1f) << 0x13;
      }
      *(uint *)(iVar3 + 0x20) = uVar4;
      *(undefined4 *)(*param_2 + uVar1 * 0x278 + param_4 * 4 + 600) =
           *(undefined4 *)(param_1 + 0x4c);
    }
    iVar5 = iVar5 + param_4 * 0x2c;
    if ((*(byte *)(param_1 + 0x2a) & 1) == 0) {
      *(undefined1 *)(iVar5 + 5) = 0;
    }
    else {
      *(undefined1 *)(iVar5 + 5) = 1;
    }
    *(undefined4 *)(*param_2 + uVar1 * 0x278 + param_4 * 0x10 + 0x1b4) =
         *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(*param_2 + uVar1 * 0x278 + param_4 * 0x10 + 0x1b8) =
         *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(*param_2 + uVar1 * 0x278 + param_4 * 0x10 + 0x1bc) =
         *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(*param_2 + uVar1 * 0x278 + param_4 * 0x10 + 0x1c0) =
         *(undefined4 *)(param_1 + 0x3c);
  }
  return;
}


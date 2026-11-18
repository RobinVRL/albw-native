#include "ghidra_types.h"

extern float DAT_0044e564;

// USA 0044E4F8 <- EU 0044E4D0 (Ghidra, non-matching)
// GLOBAL DAT_0044e564 float

void func_0044E4F8(int param_1,float *param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  float fVar4;
  bool bVar5;
  uint in_fpscr;
  float fVar6;
  undefined4 uVar7;
  int iVar8;
  float fVar9;
  undefined4 uVar10;
  int iVar11;
  
  fVar4 = DAT_0044e564;
  fVar6 = *param_2;
  iVar8 = (int)fVar6;
  fVar9 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3);
  uVar1 = in_fpscr & 0xfffffff | (uint)(fVar9 == fVar6) << 0x1e | (uint)(fVar6 <= fVar9) << 0x1d;
  bVar3 = (byte)(uVar1 >> 0x18);
  bVar5 = (bool)(bVar3 >> 6);
  if (!bVar5) {
    uVar1 = in_fpscr & 0xfffffff | (uint)(DAT_0044e564 == fVar6) << 0x1e |
            (uint)(fVar6 <= DAT_0044e564) << 0x1d;
    bVar3 = (byte)(uVar1 >> 0x18);
    bVar5 = (bool)(bVar3 >> 6);
  }
  fVar6 = param_2[1];
  if ((bool)(bVar3 >> 5 & 1) && !bVar5) {
    iVar8 = iVar8 + -1;
  }
  iVar11 = (int)fVar6;
  uVar7 = ALBW_AS_U32(VectorSignedToFloat(iVar8,(byte)(uVar1 >> 0x15) & 3));
  fVar9 = (float)VectorSignedToFloat(iVar11,(byte)(uVar1 >> 0x15) & 3);
  uVar2 = uVar1 & 0xfffffff | (uint)(fVar9 == fVar6) << 0x1e | (uint)(fVar6 <= fVar9) << 0x1d;
  bVar3 = (byte)(uVar2 >> 0x18);
  bVar5 = (bool)(bVar3 >> 6);
  if (!bVar5) {
    uVar2 = uVar1 & 0xfffffff | (uint)(DAT_0044e564 == fVar6) << 0x1e |
            (uint)(fVar6 <= DAT_0044e564) << 0x1d;
    bVar3 = (byte)(uVar2 >> 0x18);
    bVar5 = (bool)(bVar3 >> 6);
  }
  if ((bool)(bVar3 >> 5 & 1) && !bVar5) {
    iVar11 = iVar11 + -1;
  }
  iVar8 = *(int *)(param_1 + 0x11c);
  uVar10 = ALBW_AS_U32(VectorSignedToFloat(iVar11,(byte)(uVar2 >> 0x15) & 3));
  *(undefined4 *)(iVar8 + 0x1c) = uVar7;
  *(undefined4 *)(iVar8 + 0x20) = uVar10;
  *(float *)(iVar8 + 0x24) = fVar4;
  *(byte *)(iVar8 + 0x44) = *(byte *)(iVar8 + 0x44) & 0xef | 0x10;
  *(byte *)(*(int *)(param_1 + 0x1c) + 0x70) = *(byte *)(*(int *)(param_1 + 0x1c) + 0x70) | 2;
  return;
}


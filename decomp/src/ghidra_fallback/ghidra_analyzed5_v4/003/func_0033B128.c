#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern float DAT_0033b254;
extern float DAT_0033b258;
extern float DAT_0033b25c;
extern int DAT_0033b260;
extern float DAT_0033b264;
extern float DAT_0033b268;
extern float DAT_0033b26c;

// USA 0033B128 <- EU 0033B104 (Ghidra, non-matching)
// GLOBAL DAT_0033b254 float
// GLOBAL DAT_0033b258 float
// GLOBAL DAT_0033b25c float
// GLOBAL DAT_0033b260 int
// GLOBAL DAT_0033b264 float
// GLOBAL DAT_0033b268 float
// GLOBAL DAT_0033b26c float

void func_0033B128(int param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  float *pfVar5;
  bool bVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar9 = DAT_0033b258;
  fVar10 = DAT_0033b254;
  if (*(uint *)(param_1 + 0x438) < *(uint *)(param_1 + 0x43c)) {
    iVar4 = *(uint *)(param_1 + 0x438) + 1;
    iVar2 = *(uint *)(param_1 + 0x43c) - iVar4;
    if (iVar2 < 2) {
      iVar2 = 1;
    }
    *(int *)(param_1 + 0x438) = iVar4;
    iVar4 = DAT_0033b260;
    fVar1 = DAT_0033b25c;
    fVar7 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    fVar8 = *(float *)(param_1 + 0x444);
    fVar8 = fVar8 + (fVar10 - fVar8) * (fVar9 / fVar7);
    *(float *)(param_1 + 0x444) = fVar8;
    uVar3 = *(uint *)(param_1 + 1000);
    pfVar5 = (float *)(iVar4 + (uVar3 >> 0x18) * 0x10);
    fVar9 = (float)VectorUnsignedToFloat(uVar3 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x3dc) = (*pfVar5 + pfVar5[1] * fVar9 * fVar1) * fVar8;
    fVar9 = DAT_0033b264;
    fVar7 = (float)VectorUnsignedToFloat(uVar3 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x3e4) = (pfVar5[2] + pfVar5[3] * fVar7 * fVar1) * fVar8;
    *(float *)(param_1 + 0x3e0) = *(float *)(param_1 + 0x3e0) - fVar9;
    func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3dc));
    fVar9 = *(float *)(param_1 + 0x3d4) - *(float *)(param_1 + 0xc);
    bVar6 = fVar10 <= fVar9;
    if (!bVar6) {
      fVar9 = *(float *)(param_1 + 0x3e0);
      bVar6 = fVar10 <= fVar9;
    }
    if (!bVar6) {
      uVar3 = *(uint *)(param_1 + 0x438);
      bVar6 = uVar3 < *(uint *)(param_1 + 0x43c);
      if (bVar6) {
        uVar3 = (uint)*(ushort *)(param_1 + 0x474);
      }
      if (bVar6 && uVar3 < 3) {
        fVar9 = fVar9 * DAT_0033b26c;
        *(float *)(param_1 + 0x444) = *(float *)(param_1 + 0x444) * DAT_0033b268;
        *(float *)(param_1 + 0x3e0) = fVar9;
        *(short *)(param_1 + 0x474) = (short)uVar3 + 1;
      }
      else {
        *(float *)(param_1 + 0x3d4) = *(float *)(param_1 + 0xc);
      }
    }
  }
  return;
}


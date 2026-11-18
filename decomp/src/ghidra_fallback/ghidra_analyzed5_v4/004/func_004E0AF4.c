#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_0052FBA0(int param_1,uint param_2);
extern float fRam004e0c58;
extern float fRam004e0c68;
extern float fRam004e0c6c;
extern float fRam004e0c70;
extern float fRam004e0c74;
extern float fRam004e0c78;
extern int iRam004e0c54;
extern float *pfRam004e0c60;
extern int *piRam004e0c5c;
extern int *piRam004e0c64;

// USA 004E0AF4 <- EU 004E0ACC (Ghidra, non-matching)
// GLOBAL UNK_004e0c54 int
// GLOBAL UNK_004e0c58 float
// GLOBAL UNK_004e0c5c int *
// GLOBAL UNK_004e0c60 float *
// GLOBAL UNK_004e0c64 int *
// GLOBAL UNK_004e0c68 float
// GLOBAL UNK_004e0c6c float
// GLOBAL UNK_004e0c70 float
// GLOBAL UNK_004e0c74 float
// GLOBAL UNK_004e0c78 float

void func_004E0AF4(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint in_fpscr;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define fStack_28 (*(float *)(albw_frame + 0x8))
  #define fStack_24 (*(float *)(albw_frame + 0xc))
  #define fStack_20 (*(float *)(albw_frame + 0x10))
  *(undefined1 *)(param_1 + 0x425) = 0;
  *(undefined1 *)(param_1 + 0x426) = 1;
  func_00151148(*(int *)(param_1 + 0x410),1);
  fVar8 = fRam004e0c58;
  iVar2 = iRam004e0c54;
  *(undefined4 *)(param_1 + 0x550) = 0;
  *(undefined2 *)(iVar2 + param_1) = 2;
  *(float *)(param_1 + 0x3dc) = fVar8;
  *(float *)(param_1 + 0x3e0) = fVar8;
  *(float *)(param_1 + 0x3e4) = fVar8;
  if ((((*(short *)(param_1 + 0x2c) == 0) &&
       (iVar2 = func_0052FBA0(*piRam004e0c5c + 0x3dbbc,*(uint *)(param_1 + 0x50)), iVar2 != 0)) &&
      ((uint)(int)*(short *)(param_1 + 0x2e) < *(uint *)(iVar2 + 0x478))) &&
     (iVar2 = *(int *)(*(int *)(iVar2 + 0x480) + *(short *)(param_1 + 0x2e) * 4), iVar2 != 0)) {
    uVar4 = *(undefined4 *)(iVar2 + 8);
    uVar5 = *(undefined4 *)(iVar2 + 0xc);
    *(undefined4 *)(param_1 + 0x504) = *(undefined4 *)(iVar2 + 4);
    *(undefined4 *)(param_1 + 0x508) = uVar4;
    *(undefined4 *)(param_1 + 0x50c) = uVar5;
    fStack_28 = *pfRam004e0c60;
    fStack_24 = pfRam004e0c60[1];
    fStack_20 = pfRam004e0c60[2];
    func_00115C70(&fStack_28,(float *)(param_1 + 0x3d0),(float *)(iVar2 + 4));
    iVar2 = *piRam004e0c64;
    fVar10 = fRam004e0c68;
    fStack_24 = fVar8;
    uVar3 = func_00111A64((uint *)(iVar2 + 0x660));
    fVar7 = (float)VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
    fVar9 = SQRT(fStack_28 * fStack_28 + fStack_24 * fStack_24 + fStack_20 * fStack_20);
    uVar3 = in_fpscr & 0xfffffff | (uint)(fVar9 < fVar8) << 0x1f | (uint)(fVar9 == fVar8) << 0x1e;
    uVar6 = uVar3 | (uint)(NAN(fVar9) || NAN(fVar8)) << 0x1c;
    bVar1 = (byte)(uVar3 >> 0x18);
    if (!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(uVar6 >> 0x1c) & 1)) {
      fVar9 = (fVar7 * fRam004e0c6c * fVar10 + fRam004e0c70) / fVar9;
      fStack_20 = fStack_20 * fVar9;
      fStack_24 = fStack_24 * fVar9;
      fStack_28 = fStack_28 * fVar9;
    }
    fVar8 = fRam004e0c74;
    fVar10 = fRam004e0c6c;
    uVar3 = func_00111A64((uint *)(iVar2 + 0x660));
    fVar7 = (float)VectorUnsignedToFloat(uVar3,(byte)(uVar6 >> 0x15) & 3);
    fVar8 = fVar7 * fVar10 * fVar8 + fRam004e0c78;
    *(float *)(param_1 + 0x3dc) = fStack_28;
    *(float *)(param_1 + 0x3e0) = fVar8;
    *(float *)(param_1 + 0x3e4) = fStack_20;
  }
  return;
}


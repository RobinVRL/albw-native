#include "ghidra_types.h"

extern longlong func_001104E4(int param_1,int param_2);
extern int func_00111A64(uint *param_1);
extern int func_004F8964(float *param_1,int param_2,float fparam_0);
extern float func_004F898C(void);
extern int func_004FB0D8(int param_1,float *param_2);
extern undefined8 func_0058A474(undefined4 param_1,uint param_2);
extern int func_0058A7D4(void);
extern float DAT_005021b0;
extern int DAT_005021b4;
extern float DAT_005021b8;
extern float DAT_005021bc;
extern float DAT_005021c0;
extern float DAT_005021c4;
extern float DAT_005021c8;
extern float DAT_005021cc;
extern float DAT_005021d0;
extern float DAT_005021d4;
extern float DAT_005021d8;

// USA 00501F2C <- EU 00501F04 (Ghidra, non-matching)
// GLOBAL DAT_005021b0 float
// GLOBAL DAT_005021b4 int
// GLOBAL DAT_005021b8 float
// GLOBAL DAT_005021bc float
// GLOBAL DAT_005021c0 float
// GLOBAL DAT_005021c4 float
// GLOBAL DAT_005021c8 float
// GLOBAL DAT_005021cc float
// GLOBAL DAT_005021d0 float
// GLOBAL DAT_005021d4 float
// GLOBAL DAT_005021d8 float

undefined4 func_00501F2C(int param_1)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  float *pfVar4;
  int iVar5;
  uint in_fpscr;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  longlong lVar16;
  undefined8 uVar17;
  
  iVar5 = DAT_005021b4;
  fVar9 = DAT_005021b0;
  uVar2 = *(int *)(param_1 + 0xa84) + *(int *)(param_1 + 1000);
  *(uint *)(param_1 + 1000) = uVar2;
  fVar14 = DAT_005021c8;
  fVar15 = DAT_005021c4;
  fVar13 = DAT_005021c0;
  fVar12 = DAT_005021bc;
  fVar11 = DAT_005021b8;
  pfVar4 = (float *)(iVar5 + (uVar2 >> 0x18) * 0x10);
  fVar7 = (float)VectorUnsignedToFloat(uVar2 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  fVar8 = (float)VectorUnsignedToFloat(uVar2 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0x3d0) =
       *(float *)(param_1 + 0x3d0) + (*pfVar4 + pfVar4[1] * fVar7 * fVar9) * DAT_005021b8;
  *(float *)(param_1 + 0x3d8) =
       *(float *)(param_1 + 0x3d8) + (pfVar4[2] + pfVar4[3] * fVar8 * fVar9) * fVar11;
  if ((*(int *)(param_1 + 0xa88) == 0) ||
     (iVar5 = *(int *)(param_1 + 0xa88) + -1, *(int *)(param_1 + 0xa88) = iVar5, iVar5 == 0)) {
    puVar3 = (uint *)func_0058A7D4();
    uVar2 = func_00111A64(puVar3);
    fVar9 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
    uVar10 = VectorFloatToUnsigned(DAT_005021d8 + fVar9 * fVar15 * fVar13 * DAT_005021d4,3);
    *(undefined4 *)(param_1 + 0xa88) = uVar10;
    fVar11 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0xa84),
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar11 = fVar11 * fVar12;
    iVar5 = (int)fVar11;
    fVar12 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3);
    fVar9 = fVar12;
    if (fVar12 != fVar11) {
      fVar9 = fVar14;
    }
    if (fVar11 <= fVar9 && (fVar12 != fVar11 && fVar14 != fVar11)) {
      iVar5 = iVar5 + -1;
    }
    *(int *)(param_1 + 0xa84) = iVar5;
    if (iVar5 < 1) {
      iVar5 = *(int *)(param_1 + 1000) + -0x40000000;
    }
    else {
      iVar5 = *(int *)(param_1 + 1000) + 0x40000000;
    }
    *(int *)(param_1 + 1000) = iVar5;
  }
  else if (*(char *)(param_1 + 0xa68) != '\0') {
    puVar3 = (uint *)func_0058A7D4();
    uVar2 = func_00111A64(puVar3);
    fVar9 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
    uVar10 = VectorFloatToUnsigned(DAT_005021d0 + fVar9 * fVar15 * fVar13 * DAT_005021cc,3);
    *(undefined4 *)(param_1 + 0xa88) = uVar10;
    lVar16 = func_001104E4(*(uint *)(param_1 + 0xa64),(uint)*(byte *)(param_1 + 0xa68));
    uVar17 = func_0058A474(param_1,0x32);
    if ((int)uVar17 == 0) {
      *(int *)(param_1 + 1000) = (int)lVar16 << 0x10;
    }
    else {
      iVar5 = *(int *)(param_1 + 1000);
      fVar9 = (float)VectorSignedToFloat((int)(short)((short)((uint)(iVar5 + 0x40000000) >> 0x10) -
                                                     (short)lVar16),(byte)(in_fpscr >> 0x15) & 3);
      uVar2 = in_fpscr & 0xfffffff | (uint)(fVar9 < fVar14) << 0x1f |
              (uint)(fVar9 == fVar14) << 0x1e;
      uVar6 = uVar2 | (uint)(NAN(fVar9) || NAN(fVar14)) << 0x1c;
      bVar1 = (byte)(uVar2 >> 0x18);
      if ((bool)(bVar1 >> 6 & 1) || bVar1 >> 7 != ((byte)(uVar6 >> 0x1c) & 1)) {
        fVar9 = -fVar9;
      }
      fVar11 = (float)VectorSignedToFloat((int)(short)((short)((uint)(iVar5 + -0x40000000) >> 0x10)
                                                      - (short)lVar16),(byte)(uVar6 >> 0x15) & 3);
      uVar2 = in_fpscr & 0xfffffff | (uint)(fVar11 < fVar14) << 0x1f |
              (uint)(fVar11 == fVar14) << 0x1e;
      in_fpscr = uVar2 | (uint)(NAN(fVar11) || NAN(fVar14)) << 0x1c;
      bVar1 = (byte)(uVar2 >> 0x18);
      if ((bool)(bVar1 >> 6 & 1) || bVar1 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
        fVar11 = -fVar11;
      }
      if ((int)fVar9 * 0x10000 < (int)fVar11 * 0x10000) {
        iVar5 = iVar5 + 0x40000000;
      }
      else {
        iVar5 = iVar5 + -0x40000000;
      }
      *(int *)(param_1 + 1000) = iVar5;
    }
    puVar3 = (uint *)func_0058A7D4();
    uVar2 = func_00111A64(puVar3);
    fVar9 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
    if ((int)ALBW_AS_U32((fVar9 * fVar15 * fVar13)) < 0x3f000000) {
      fVar11 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0xa84),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar11 = fVar11 * fVar12;
      iVar5 = (int)fVar11;
      fVar12 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3);
      fVar9 = fVar12;
      if (fVar12 != fVar11) {
        fVar9 = fVar14;
      }
      if (fVar11 <= fVar9 && (fVar12 != fVar11 && fVar14 != fVar11)) {
        iVar5 = iVar5 + -1;
      }
      *(int *)(param_1 + 0xa84) = iVar5;
    }
  }
  fVar9 = func_004F898C();
  func_004F8964((float *)(param_1 + 0x3e0),1,fVar9);
  return func_004FB0D8(param_1,(float *)(param_1 + 0x3e0));
}


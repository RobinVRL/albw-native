#include "ghidra_types.h"

extern int func_00413ECC(int param_1,float fparam_0);
extern int func_00413F7C(int param_1,float fparam_0);
extern int func_00414404(int param_1,float fparam_0);
extern int func_00414428(int param_1,uint param_2,float fparam_0);
extern int func_00414C18(int param_1,float fparam_0);
extern int func_00414EF4(int param_1,float fparam_0);
extern int func_00414F18(int param_1,int param_2,float fparam_0);
extern int func_00414F54(int param_1,float fparam_0);
extern float func_0056D544(int param_1,int param_2);
extern float DAT_0041a99c;
extern float DAT_0041a9a0;
extern float DAT_0041a9a4;
extern float DAT_0041a9a8;
extern float DAT_0041a9ac;

// USA 0041A728 <- EU 0041A708 (Ghidra, non-matching)
// GLOBAL DAT_0041a99c float
// GLOBAL DAT_0041a9a0 float
// GLOBAL DAT_0041a9a4 float
// GLOBAL DAT_0041a9a8 float
// GLOBAL DAT_0041a9ac float

void func_0041A728(int param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  float *pfVar5;
  int iVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 ((float *)(albw_frame + 0x0))
  if (*param_2 != '\0') {
    uVar1 = (uint)(byte)param_2[0xe];
    fVar10 = (float)VectorUnsignedToFloat((uint)(byte)param_2[0xd],(byte)(in_fpscr >> 0x15) & 3);
    if (uVar1 < 2) {
      iVar2 = uVar1 - 0x3f;
    }
    else {
      iVar2 = uVar1 - 0x40;
    }
    uVar16 = CONCAT44(DAT_0041a9a0,*(float *)(param_1 + 0xf4) * *(float *)(param_1 + 0x18));
    uVar1 = (uint)(byte)param_2[0xf];
    fVar7 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    if (uVar1 < 0x40) {
      fVar8 = (float)VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
      fVar8 = fVar8 * DAT_0041a9a8;
    }
    else {
      fVar8 = (float)VectorUnsignedToFloat(uVar1 + 1,(byte)(in_fpscr >> 0x15) & 3);
      fVar8 = fVar8 * DAT_0041a9ac;
    }
    uVar3 = (uint)*(char *)(param_1 + 0x2c);
    fVar12 = (float)VectorUnsignedToFloat((uint)(byte)param_2[0x13],(byte)(in_fpscr >> 0x15) & 3);
    uVar1 = (int)param_2[0x14];
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3;
    }
    fVar9 = (float)VectorUnsignedToFloat((uint)(byte)param_2[0x15],(byte)(in_fpscr >> 0x15) & 3);
    fVar11 = (float)VectorUnsignedToFloat
                              ((uint)*(byte *)(param_1 + 0xf8),(byte)(in_fpscr >> 0x15) & 3);
    fVar9 = fVar9 * DAT_0041a99c;
    if (uVar3 != 0xffffffff) {
      fVar9 = *(float *)(param_1 + 0x28);
    }
    uVar13 = CONCAT44(fVar9,*(float *)(param_2 + 0x1c) +
                            *(float *)(param_1 + 0x1c) + fVar7 * DAT_0041a9a8);
    uVar15 = CONCAT44(*(float *)(param_1 + 0x20) + *(float *)(param_2 + 0x20) + fVar8,
                      *(float *)(param_1 + 0x24) + fVar12 * DAT_0041a9ac);
    fVar7 = (float)VectorUnsignedToFloat((uint)(byte)param_2[0x10],(byte)(in_fpscr >> 0x15) & 3);
    uVar14 = CONCAT44((fVar7 * DAT_0041a99c - DAT_0041a9a0) +
                      (fVar11 * DAT_0041a99c - DAT_0041a9a0) + *(float *)(param_1 + 0x30),
                      *(float *)(param_2 + 0x18) *
                      fVar10 * DAT_0041a99c * *(float *)(param_1 + 0x14));
    uVar3 = 0;
    fVar10 = DAT_0041a99c;
    fVar7 = DAT_0041a9a4;
    do {
      pfVar5 = local_50 + uVar3;
      *pfVar5 = fVar7;
      fVar8 = func_0056D544(param_1,uVar3 & 0xff);
      fVar12 = *pfVar5;
      uVar4 = uVar3 + 1;
      *pfVar5 = fVar8 + fVar12;
      fVar9 = (float)VectorUnsignedToFloat
                               ((uint)*(byte *)(param_1 + uVar3 + 0xf9),(byte)(in_fpscr >> 0x15) & 3
                               );
      fVar8 = fVar8 + fVar12 + fVar9 * fVar10;
      *pfVar5 = fVar8;
      fVar12 = (float)VectorUnsignedToFloat
                                ((uint)(byte)param_2[uVar3 + 0x11],(byte)(in_fpscr >> 0x15) & 3);
      *pfVar5 = fVar8 + fVar12 * fVar10;
      uVar3 = uVar4;
    } while ((int)uVar4 < 2);
    iVar2 = 0;
    if (param_2[0xc] != '\0') {
      do {
        iVar6 = *(int *)(*(int *)(param_2 + iVar2 * 4 + 4) + 0x30);
        if (iVar6 != 0) {
          func_00414F54(iVar6,ALBW_AS_F32(uVar14));
          func_00414EF4(iVar6,ALBW_AS_F32(uVar16));
          func_00413ECC(iVar6,ALBW_AS_F32(uVar15));
          func_00414428(iVar6,uVar1,ALBW_AS_F32(((ulonglong)uVar13 >> 0x20)));
          func_00413F7C(iVar6,ALBW_AS_F32(((ulonglong)uVar14 >> 0x20)));
          uVar3 = 0;
          do {
            func_00414F18(iVar6,uVar3 & 0xff,local_50[uVar3]);
            uVar3 = uVar3 + 1;
          } while ((int)uVar3 < 2);
          fVar10 = ALBW_AS_F32(uVar13);
          if (param_2[0xc] == '\x01') {
            func_00414C18(iVar6,fVar10);
          }
          else if (param_2[0xc] == '\x02') {
            fVar7 = ALBW_AS_F32(((ulonglong)uVar16 >> 0x20));
            if (iVar2 == 0) {
              fVar10 = fVar10 - fVar7;
            }
            else if (iVar2 == 1) {
              fVar10 = fVar10 + fVar7;
            }
            func_00414C18(iVar6,fVar10);
          }
          func_00414404(iVar6,ALBW_AS_F32(((ulonglong)uVar15 >> 0x20)));
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)(uint)(byte)param_2[0xc]);
    }
  }
  return;
}


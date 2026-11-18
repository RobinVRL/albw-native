#include "ghidra_types.h"

extern longlong func_001104E4(int param_1,int param_2);
extern int func_0040E3AC(undefined1 *param_1,int param_2);
extern float func_004139B0(int param_1);
extern float func_00413ADC(float fparam_0);
extern int func_00413ECC(int param_1,float fparam_0);
extern int func_00413F7C(int param_1,float fparam_0);
extern int func_00414404(int param_1,float fparam_0);
extern int func_00414428(int param_1,uint param_2,float fparam_0);
extern int func_0041497C(int param_1);
extern int func_004149E4(int param_1);
extern int func_00414C18(int param_1,float fparam_0);
extern int func_00414EF4(int param_1,float fparam_0);
extern int func_00414F18(int param_1,int param_2,float fparam_0);
extern int func_00414F54(int param_1,float fparam_0);
extern int func_00417E24(void);
extern int func_00417F50(undefined4 *param_1,undefined4 *param_2);
extern int func_0041D698(int param_1,int param_2);
extern float func_0056A148(char *param_1);
extern float func_0056F090(float *param_1);
extern float DAT_0041d1c4;
extern float DAT_0041d1c8;
extern float DAT_0041d1cc;
extern float DAT_0041d1d0;
extern float DAT_0041d1d4;
extern float DAT_0041d1d8;

// USA 0041CE60 <- EU 0041CE40 (Ghidra, non-matching)
// GLOBAL DAT_0041d1c4 float
// GLOBAL DAT_0041d1c8 float
// GLOBAL DAT_0041d1cc float
// GLOBAL DAT_0041d1d0 float
// GLOBAL DAT_0041d1d4 float
// GLOBAL DAT_0041d1d8 float

undefined4 func_0041CE60(undefined4 *param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  ushort uVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  float fparam_0;
  longlong lVar13;
  
  if (*(char *)((int)param_1 + 0x131) != '\0') {
    if (*(char *)(param_1 + 0x4c) != '\0') {
      param_2 = 0;
    }
    uVar6 = *(ushort *)(param_1 + 0x60);
    if (uVar6 < *(ushort *)((int)param_1 + 0x17e)) {
      uVar6 = uVar6 + 1;
      *(ushort *)(param_1 + 0x60) = uVar6;
    }
    if ((uint)uVar6 < (uint)*(ushort *)((int)param_1 + 0x17e)) {
      bVar1 = *(byte *)(param_1 + 0x5f);
      lVar13 = func_001104E4(((uint)*(byte *)((int)param_1 + 0x17d) - (uint)bVar1) * (uint)uVar6,
                             (uint)*(ushort *)((int)param_1 + 0x17e));
      uVar2 = (int)lVar13 + (uint)bVar1 & 0xff;
    }
    else {
      uVar2 = (uint)*(byte *)((int)param_1 + 0x17d);
    }
    fVar7 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
    fVar7 = fVar7 * DAT_0041d1c4 * ALBW_AS_F32(param_1[0x5b]) * ALBW_AS_F32(param_1[0x4e]);
    if ((*(char *)(param_1 + 0x24) == '\x04') &&
       (fVar8 = func_0056A148(param_1 + 0x24), (uint)ALBW_AS_U32(DAT_0041d1c8) < (uint)ALBW_AS_U32(fVar8))) {
      if (param_1[0x68] != 0) {
        func_004149E4(param_1[0x68]);
        func_0041497C(param_1[0x68]);
        param_1[0x68] = 0;
        *(undefined1 *)(param_1 + 0x4c) = 0;
        *(undefined1 *)((int)param_1 + 0x131) = 0;
        if ((code *)param_1[0x66] != (code *)0x0) {
          (*(code *)param_1[0x66])(param_1,0,param_1[0x67]);
        }
        if (*(char *)((int)param_1 + 0x132) != '\0') {
          *(undefined1 *)((int)param_1 + 0x132) = 0;
          puVar3 = func_00417E24();
          return func_00417F50(puVar3,param_1);
        }
      }
    }
    else {
      uVar2 = in_fpscr & 0xfffffff | (uint)(ALBW_AS_F32(param_1[0x58]) == DAT_0041d1cc) << 0x1e;
      fVar8 = DAT_0041d1cc;
      if (!SUB41(uVar2 >> 0x1e,0)) {
        iVar4 = param_1[0x5a];
        if ((int)param_1[0x59] < iVar4) {
          fVar8 = (float)VectorSignedToFloat(iVar4,(byte)(uVar2 >> 0x15) & 3);
          fVar9 = (float)VectorSignedToFloat(iVar4 - param_1[0x59],(byte)(uVar2 >> 0x15) & 3);
          fVar8 = (fVar9 * ALBW_AS_F32(param_1[0x58])) / fVar8;
        }
      }
      iVar4 = 0;
      fVar9 = (float)VectorSignedToFloat((uint)*(byte *)((int)param_1 + 0x192) -
                                         (uint)*(byte *)((int)param_1 + 0x193),
                                         (byte)(uVar2 >> 0x15) & 3);
      fVar8 = fVar8 + fVar9 + ALBW_AS_F32(param_1[0x57]);
      do {
        if (*(char *)((int)param_1 + iVar4 + 300) == '\0') {
          fVar9 = func_0056F090((float *)(param_1 + iVar4 * 8 + 0x2b));
          fVar8 = fVar9 + fVar8;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 4);
      if (ALBW_AS_F32(param_1[0x61]) == fVar8) {
        fVar9 = ALBW_AS_F32(param_1[0x62]);
      }
      else {
        fVar9 = func_004139B0((int)(fVar8 * DAT_0041d1d0));
        param_1[0x61] = ALBW_AS_U32(fVar8);
        param_1[0x62] = ALBW_AS_U32(fVar9);
      }
      iVar4 = 0;
      fVar8 = ALBW_AS_F32(param_1[0x5c]) + ALBW_AS_F32(param_1[0x50]);
      uVar11 = (ulonglong)(uint)ALBW_AS_U32((ALBW_AS_F32(param_1[0x5e]) * ALBW_AS_F32(param_1[0x4f]) * fVar9));
      do {
        if (*(char *)((int)param_1 + iVar4 + 300) == '\x02') {
          fVar9 = func_0056F090((float *)(param_1 + iVar4 * 8 + 0x2b));
          fVar8 = fVar9 + fVar8;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 4);
      uVar12 = CONCAT44(ALBW_AS_F32(param_1[0x5d]) + ALBW_AS_F32(param_1[0x51]),(int)uVar11);
      if (param_2 != 0) {
        if (*(char *)((int)param_1 + 0x133) != '\0') {
          iVar5 = param_1[0x59] + 5;
          iVar4 = param_1[0x5a];
          if (iVar5 <= (int)param_1[0x5a]) {
            iVar4 = iVar5;
          }
          param_1[0x59] = iVar5;
          param_1[0x59] = iVar4;
        }
        iVar4 = 0;
        do {
          func_0041D698((int)(param_1 + iVar4 * 8 + 0x2b),5);
          iVar4 = iVar4 + 1;
        } while (iVar4 < 4);
        func_0040E3AC((undefined1 *)(param_1 + 0x24),5);
      }
      fparam_0 = ALBW_AS_F32(param_1[0x52]) + DAT_0041d1d4;
      fVar9 = func_0056A148(param_1 + 0x24);
      fVar9 = func_00413ADC(fVar9);
      fVar9 = fVar9 * fVar7;
      iVar4 = 0;
      fVar7 = DAT_0041d1d8;
      do {
        if (*(char *)((int)param_1 + iVar4 + 300) == '\x01') {
          fVar10 = func_0056F090((float *)(param_1 + iVar4 * 8 + 0x2b));
          fVar10 = func_00413ADC(fVar10 * fVar7);
          fVar9 = fVar10 * fVar9;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 4);
      if (param_1[0x68] != 0) {
        func_00414F54(param_1[0x68],fVar9);
        func_00414EF4(param_1[0x68],ALBW_AS_F32(uVar12));
        fVar7 = ALBW_AS_F32(((ulonglong)uVar12 >> 0x20));
        func_00414C18(param_1[0x68],fVar8);
        func_00414404(param_1[0x68],fVar7);
        func_00413ECC(param_1[0x68],fparam_0);
        func_00414428(param_1[0x68],(uint)*(byte *)((int)param_1 + 0x136),ALBW_AS_F32(param_1[0x53]));
        func_00413F7C(param_1[0x68],ALBW_AS_F32(param_1[0x54]));
        uVar2 = 0;
        do {
          func_00414F18(param_1[0x68],uVar2 & 0xff,ALBW_AS_F32(param_1[uVar2 + 0x55]));
          uVar2 = uVar2 + 1;
        } while ((int)uVar2 < 2);
      }
    }
  }
  return 0;
}


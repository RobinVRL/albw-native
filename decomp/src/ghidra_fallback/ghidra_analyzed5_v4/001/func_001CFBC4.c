#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0019B04C(uint param_1);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_004C43E0(int param_1,int *param_2);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_00520FC0(void);
extern int func_00581D60(int param_1);
extern int func_005841D8(int param_1,undefined4 param_2);
extern int func_00588BE4(int param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int *DAT_001cfe94;
extern undefined4 *DAT_001cfe98;
extern float DAT_001cfe9c;
extern float DAT_001cfea0;
extern float DAT_001cfea4;
extern int DAT_001cfea8;
extern uint *DAT_001cfeac;
extern int *DAT_001cfeb0;
extern uint *DAT_001cfeb4;
extern int *DAT_001cfeb8;
extern float *DAT_001cfebc;
extern float DAT_001cfec0;
extern float DAT_001cfec4;
extern float DAT_001cfec8;
extern float DAT_001cfecc;
extern undefined4 DAT_001cfed0;
extern int *DAT_001cfed4;
extern int DAT_001cfef0;
extern char s_SE_Kokko_V_BIRTH_KOKKO_001cfed8[];

// USA 001CFBC4 <- EU 001CFBC4 (Ghidra, non-matching)
// GLOBAL DAT_001cfe94 int *
// GLOBAL DAT_001cfe98 undefined4 *
// GLOBAL DAT_001cfe9c float
// GLOBAL DAT_001cfea0 float
// GLOBAL DAT_001cfea4 float
// GLOBAL DAT_001cfea8 int
// GLOBAL DAT_001cfeac uint *
// GLOBAL DAT_001cfeb0 int *
// GLOBAL DAT_001cfeb4 uint *
// GLOBAL DAT_001cfeb8 int *
// GLOBAL DAT_001cfebc float *
// GLOBAL DAT_001cfec0 float
// GLOBAL DAT_001cfec4 float
// GLOBAL DAT_001cfec8 float
// GLOBAL DAT_001cfecc float
// GLOBAL DAT_001cfed0 undefined4
// GLOBAL DAT_001cfed4 int *
// GLOBAL DAT_001cfef0 int
// GLOBAL s_SE_Kokko_V_BIRTH_KOKKO_001cfed8 string

void func_001CFBC4(int *param_1)

{
  undefined4 *puVar1;
  uint *puVar2;
  int *piVar3;
  uint *puVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  float *pfVar8;
  undefined4 uVar9;
  uint uVar10;
  uint in_fpscr;
  float fVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  _Alignas(8) unsigned char albw_frame[0x320];
  #define local_320 (*(int *)(albw_frame + 0x0))
  #define local_31c (*(float *)(albw_frame + 0x4))
  #define fStack_318 (*(float *)(albw_frame + 0x8))
  #define fStack_314 (*(float *)(albw_frame + 0xc))
  #define local_304 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_300 (*(int *)(albw_frame + 0x20))
  #define local_2fc (*(undefined4 *)(albw_frame + 0x24))
  #define local_2f6 (*(ushort *)(albw_frame + 0x2a))
  #define local_2f4 (*(undefined2 *)(albw_frame + 0x2c))
  #define local_2d8 (*(undefined4 *)(albw_frame + 0x48))
  #define local_2d4 (*(int *)(albw_frame + 0x4c))
  #define local_2d0 (*(undefined2 *)(albw_frame + 0x50))
  #define local_60 (*(undefined4 *)(albw_frame + 0x2c0))
  #define local_58 (*(float *)(albw_frame + 0x2c8))
  #define local_54 (*(float *)(albw_frame + 0x2cc))
  #define fStack_50 (*(float *)(albw_frame + 0x2d0))
  #define local_48 (*(float *)(albw_frame + 0x2d8))
  #define fStack_44 (*(float *)(albw_frame + 0x2dc))
  #define fStack_40 (*(float *)(albw_frame + 0x2e0))
  #define local_38 (*(int *)(albw_frame + 0x2e8))
  #define local_34 (*(char * *)(albw_frame + 0x2ec))
  if (((((char)param_1[0x178] != '\x01') && (9 < *(byte *)((int)param_1 + 0x5d6))) &&
      (*(undefined1 *)((int)param_1 + 0x5d6) = 10, *(char *)((int)param_1 + 0x5db) != '\0')) &&
     ((*(char *)(*DAT_001cfe94 + 0x70) != '\0' &&
      (((short)param_1[0x175] != 0 || (bVar5 = func_00588BF0((int)param_1,0), !bVar5)))))) {
    puVar1 = DAT_001cfe98;
    if ((uint)param_1[0x16a] < (uint)param_1[0x16b]) {
      param_1[0x16a] = param_1[0x16a] + 1;
    }
    else {
      fVar13 = DAT_001cfe9c;
      uVar6 = func_00111A64((uint *)*DAT_001cfe98);
      iVar7 = DAT_001cfea8;
      fVar15 = DAT_001cfea0;
      fVar11 = (float)VectorUnsignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
      iVar12 = VectorFloatToUnsigned(DAT_001cfea4 + fVar11 * DAT_001cfea0 * fVar13 * DAT_001cfea4,3)
      ;
      param_1[0x16b] = iVar12;
      if (iVar12 == 0) {
        param_1[0x16c] = iVar7;
      }
      else {
        fVar11 = (float)VectorUnsignedToFloat(iVar12,(byte)(in_fpscr >> 0x15) & 3);
        param_1[0x16c] = (int)ALBW_AS_U32((fVar13 / fVar11));
      }
      piVar3 = DAT_001cfeb0;
      puVar2 = DAT_001cfeac;
      param_1[0x16a] = 0;
      iVar7 = func_005841D8(*piVar3,*puVar2);
      puVar4 = DAT_001cfeb4;
      iVar12 = func_005841D8(*piVar3,*DAT_001cfeb4);
      if (iVar7 < 0x47) {
        iVar7 = iVar12;
      }
      if (iVar7 < 0x47) {
        pfVar8 = (float *)func_00520FC0();
        local_48 = *pfVar8;
        fStack_44 = pfVar8[1];
        fStack_40 = pfVar8[2];
        local_58 = *DAT_001cfebc;
        local_54 = DAT_001cfebc[1];
        fStack_50 = DAT_001cfebc[2];
        pfVar8 = *(float **)(*DAT_001cfeb8 + 0x20);
        fVar11 = *pfVar8;
        fVar13 = pfVar8[2];
        if ((int)ALBW_AS_U32((fVar11 * fVar11 + fVar13 * fVar13)) < 0x3f000000) {
          fVar13 = DAT_001cfec0;
          fVar11 = DAT_001cfec4;
          uVar6 = func_00111A64((uint *)*puVar1);
          fVar14 = (float)VectorUnsignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
          func_004D80A4(&local_58,(int)((fVar14 * fVar15 * fVar11 + DAT_001cfec8) * DAT_001cfecc),
                        fVar13);
        }
        else {
          func_004D80A4(&local_58,**(uint **)(*DAT_001cfeb8 + 0x24),DAT_001cfec0);
        }
        local_54 = ALBW_AS_F32(DAT_001cfed0);
        func_00115C54(&local_48,&local_48,&local_58);
        local_300 = 0;
        local_2fc = 0;
        local_304 = 0;
        local_2d8 = 0;
        local_2d4 = 0;
        local_60 = 0;
        func_002DFF7C(&local_320);
        uVar6 = func_00588BE4((int)param_1);
        uVar10 = *puVar2;
        if (uVar6 == uVar10) {
          local_320 = func_0019B04C(uVar10);
        }
        else {
          local_320 = func_0019B04C(*puVar4);
        }
        uVar9 = func_00581D60(*DAT_001cfed4);
        local_2d0 = (undefined2)uVar9;
        local_300 = param_1[0xfa];
        local_31c = local_48;
        fStack_318 = fStack_44;
        fStack_314 = fStack_40;
        local_2f6 = (ushort)*(byte *)((int)param_1 + 0x5df);
        local_2f4 = 1;
        local_2d4 = param_1[0xb3];
        func_004C43E0(*piVar3,&local_320);
        local_34 = s_SE_Kokko_V_BIRTH_KOKKO_001cfed8;
        local_38 = DAT_001cfef0;
        func_00150A84(param_1,&local_38,0);
      }
    }
  }
  return;
}


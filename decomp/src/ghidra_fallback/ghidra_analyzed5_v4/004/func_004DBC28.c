#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern undefined8 func_00259354(int param_1,int *param_2,int param_3);
extern int func_00520FC0(void);
extern int func_0052FBDC(int param_1,int param_2,int param_3);
extern int func_00588BE4(int param_1);
extern int func_0068C690(float *param_1);
extern int *DAT_004dbdfc;
extern int *DAT_004dbe00;
extern float DAT_004dbe04;
extern float DAT_004dbe08;
extern float DAT_004dbe0c;
extern float DAT_004dbe10;
extern int DAT_004dbe14;
extern int DAT_004dbe18;
extern int DAT_004dbe1c;
extern undefined4 *DAT_004dbe20;
extern int DAT_004dbe24;
extern int *DAT_004dbe28;

// USA 004DBC28 <- EU 004DBC00 (Ghidra, non-matching)
// GLOBAL DAT_004dbdfc int *
// GLOBAL DAT_004dbe00 int *
// GLOBAL DAT_004dbe04 float
// GLOBAL DAT_004dbe08 float
// GLOBAL DAT_004dbe0c float
// GLOBAL DAT_004dbe10 float
// GLOBAL DAT_004dbe14 int
// GLOBAL DAT_004dbe18 int
// GLOBAL DAT_004dbe1c int
// GLOBAL DAT_004dbe20 undefined4 *
// GLOBAL DAT_004dbe24 int
// GLOBAL DAT_004dbe28 int *

undefined8 func_004DBC28(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar16;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_60 (*(float *)(albw_frame + 0x0))
  #define uStack_5c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_58 (*(undefined4 *)(albw_frame + 0x8))
  #define local_54 (*(float *)(albw_frame + 0xc))
  #define uStack_50 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x14))
  #define local_40 (*(int *)(albw_frame + 0x20))
  #define local_3c (*(undefined4 *)(albw_frame + 0x24))
  ulonglong uVar15;
  
  bVar1 = false;
  pfVar4 = (float *)func_00520FC0();
  piVar3 = DAT_004dbe00;
  piVar2 = DAT_004dbdfc;
  fVar13 = *pfVar4;
  fVar12 = pfVar4[1];
  fVar14 = pfVar4[2];
  uVar15 = (ulonglong)(uint)ALBW_AS_U32(fVar14);
  iVar7 = 1;
  if (1 < *(byte *)(param_1 + 0x17)) {
    do {
      iVar6 = (int)*(short *)((int)param_1 + iVar7 * 6 + 0x5e);
      if (((0 < iVar6) && (iVar6 = func_0052FBDC(*piVar2 + 0x3dbbc,iVar6,0), iVar6 != 0)) &&
         (iVar5 = func_00588BE4(iVar6), iVar5 == *piVar3)) {
        if (bVar1) {
          pfVar4 = (float *)func_00520FC0();
          fVar11 = *pfVar4 - fVar13;
          fVar9 = *pfVar4 - *(float *)(iVar6 + 0x3d0);
          fVar14 = pfVar4[2] - ALBW_AS_F32(uVar15);
          fVar8 = pfVar4[2] - *(float *)(iVar6 + 0x3d8);
          if (fVar9 * fVar9 + fVar8 * fVar8 < fVar11 * fVar11 + fVar14 * fVar14) {
            fVar13 = *(float *)(iVar6 + 0x3d0);
            fVar12 = *(float *)(iVar6 + 0x3d4);
            uVar15 = (ulonglong)*(uint *)(iVar6 + 0x3d8);
          }
        }
        else {
          bVar1 = true;
          fVar13 = *(float *)(iVar6 + 0x3d0);
          fVar12 = *(float *)(iVar6 + 0x3d4);
          uVar15 = (ulonglong)*(uint *)(iVar6 + 0x3d8);
        }
      }
      fVar14 = ALBW_AS_F32(uVar15);
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)(uint)*(byte *)(param_1 + 0x17));
  }
  fVar8 = DAT_004dbe04;
  fVar9 = fVar14 + DAT_004dbe0c;
  fVar10 = fVar12 + DAT_004dbe08;
  fVar11 = fVar13 - DAT_004dbe04;
  param_1[0xdc] = (int)ALBW_AS_U32(fVar9);
  param_1[0xda] = (int)ALBW_AS_U32(fVar11);
  param_1[0xdb] = (int)ALBW_AS_U32(fVar10);
  param_1[0xf6] = (int)ALBW_AS_U32(fVar9);
  iVar7 = DAT_004dbe14;
  param_1[0xf4] = (int)ALBW_AS_U32(fVar11);
  param_1[0xf5] = (int)ALBW_AS_U32(fVar10);
  fVar9 = DAT_004dbe10;
  param_1[0x20d] = iVar7;
  param_1[0x26c] = (int)ALBW_AS_U32((fVar12 + fVar9));
  param_1[0x267] = (int)ALBW_AS_U32(fVar13);
  param_1[0x268] = (int)ALBW_AS_U32(fVar12);
  param_1[0x269] = (int)ALBW_AS_U32(fVar14);
  func_00115C70(&local_60,(float *)(param_1 + 0x267),(float *)(param_1 + 0xf4));
  local_54 = local_60;
  uStack_50 = uStack_5c;
  uStack_4c = uStack_58;
  iVar6 = func_0068C690(&local_54);
  iVar7 = DAT_004dbe18;
  param_1[0xfa] = iVar6;
  *(undefined2 *)(iVar7 + (int)param_1) = 0x3c;
  (**(code **)(*param_1 + 0xac))(param_1,4,0xffffffff);
  iVar7 = DAT_004dbe1c;
  param_1[0x22b] = param_1[0x22b] & 0xfffffffd;
  *(float *)(param_1[0x1e8] + 0x134) = fVar8;
  iVar6 = param_1[0x236];
  param_1[0x236] = iVar7;
  local_40 = DAT_004dbe24;
  param_1[0x26d] = iVar6;
  local_3c = *DAT_004dbe20;
  uVar16 = func_00259354(*DAT_004dbe28,&local_40,0x78);
  return uVar16;
}


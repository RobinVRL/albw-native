#include "ghidra_types.h"

extern int func_0010C7F8(int param_1,int param_2,float fparam_0);
extern int func_001DF5C4(int param_1,int param_2,float fparam_0);
extern int func_001DF80C(int param_1,int param_2,float fparam_0);
extern int func_001DF984(int param_1,int param_2,float fparam_0);
extern int func_001DFEE0(int param_1,int param_2);
extern int func_001E007C(int param_1);
extern int func_001E01A8(int param_1,undefined4 param_2);
extern int func_001E02FC(int param_1,int param_2,float fparam_0);
extern int func_001E05CC(int param_1,undefined4 param_2);
extern int func_001E0634(int param_1,int param_2,float fparam_0,float fparam_1);
extern int func_0025BAE4(int param_1,int param_2);
extern int func_00489A8C(int param_1,float fparam_0,float fparam_1);
extern int func_00489AD8(int param_1);
extern float func_004906A8(float fparam_0);
extern int func_0056A120(int param_1);
extern uint *DAT_00321d20;
extern undefined4 DAT_00321d24;
extern float DAT_00321d28;
extern float DAT_00321d2c;
extern int DAT_00321d30;
extern float DAT_00321d34;

// USA 00321A24 <- EU 00321A00 (Ghidra, non-matching)
// GLOBAL DAT_00321d20 uint *
// GLOBAL DAT_00321d24 undefined4
// GLOBAL DAT_00321d28 float
// GLOBAL DAT_00321d2c float
// GLOBAL DAT_00321d30 int
// GLOBAL DAT_00321d34 float

undefined4 func_00321A24(int param_1)

{
  uint *puVar1;
  uint uVar2;
  float *pfVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float in_s1;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar1 = DAT_00321d20;
  uVar2 = *DAT_00321d20;
  bVar8 = *(char *)(uVar2 + 0x79) == '\0';
  if (bVar8) {
    uVar2 = (uint)*(byte *)(uVar2 + 0x7a);
  }
  if (!bVar8 || uVar2 != 0) {
    if (*(char *)(param_1 + 0xa8) != '\0') {
      return 0;
    }
    uVar2 = 1;
  }
  *(char *)(param_1 + 0xa8) = (char)uVar2;
  iVar6 = *(int *)(param_1 + 0x14);
  iVar7 = 0;
  iVar5 = *(int *)(param_1 + 0xc) - iVar6;
  uVar14 = CONCAT44(DAT_00321d24,DAT_00321d24);
  uVar15 = CONCAT44(DAT_00321d24,DAT_00321d24);
  uVar16 = CONCAT44(DAT_00321d24,DAT_00321d24);
  do {
    if (iVar5 == (param_1 + 8) - iVar6) {
      piVar4 = func_0025BAE4(*(int *)(*puVar1 + 0x40),*(int *)(param_1 + 0x24));
      if (piVar4 != (int *)0x0) {
        if (*(int *)(param_1 + 0x10) == iVar7) {
          func_001E01A8((int)piVar4,1);
        }
        else {
          func_001E05CC((int)piVar4,5);
        }
        fVar9 = DAT_00321d28;
        if (ALBW_AS_F32(((ulonglong)uVar16 >> 0x20)) < ALBW_AS_F32(uVar14)) {
          fVar10 = ALBW_AS_F32(((ulonglong)uVar14 >> 0x20)) / ALBW_AS_F32(uVar14);
          if (*(int *)(param_1 + 0x20) == 0) {
            func_0010C7F8(param_1 + 0x48,0,fVar10);
            fVar10 = ALBW_AS_F32(uVar16);
          }
          else {
            in_s1 = DAT_00321d28;
            func_00489A8C(param_1 + 0x48,fVar10,DAT_00321d28);
            fVar10 = ALBW_AS_F32(uVar16);
          }
          fVar11 = ALBW_AS_F32(uVar15) / ALBW_AS_F32(uVar14);
          fVar12 = fVar9;
          if (*(int *)(param_1 + 0x20) == 0) {
            func_0010C7F8(param_1 + 0x60,0,fVar11);
            fVar11 = ALBW_AS_F32(((ulonglong)uVar15 >> 0x20));
          }
          else {
            func_00489A8C(param_1 + 0x60,fVar11,fVar9);
            fVar11 = ALBW_AS_F32(((ulonglong)uVar15 >> 0x20));
            in_s1 = fVar9;
          }
          fVar13 = fVar12;
          if (*(int *)(param_1 + 0x20) == 0) {
            func_0010C7F8(param_1 + 0x78,0,fVar11);
          }
          else {
            func_00489A8C(param_1 + 0x78,fVar11,fVar12);
            in_s1 = fVar12;
          }
          fVar9 = fVar13;
          if (*(int *)(param_1 + 0x20) == 0) {
            func_0010C7F8(param_1 + 0x90,0,fVar10);
          }
          else {
            func_00489A8C(param_1 + 0x90,fVar10,fVar13);
            in_s1 = fVar13;
          }
        }
        fVar10 = ALBW_AS_F32(uVar14);
        if (0x3f800000 < (int)ALBW_AS_U32(fVar10)) {
          fVar12 = func_004906A8(fVar10);
          in_s1 = DAT_00321d2c;
          fVar10 = fVar12 + DAT_00321d2c;
          if (DAT_00321d30 < (int)ALBW_AS_U32((fVar12 + DAT_00321d2c))) {
            fVar10 = DAT_00321d34;
          }
        }
        if (*(int *)(param_1 + 0x20) == 0) {
          func_0010C7F8(param_1 + 0x30,0,fVar10);
        }
        else {
          func_00489A8C(param_1 + 0x30,fVar10,fVar9);
          in_s1 = fVar9;
        }
        func_00489AD8(param_1 + 0x48);
        func_00489AD8(param_1 + 0x60);
        func_00489AD8(param_1 + 0x78);
        func_00489AD8(param_1 + 0x90);
        func_00489AD8(param_1 + 0x30);
        func_001E0634((int)piVar4,0,*(float *)(param_1 + 0x34),in_s1);
        func_001E02FC((int)piVar4,0,*(float *)(param_1 + 0x4c));
        func_001DF984((int)piVar4,0,*(float *)(param_1 + 100));
        func_001DF80C((int)piVar4,0,*(float *)(param_1 + 0x7c));
        func_001DF5C4((int)piVar4,0,*(float *)(param_1 + 0x94));
        if (*(char *)(param_1 + 0xa8) != '\0') {
          return func_001DFEE0((int)piVar4,3);
        }
      }
      return 0;
    }
    if ((*(char *)(iVar5 + 0x108) == '\0') || (*(int *)(iVar5 + 0xfc) != 0)) {
      if (*(char *)(iVar5 + 0x10c) == '\0') {
        bVar8 = false;
        if (**(int **)(iVar5 + 0x24) == 0) goto LAB_00321ac4;
        bVar8 = func_0056A120(**(int **)(iVar5 + 0x24));
        if (bVar8) goto LAB_00321acc;
      }
      else {
        bVar8 = true;
LAB_00321ac4:
        if (bVar8) {
LAB_00321acc:
          iVar7 = iVar7 + 1;
          goto LAB_00321b04;
        }
      }
      pfVar3 = (float *)func_001E007C(iVar5);
      fVar9 = *pfVar3;
      in_s1 = pfVar3[4];
      uVar14 = CONCAT44(ALBW_AS_F32(((ulonglong)uVar14 >> 0x20)) + pfVar3[2] * fVar9,fVar9 + ALBW_AS_F32(uVar14)
                       );
      uVar15 = CONCAT44(ALBW_AS_F32(((ulonglong)uVar15 >> 0x20)) + in_s1 * fVar9,
                        ALBW_AS_F32(uVar15) + pfVar3[3] * fVar9);
      uVar16 = CONCAT44((int)((ulonglong)uVar16 >> 0x20),ALBW_AS_F32(uVar16) + pfVar3[5] * fVar9);
    }
LAB_00321b04:
    iVar5 = *(int *)(iVar5 + iVar6 + 4) - iVar6;
  } while( true );
}


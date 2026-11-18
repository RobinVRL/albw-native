#include "ghidra_types.h"

extern int func_001157FC(float *param_1,float *param_2,float *param_3);
extern float DAT_0048aaf8;
extern float DAT_0048aafc;
extern undefined4 DAT_0048ab00;

// USA 0048A828 <- EU 0048A800 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 float *
// PARAM param_6 Stack[0x4]:4 undefined4
// PARAM param_7 Stack[0x8]:4 undefined4
// GLOBAL DAT_0048aaf8 float
// GLOBAL DAT_0048aafc float
// GLOBAL DAT_0048ab00 undefined4

void func_0048A828(int param_1,int param_2,int param_3,int param_4,float *param_5,undefined4 param_6
                  ,undefined4 param_7)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar14;
  undefined8 uVar13;
  ulonglong uVar15;
  _Alignas(8) unsigned char albw_frame[0xc0];
  #define afStack_c0 ((float *)(albw_frame + 0x0))
  #define local_90 (*(float *)(albw_frame + 0x30))
  #define local_8c (*(float *)(albw_frame + 0x34))
  #define local_88 (*(float *)(albw_frame + 0x38))
  #define local_84 (*(float *)(albw_frame + 0x3c))
  #define local_80 (*(float *)(albw_frame + 0x40))
  #define local_7c (*(undefined4 *)(albw_frame + 0x44))
  #define local_78 (*(float *)(albw_frame + 0x48))
  #define local_74 (*(float *)(albw_frame + 0x4c))
  #define local_70 (*(float *)(albw_frame + 0x50))
  #define local_6c (*(float *)(albw_frame + 0x54))
  #define local_68 (*(float *)(albw_frame + 0x58))
  #define local_64 (*(float *)(albw_frame + 0x5c))
  #define local_58 (*(int *)(albw_frame + 0x68))
  iVar5 = 0;
  local_90 = *(float *)(param_1 + 0x1c);
  local_7c = *(undefined4 *)(param_1 + 0x20);
  local_8c = DAT_0048aafc;
  local_88 = DAT_0048aafc;
  local_80 = DAT_0048aafc;
  local_78 = DAT_0048aafc;
  local_70 = DAT_0048aafc;
  local_6c = DAT_0048aafc;
  local_68 = DAT_0048aaf8;
  local_84 = DAT_0048aafc;
  local_74 = DAT_0048aafc;
  local_64 = DAT_0048aafc;
  fVar10 = *(float *)(param_1 + 0x14);
  fVar11 = *(float *)(param_1 + 0x18);
  fVar8 = DAT_0048aaf8;
  fVar12 = DAT_0048aafc;
  (**(code **)(**(int **)(param_1 + 0x10) + 8))(*(int **)(param_1 + 0x10));
  fVar14 = fVar8 * *(float *)(param_1 + 0x20);
  uVar15 = (ulonglong)(uint)ALBW_AS_U32((*(float *)(param_1 + 0x40) + fVar10));
  if (param_5 != (float *)0x0) {
    fVar9 = fVar11 - fVar14;
    *param_5 = fVar10;
    param_5[2] = fVar10;
    fVar8 = fVar11;
    if (fVar9 < fVar11) {
      param_5[1] = fVar9;
      param_5[3] = fVar11;
    }
    else {
      param_5[1] = fVar11;
      param_5[3] = fVar9;
    }
  }
  if (*(char *)(param_1 + 0x4c) != '\0' && param_4 != 0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0x18))(*(int **)(param_1 + 0x10));
  }
  uVar13 = CONCAT44(fVar14,DAT_0048ab00);
  local_58 = param_1 + 0x24;
  do {
    iVar4 = 0;
    iVar6 = 0;
    fVar14 = fVar12;
    while( true ) {
      iVar3 = iVar5 + iVar4;
      sVar1 = *(short *)(param_2 + iVar3 * 2);
      if ((sVar1 == 0) || (-1 < param_3 && param_3 <= iVar3)) goto LAB_0048a980;
      if (sVar1 == 10) break;
      iVar3 = (**(code **)(**(int **)(param_1 + 0x10) + 0x10))(*(int **)(param_1 + 0x10));
      fVar8 = fVar8 * *(float *)(param_1 + 0x1c);
      if ((ALBW_AS_F32(uVar13) != *(float *)(param_1 + 0x40)) && (ALBW_AS_F32(uVar15) < fVar10 + fVar14 + fVar8)
         ) {
        iVar6 = 2;
        goto LAB_0048a980;
      }
      fVar14 = fVar14 + fVar8;
      iVar4 = iVar4 + 1;
    }
    iVar6 = 1;
LAB_0048a980:
    iVar2 = 0;
    if (param_4 != 0) {
      iVar2 = iVar4;
    }
    if ((param_4 != 0 && iVar4 != 0) && -1 < iVar2) {
      local_74 = ALBW_AS_F32(((ulonglong)uVar13 >> 0x20));
      local_84 = fVar10;
      local_64 = fVar12;
      if (*(int *)(param_1 + 0x3c) == 0) {
        local_74 = fVar11 - local_74;
        iVar3 = (**(code **)(**(int **)(param_1 + 0x10) + 0x20))
                          (*(int **)(param_1 + 0x10),param_6,param_7,&local_90,local_58,
                           param_2 + iVar5 * 2,iVar4);
      }
      else {
        local_74 = fVar11 - local_74;
        func_001157FC(afStack_c0,*(float **)(param_1 + 0x3c),&local_90);
        iVar3 = (**(code **)(**(int **)(param_1 + 0x10) + 0x20))
                          (*(int **)(param_1 + 0x10),param_6,param_7,afStack_c0,local_58,
                           param_2 + iVar5 * 2,iVar4);
      }
    }
    iVar2 = 0;
    if (param_5 != (float *)0x0) {
      iVar2 = iVar4;
    }
    fVar8 = ALBW_AS_F32(((ulonglong)uVar13 >> 0x20));
    if ((param_5 != (float *)0x0 && iVar4 != 0) && -1 < iVar2) {
      fVar7 = fVar11 - fVar8;
      fVar9 = param_5[2];
      if (param_5[2] <= fVar10 + fVar14) {
        fVar9 = fVar10 + fVar14;
      }
      if (fVar10 < fVar9) {
        *param_5 = fVar10;
      }
      if (fVar10 < fVar9) {
        param_5[2] = fVar9;
      }
      else {
        *param_5 = fVar9;
        param_5[2] = fVar10;
      }
      if (fVar7 < param_5[3]) {
        param_5[1] = fVar7;
      }
      else {
        param_5[1] = param_5[3];
        param_5[3] = fVar7;
      }
    }
    if (iVar6 == 0) {
      fVar10 = fVar10 + fVar14;
      if (param_4 != 0) {
        if (*(char *)(param_1 + 0x4c) != '\0') {
          (**(code **)(**(int **)(param_1 + 0x10) + 0x1c))(*(int **)(param_1 + 0x10));
        }
        *(float *)(param_1 + 0x14) = fVar10;
        *(float *)(param_1 + 0x18) = fVar11;
      }
      return;
    }
    if (iVar6 == 1) {
      iVar3 = iVar5 + iVar4;
    }
    fVar8 = *(float *)(param_1 + 0x38) + fVar8;
    if (iVar6 == 1) {
      iVar5 = iVar3 + 1;
    }
    else {
      iVar5 = iVar5 + iVar4;
    }
    fVar11 = fVar11 - fVar8;
  } while( true );
}


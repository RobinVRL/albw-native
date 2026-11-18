#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115CA8(float *param_1,float *param_2,float *param_3);
extern int func_00115D18(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_00151150(int param_1,float *param_2);
extern int func_001512B4(int param_1,float *param_2);
extern int func_0015133C(int param_1,undefined4 *param_2);
extern int func_004905E0(float fparam_0);
extern float func_00491624(float *param_1,uint param_2,uint param_3,uint param_4);
extern float DAT_002e9ee4;
extern float DAT_002e9ee8;
extern float DAT_002e9eec;
extern float DAT_002e9ef0;
extern uint DAT_002e9ef4;

// USA 002E9BFC <- EU 002E9BD8 (Ghidra, non-matching)
// GLOBAL DAT_002e9ee4 float
// GLOBAL DAT_002e9ee8 float
// GLOBAL DAT_002e9eec float
// GLOBAL DAT_002e9ef0 float
// GLOBAL DAT_002e9ef4 uint

void func_002E9BFC(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  _Alignas(8) unsigned char albw_frame[0xe0];
  #define local_d8 ((float *)(albw_frame + 0x8))
  #define local_d0 (*(float *)(albw_frame + 0x10))
  #define local_cc (*(float *)(albw_frame + 0x14))
  #define local_c8 (*(float *)(albw_frame + 0x18))
  #define local_c4 (*(float *)(albw_frame + 0x1c))
  #define fStack_c0 (*(float *)(albw_frame + 0x20))
  #define local_bc (*(float *)(albw_frame + 0x24))
  #define afStack_b4 ((float *)(albw_frame + 0x2c))
  #define local_74 (*(float *)(albw_frame + 0x6c))
  #define fStack_70 (*(float *)(albw_frame + 0x70))
  #define fStack_6c (*(float *)(albw_frame + 0x74))
  #define local_68 (*(float *)(albw_frame + 0x78))
  #define local_64 (*(undefined4 *)(albw_frame + 0x7c))
  #define local_60 (*(undefined4 *)(albw_frame + 0x80))
  iVar2 = *(int *)(param_1 + 0x40c);
  fVar11 = *(float *)(iVar2 + 0x118);
  fVar13 = *(float *)(iVar2 + 0x108);
  uVar14 = CONCAT44(DAT_002e9eec,*(undefined4 *)(iVar2 + 0x128));
  iVar2 = *(int *)(*(int *)(iVar2 + 0x24) + 0x14) + *(int *)(param_1 + 0xb88) * 0x30;
  local_68 = *(float *)(iVar2 + 0xc);
  local_64 = *(undefined4 *)(iVar2 + 0x1c);
  local_60 = *(undefined4 *)(iVar2 + 0x2c);
  fVar9 = *(float *)(param_1 + 0x4f8);
  fVar8 = (DAT_002e9ee4 - (*(float *)(param_1 + 0x3d4) - *(float *)(param_1 + 0xc))) * DAT_002e9ee8;
  fVar10 = DAT_002e9eec;
  if ((DAT_002e9eec <= fVar8) && (fVar10 = fVar8, DAT_002e9ef0 < fVar8)) {
    fVar10 = DAT_002e9ef0;
  }
  piVar5 = *(int **)(param_1 + 0xd30);
  piVar6 = piVar5 + *(int *)(param_1 + 0xd28);
  fVar10 = fVar10 * fVar9;
  if (piVar5 != piVar6) {
    uVar15 = (ulonglong)DAT_002e9ef4;
    do {
      piVar4 = (int *)*piVar5;
      iVar2 = *piVar4;
      local_74 = ALBW_AS_F32(piVar4[8]) * fVar9;
      fStack_6c = ALBW_AS_F32(piVar4[10]) * fVar9;
      fStack_70 = ALBW_AS_F32(piVar4[9]) * fVar9;
      pfVar7 = (float *)(*(int *)(*(int *)(*(int *)(param_1 + 0x40c) + 0x24) + 0x14) +
                        piVar4[1] * 0x30);
      func_00115D18(local_d8,pfVar7,(float *)(piVar4 + 5));
      func_00115CA8(&fStack_c0,pfVar7,(float *)(piVar4 + 2));
      fVar8 = -(local_bc - *(float *)(param_1 + 0x3d4)) / fVar11;
      if ((int)ALBW_AS_U32(fVar10) < 0x3f800000) {
        fVar12 = local_bc;
        func_00115C70(&fStack_c0,&fStack_c0,&local_68);
        func_00115D70(&fStack_c0,&fStack_c0,fVar10);
        func_00115C54(&fStack_c0,&fStack_c0,&local_68);
        local_bc = fVar12;
      }
      local_cc = fVar13 * ALBW_AS_F32(uVar15);
      local_c4 = ALBW_AS_F32(uVar14) * ALBW_AS_F32(uVar15);
      local_c8 = fVar11;
      func_00115D70(&local_cc,&local_cc,fVar8);
      func_00115C54(&fStack_c0,&fStack_c0,&local_cc);
      func_00151150(iVar2,&local_74);
      fVar8 = ALBW_AS_F32(((ulonglong)uVar14 >> 0x20));
      if (local_d0 == fVar8 && local_d8[0] == fVar8) {
        uVar3 = 0;
      }
      else if (local_d0 < fVar8) {
        if (local_d8[0] < fVar8) {
          if (local_d8[0] < local_d0) {
            iVar1 = func_004905E0(local_d0 / local_d8[0]);
            uVar3 = 0xc0000000 - iVar1;
          }
          else {
            iVar1 = func_004905E0(local_d8[0] / local_d0);
            uVar3 = iVar1 + 0x80000000;
          }
        }
        else {
          fVar8 = -local_d0;
          if (fVar8 < local_d8[0]) {
            iVar1 = func_004905E0(fVar8 / local_d8[0]);
            uVar3 = iVar1 + 0x40000000;
          }
          else {
            iVar1 = func_004905E0(local_d8[0] / fVar8);
            uVar3 = 0x80000000 - iVar1;
          }
        }
      }
      else if (local_d8[0] < fVar8) {
        fVar8 = -local_d8[0];
        if (local_d0 < fVar8) {
          iVar1 = func_004905E0(local_d0 / fVar8);
          uVar3 = iVar1 + 0xc0000000;
        }
        else {
          iVar1 = func_004905E0(fVar8 / local_d0);
          uVar3 = -iVar1;
        }
      }
      else if (local_d0 < local_d8[0]) {
        iVar1 = func_004905E0(local_d0 / local_d8[0]);
        uVar3 = 0x40000000 - iVar1;
      }
      else {
        uVar3 = func_004905E0(local_d8[0] / local_d0);
      }
      func_00491624(afStack_b4,0,uVar3,0);
      func_001512B4(iVar2,&fStack_c0);
      func_0015133C(iVar2,afStack_b4);
      piVar5 = piVar5 + 1;
    } while (piVar5 != piVar6);
  }
  return;
}


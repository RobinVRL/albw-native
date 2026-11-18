#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001151D8(undefined4 *param_1,undefined4 *param_2);
extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_001151F8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_00491404(float *param_1,float *param_2);
extern int func_004914B4(float *param_1,float *param_2);
extern int func_004CEAF0(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern float func_00590570(float fparam_0);
extern float func_0059163C(float fparam_0);
extern int func_0068C794(float *param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3);
extern int *DAT_002ce6ec;
extern int *DAT_002ce6f0;
extern undefined4 *DAT_002ce6f4;
extern undefined4 DAT_002ce6f8;
extern float DAT_002ce6fc;
extern float DAT_002ce700;
extern float DAT_002ce704;
extern float DAT_002ce708;
extern int DAT_002ce70c;
extern float DAT_002ce710;
extern float DAT_002ce714;
extern float DAT_002ce718;
extern float DAT_002ce71c;
extern float DAT_002ce720;

// USA 002CE314 <- EU 002CE2F0 (Ghidra, non-matching)
// GLOBAL DAT_002ce6ec int *
// GLOBAL DAT_002ce6f0 int *
// GLOBAL DAT_002ce6f4 undefined4 *
// GLOBAL DAT_002ce6f8 undefined4
// GLOBAL DAT_002ce6fc float
// GLOBAL DAT_002ce700 float
// GLOBAL DAT_002ce704 float
// GLOBAL DAT_002ce708 float
// GLOBAL DAT_002ce70c int
// GLOBAL DAT_002ce710 float
// GLOBAL DAT_002ce714 float
// GLOBAL DAT_002ce718 float
// GLOBAL DAT_002ce71c float
// GLOBAL DAT_002ce720 float

int * func_002CE314(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *in_r3;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fparam_0;
  float fVar12;
  float fVar13;
  _Alignas(8) unsigned char albw_frame[0xd0];
  #define local_d0 (*(float *)(albw_frame + 0x0))
  #define local_cc (*(float *)(albw_frame + 0x4))
  #define local_c8 (*(float *)(albw_frame + 0x8))
  #define local_c4 (*(float *)(albw_frame + 0xc))
  #define afStack_b4 ((float *)(albw_frame + 0x1c))
  #define local_90 (*(float *)(albw_frame + 0x40))
  #define local_8c (*(float *)(albw_frame + 0x44))
  #define local_88 (*(float *)(albw_frame + 0x48))
  #define local_84 (*(float *)(albw_frame + 0x4c))
  #define local_78 (*(float *)(albw_frame + 0x58))
  #define local_74 (*(float *)(albw_frame + 0x5c))
  #define local_70 (*(float *)(albw_frame + 0x60))
  #define local_6c (*(float *)(albw_frame + 0x64))
  #define afStack_64 ((float *)(albw_frame + 0x6c))
  puVar2 = (undefined4 *)func_0052FBA0(*DAT_002ce6ec + 0x3dbbc,*(uint *)(param_1 + 0x478));
  piVar4 = (int *)*DAT_002ce6f0;
  if (((uint)*DAT_002ce6f0 & 1) == 0) {
    iVar3 = func_00100174(DAT_002ce6f0);
    piVar4 = (int *)0x0;
    if (iVar3 != 0) {
      *DAT_002ce6f4 = DAT_002ce6f8;
      piVar4 = DAT_002ce6f0;
    }
  }
  if ((puVar2 == (undefined4 *)0x0) ||
     (piVar4 = (int *)(**(code **)*puVar2)(puVar2,DAT_002ce6f4), piVar4 == (int *)0x0)) {
    puVar2 = (undefined4 *)0x0;
  }
  fVar12 = DAT_002ce700;
  fVar9 = DAT_002ce6fc;
  if (puVar2 != (undefined4 *)0x0) {
    if (*(int *)(param_1 + 0x40c) < 0x1e) {
      iVar3 = *(int *)(param_1 + 0x430);
      *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x40000000;
      func_001151EC((undefined4 *)(iVar3 + 0x80),(undefined4 *)(param_1 + 0x448));
      piVar4 = (int *)func_004CEAF0(*(int *)(param_1 + 0x430));
      return piVar4;
    }
    iVar3 = *(int *)(param_1 + 0x40c) + -0x1e;
    fVar7 = DAT_002ce6fc;
    if (*(char *)(param_1 + 0x4a1) == '\0') {
      fVar7 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
      fVar7 = (fVar7 - DAT_002ce700) / DAT_002ce704;
      if (0x3f800000 < (int)ALBW_AS_U32(fVar7)) {
        fVar7 = DAT_002ce6fc;
      }
      if (0x4f < iVar3) {
        *(undefined1 *)(param_1 + 0x4a1) = 1;
      }
    }
    iVar3 = *(int *)(param_1 + 0x430);
    fVar11 = fVar9 - fVar7 * DAT_002ce708;
    *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x40000000;
    *(float *)(iVar3 + 0x74) = fVar11;
    *(float *)(iVar3 + 0x78) = fVar11;
    *(float *)(iVar3 + 0x7c) = fVar11;
    fVar8 = DAT_002ce714;
    fVar11 = DAT_002ce710;
    if (*(char *)(param_1 + 0x4a1) == '\0') {
      in_r3 = *(int **)(param_1 + 0x10);
      *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_1 + 0xc);
      *(int **)(param_1 + 0x3d8) = in_r3;
      iVar3 = *(int *)(*(int *)(puVar2[0x1e8] + 0x24) + 0x14) +
              *(short *)((int)puVar2 + 0xa06) * 0x30;
      fVar13 = *(float *)(iVar3 + 0x1c);
      fparam_0 = *(float *)(iVar3 + 0x2c);
      func_0068C794((float *)(param_1 + 0x3d0),*(float *)(iVar3 + 0xc),fVar7,fVar8,fVar11);
      func_0068C794((float *)(param_1 + 0x3d4),fVar13,fVar7 * fVar7 * fVar7 * fVar7,DAT_002ce718,
                    fVar11);
      fVar10 = fVar9 - fVar7;
      fVar13 = fVar10 * fVar10 * fVar10 * fVar10;
      func_0068C794((float *)(param_1 + 0x3d8),fparam_0,fVar9 - fVar13 * fVar13,fVar8,fVar11);
      func_001151D8(afStack_b4,(undefined4 *)(param_1 + 0x448));
      func_001151D8(afStack_64,
                    (undefined4 *)
                    (*(int *)(*(int *)(puVar2[0x1e8] + 0x24) + 0x14) +
                    *(short *)((int)puVar2 + 0xa06) * 0x30));
      func_004914B4(&local_90,afStack_b4);
      func_004914B4(&local_d0,afStack_64);
      fVar8 = local_90 * local_d0 + local_8c * local_cc + local_88 * local_c8 + local_84 * local_c4;
      fVar11 = fVar9;
      if (((int)ALBW_AS_U32(fVar8) < 0x3f800001) && (fVar11 = fVar8, (uint)ALBW_AS_U32(DAT_002ce71c) < (uint)ALBW_AS_U32(fVar8))) {
        fVar11 = DAT_002ce720;
      }
      bVar1 = fVar11 < fVar12;
      if (bVar1) {
        fVar11 = -fVar11;
      }
      fVar8 = func_00590570(fVar11);
      fVar13 = func_0059163C(fVar8);
      fVar11 = fVar13;
      if (fVar13 <= fVar12) {
        fVar11 = -fVar13;
      }
      if (0x33ffffff < (int)ALBW_AS_U32(fVar11)) {
        fVar7 = fVar7 * fVar8;
        fVar9 = fVar9 / fVar13;
        fVar10 = func_0059163C(fVar8 - fVar7);
        fVar10 = fVar10 * fVar9;
        fVar7 = func_0059163C(fVar7);
        fVar7 = fVar7 * fVar9;
      }
      if (bVar1) {
        fVar7 = -fVar7;
      }
      local_78 = local_90 * fVar10 + fVar7 * local_d0;
      local_74 = local_8c * fVar10 + fVar7 * local_cc;
      local_70 = local_88 * fVar10 + fVar7 * local_c8;
      local_6c = local_84 * fVar10 + fVar7 * local_c4;
      func_00491404(afStack_b4,&local_78);
      iVar3 = *(int *)(param_1 + 0x430);
      puVar6 = (undefined4 *)(param_1 + 0x3d0);
      *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x40000000;
      func_001151F8((undefined4 *)(iVar3 + 0x80),afStack_b4,puVar6);
      uVar5 = extraout_r1_00;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x430);
      puVar6 = (undefined4 *)(iVar3 + 0x80);
      *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x40000000;
      func_001151EC(puVar6,(undefined4 *)
                           (*(int *)(*(int *)(puVar2[0x1e8] + 0x24) + 0x14) +
                           *(short *)(DAT_002ce70c + (int)puVar2) * 0x30));
      uVar5 = extraout_r1;
    }
    func_00169A80(*(int **)(param_1 + 0x434),uVar5,puVar6,in_r3);
    func_00168E9C(*(int **)(param_1 + 0x434),*(int *)(param_1 + 0x430),(int *)0x0);
    piVar4 = (int *)func_004CEAF0(*(int *)(param_1 + 0x430));
    return piVar4;
  }
  return piVar4;
}


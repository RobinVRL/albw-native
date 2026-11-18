#include "ghidra_types.h"

extern float DAT_00494ca0;
extern undefined4 DAT_00494ca4;
extern float DAT_00494ca8;
extern float DAT_00494cac;
extern undefined4 DAT_00494cb0;

// USA 00494850 <- EU 00494828 (Ghidra, non-matching)
// GLOBAL DAT_00494ca0 float
// GLOBAL DAT_00494ca4 undefined4
// GLOBAL DAT_00494ca8 float
// GLOBAL DAT_00494cac float
// GLOBAL DAT_00494cb0 undefined4

void func_00494850(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int unaff_r8;
  int iVar6;
  int iVar7;
  bool bVar8;
  uint in_fpscr;
  float in_s0;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar14;
  undefined8 uVar13;
  float fVar16;
  undefined8 uVar15;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_70 (*(float *)(albw_frame + 0x0))
  #define local_6c (*(float *)(albw_frame + 0x4))
  #define local_68 (*(float *)(albw_frame + 0x8))
  #define local_64 (*(float *)(albw_frame + 0xc))
  #define local_60 (*(undefined4 *)(albw_frame + 0x10))
  #define local_5c (*(float *)(albw_frame + 0x14))
  #define fStack_58 (*(float *)(albw_frame + 0x18))
  #define local_54 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_50 (*(float *)(albw_frame + 0x20))
  #define local_4c (*(float *)(albw_frame + 0x24))
  iVar1 = (**(code **)(*param_1 + 0x1c))(param_1);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = param_1[0xd];
  }
  if (iVar1 != 0 && iVar2 != 0) {
    iVar2 = (**(code **)(*param_1 + 0x1c))(param_1);
    if (iVar2 <= param_1[10]) {
      param_1[10] = iVar2 + -1;
      iVar3 = (**(code **)(*param_1 + 0x28))(param_1);
      iVar2 = iVar2 - iVar3;
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      param_1[0xb] = iVar2;
    }
    iVar6 = param_1[0xb];
    iVar7 = param_1[10];
    iVar2 = (**(code **)(*param_1 + 0x28))(param_1);
    iVar3 = iVar6 + iVar2;
    if (iVar3 <= iVar1) {
      unaff_r8 = iVar3;
    }
    if (iVar1 < iVar3) {
      unaff_r8 = iVar1;
    }
    (**(code **)(*(int *)param_1[0xd] + 0x4c))((int *)param_1[0xd]);
    fVar11 = in_s0;
    (**(code **)(*(int *)param_1[0xd] + 0x48))((int *)param_1[0xd]);
    iVar5 = *(int *)(param_1[8] + 0x2c);
    fVar12 = (*(float *)(iVar5 + 0x10) - *(float *)(iVar5 + 8)) * DAT_00494ca0;
    fVar10 = -((*(float *)(iVar5 + 0xc) - *(float *)(iVar5 + 4)) * DAT_00494ca0);
    fVar16 = DAT_00494ca0;
    (**(code **)(*(int *)param_1[0xd] + 0x10))((int *)param_1[0xd]);
    local_60 = DAT_00494ca4;
    iVar5 = *(int *)(param_1[8] + 0x2c);
    local_70 = *(float *)(iVar5 + 0xc) - *(float *)(iVar5 + 4);
    local_6c = *(float *)(iVar5 + 0x10) - *(float *)(iVar5 + 8);
    uVar14 = DAT_00494ca4;
    local_68 = fVar10;
    local_64 = fVar12;
    (**(code **)(*(int *)param_1[0xd] + 0x18))((int *)param_1[0xd],&local_68,&local_70);
    uVar13 = CONCAT44(uVar14,DAT_00494ca8);
    uVar15 = CONCAT44(fVar16,DAT_00494cac);
    local_68 = local_68 + DAT_00494ca8;
    local_64 = local_64 - DAT_00494ca8;
    local_70 = (*(float *)(*(int *)(param_1[8] + 0x2c) + 0xc) -
               *(float *)(*(int *)(param_1[8] + 0x2c) + 4)) - DAT_00494cac;
    (**(code **)(*(int *)param_1[0xd] + 0x1c))((int *)param_1[0xd],&local_68,&local_70);
    piVar4 = (int *)(**(code **)(*param_1 + 0x20))(param_1,iVar6);
    for (iVar5 = iVar6; fVar16 = ALBW_AS_F32(uVar13), iVar5 < unaff_r8; iVar5 = iVar5 + 1) {
      fVar9 = (float)VectorSignedToFloat(piVar4[3] + 1,(byte)(in_fpscr >> 0x15) & 3);
      local_68 = fVar10 + fVar11 * fVar9;
      local_64 = local_64 - in_s0;
      fVar9 = (float)VectorSignedToFloat(piVar4[3] + 1,(byte)(in_fpscr >> 0x15) & 3);
      local_70 = ((*(float *)(*(int *)(param_1[8] + 0x2c) + 0xc) -
                  *(float *)(*(int *)(param_1[8] + 0x2c) + 4)) - fVar11 * fVar9) - fVar16;
      (**(code **)(*piVar4 + 0x10))(piVar4,param_1[0xd],&local_68,&local_70);
      piVar4 = (int *)(**(code **)(*param_1 + 0x24))(param_1,piVar4);
    }
    bVar8 = iVar6 == 0;
    iVar5 = iVar6;
    if (iVar6 < 1) {
      iVar5 = iVar1 - iVar2;
      bVar8 = iVar1 == iVar2;
    }
    if (!bVar8 && iVar5 < 0 == (iVar6 < 1 && SBORROW4(iVar1,iVar2))) {
      VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
      VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
      in_fpscr = in_fpscr & 0xfffffff;
      VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
      VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
      local_54 = (undefined4)((ulonglong)uVar13 >> 0x20);
      local_4c = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
      local_4c = local_4c * in_s0;
      fStack_58 = (fVar12 - in_s0) - fVar16;
      local_5c = (*(float *)(*(int *)(param_1[8] + 0x2c) + 0xc) -
                 *(float *)(*(int *)(param_1[8] + 0x2c) + 4)) * ALBW_AS_F32(((ulonglong)uVar15 >> 0x20)) -
                 fVar16;
      local_50 = fVar16;
      (**(code **)(*(int *)param_1[0xd] + 0x24))((int *)param_1[0xd],&local_5c,&local_50);
    }
    fVar16 = ALBW_AS_F32(uVar13);
    fVar9 = ALBW_AS_F32(uVar15);
    (**(code **)(*(int *)param_1[0xd] + 0x14))((int *)param_1[0xd]);
    (**(code **)(*(int *)param_1[0xd] + 0x2c))
              ((int *)param_1[0xd],*(undefined4 *)(param_1[8] + 0x2c));
    local_68 = fVar10 + fVar9;
    local_64 = fVar12;
    (**(code **)(*(int *)param_1[0xd] + 0x34))((int *)param_1[0xd],&local_68,param_1 + 0xe);
    local_64 = local_64 - (in_s0 + fVar16);
    piVar4 = (int *)(**(code **)(*param_1 + 0x20))(param_1,iVar6);
    if (iVar6 < unaff_r8) {
      iVar2 = iVar6;
      do {
        if (((iVar2 == iVar6) && (iVar6 != 0)) || ((iVar3 + -1 == iVar2 && (iVar3 < iVar1)))) {
          local_68 = fVar10;
          (**(code **)(*(int *)param_1[0xd] + 0x40))((int *)param_1[0xd],&local_68);
        }
        if (iVar7 == iVar2) {
          local_68 = fVar10;
          (**(code **)(*(int *)param_1[0xd] + 0x3c))((int *)param_1[0xd],&local_68);
        }
        fVar12 = (float)VectorSignedToFloat(piVar4[3] + 1,(byte)(in_fpscr >> 0x15) & 3);
        local_68 = fVar10 + fVar11 * fVar12;
        (**(code **)(*piVar4 + 0xc))(piVar4,param_1[0xd],&local_68);
        local_64 = local_64 - in_s0;
        piVar4 = (int *)(**(code **)(*param_1 + 0x24))(param_1,piVar4);
        iVar2 = iVar2 + 1;
      } while (iVar2 < unaff_r8);
    }
    (**(code **)(*(int *)param_1[0xd] + 0x30))((int *)param_1[0xd]);
  }
  return;
}


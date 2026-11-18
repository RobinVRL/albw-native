#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115DAC(float *param_1,float *param_2,float *param_3,float fparam_0);
extern int func_0058A7D4(void);
extern float DAT_0022a9ec;
extern float DAT_0022a9f0;
extern undefined4 DAT_0022a9f4;
extern float DAT_0022a9f8;
extern float DAT_0022a9fc;
extern int *DAT_0022aa00;
extern undefined4 DAT_0022aa04;
extern uint DAT_0022aa08;
extern float *DAT_0022aa0c;
extern float *DAT_0022aa10;
extern int *DAT_0022aa14;
extern float *DAT_0022aa18;

// USA 0022A698 <- EU 0022A698 (Ghidra, non-matching)
// GLOBAL DAT_0022a9ec float
// GLOBAL DAT_0022a9f0 float
// GLOBAL DAT_0022a9f4 undefined4
// GLOBAL DAT_0022a9f8 float
// GLOBAL DAT_0022a9fc float
// GLOBAL DAT_0022aa00 int *
// GLOBAL DAT_0022aa04 undefined4
// GLOBAL DAT_0022aa08 uint
// GLOBAL DAT_0022aa0c float *
// GLOBAL DAT_0022aa10 float *
// GLOBAL DAT_0022aa14 int *
// GLOBAL DAT_0022aa18 float *

void func_0022A698(int param_1,int param_2)

{
  byte bVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  float *pfVar5;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int iVar6;
  float *pfVar7;
  uint uVar8;
  float *pfVar9;
  float *pfVar10;
  float *unaff_r8;
  int *piVar11;
  uint in_fpscr;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar17;
  longlong lVar16;
  undefined8 uVar18;
  float fVar19;
  ulonglong uVar20;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_90 (*(float *)(albw_frame + 0x0))
  #define local_8c (*(float *)(albw_frame + 0x4))
  #define local_88 (*(float *)(albw_frame + 0x8))
  #define local_84 (*(float *)(albw_frame + 0xc))
  #define local_78 (*(float *)(albw_frame + 0x18))
  #define local_74 (*(float *)(albw_frame + 0x1c))
  #define local_70 (*(float *)(albw_frame + 0x20))
  #define local_6c (*(float *)(albw_frame + 0x24))
  #define local_68 (*(float *)(albw_frame + 0x28))
  piVar2 = DAT_0022aa00;
  uVar8 = 0;
  piVar11 = DAT_0022aa00 + 2;
  pfVar10 = (float *)(param_1 + 3000);
  pfVar9 = (float *)(param_1 + 0xb04);
  lVar16 = (ulonglong)(uint)ALBW_AS_U32(DAT_0022a9ec) << 0x20;
  local_78 = DAT_0022a9ec;
  uVar18 = CONCAT44(DAT_0022aa04,DAT_0022a9f4);
  uVar20 = (ulonglong)DAT_0022aa08;
  local_74 = DAT_0022a9ec;
  iVar6 = param_2;
  fVar14 = DAT_0022a9f0;
  fVar13 = DAT_0022a9f8;
  fVar19 = DAT_0022a9fc;
  do {
    uVar17 = (undefined4)((ulonglong)lVar16 >> 0x20);
    if (uVar8 < 0xf) {
      iVar6 = uVar8 * 3;
    }
    pfVar5 = pfVar9;
    if (uVar8 < 0xf) {
      pfVar5 = pfVar9 + iVar6;
    }
    *pfVar5 = *(float *)(param_1 + 0x3d0);
    pfVar5[1] = *(float *)(param_1 + 0x3d4);
    pfVar5[2] = *(float *)(param_1 + 0x3d8);
    puVar3 = (uint *)func_0058A7D4();
    uVar4 = func_00111A64(puVar3);
    fVar12 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
    fVar15 = fVar12 * ALBW_AS_F32(uVar18) * fVar14;
    puVar3 = (uint *)func_0058A7D4();
    uVar4 = func_00111A64(puVar3);
    fVar12 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
    lVar16 = CONCAT44(uVar17,fVar12 * ALBW_AS_F32(uVar18) * fVar14);
    puVar3 = (uint *)func_0058A7D4();
    fVar12 = fVar13;
    uVar4 = func_00111A64(puVar3);
    if (0xe < uVar8) {
      unaff_r8 = pfVar10;
    }
    fVar13 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
    local_68 = fVar13 * ALBW_AS_F32(uVar18) * fVar14;
    local_6c = ALBW_AS_F32(lVar16);
    if (0xe >= uVar8) {
      unaff_r8 = pfVar10 + uVar8 * 3;
    }
    fVar13 = fVar12;
    local_70 = fVar15;
    func_00115C70(&local_90,&local_70,unaff_r8);
    fVar15 = SQRT(local_90 * local_90 + local_8c * local_8c + local_88 * local_88);
    in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar15 == fVar12) << 0x1e |
               (uint)(fVar12 <= fVar15) << 0x1d;
    bVar1 = (byte)(in_fpscr >> 0x18);
    if ((bool)(bVar1 >> 5 & 1) && !(bool)(bVar1 >> 6)) {
      fVar15 = fVar19 / fVar15;
      local_90 = local_90 * fVar15;
      local_8c = local_8c * fVar15;
      local_88 = local_88 * fVar15;
      func_00115DAC(unaff_r8,&local_90,unaff_r8,fVar12);
    }
    else {
      *unaff_r8 = local_70;
      unaff_r8[1] = local_6c;
      unaff_r8[2] = local_68;
    }
    pfVar7 = pfVar10;
    pfVar5 = pfVar9;
    if (uVar8 < 0xf) {
      pfVar5 = pfVar9 + uVar8 * 3;
      pfVar7 = pfVar10 + uVar8 * 3;
    }
    func_00115C54(pfVar5,pfVar5,pfVar7);
    if ((int)uVar8 < 6) {
      uVar4 = uVar8;
      if (param_2 == 0) {
        if (*(int *)(param_1 + 0xcb4) < 3) {
          uVar4 = uVar8 + 2;
        }
        else if (*(int *)(param_1 + 0xcb4) < 5) {
          uVar4 = uVar8 + 1;
        }
      }
      func_00115154(&local_74,&local_78,*piVar2 * uVar4 + *(int *)(param_1 + 0xacc));
      local_68 = ALBW_AS_F32(((ulonglong)uVar18 >> 0x20));
      local_70 = local_74 * local_68;
      local_68 = local_78 * local_68;
      pfVar5 = pfVar9;
      if (uVar8 < 0xf) {
        pfVar5 = pfVar9 + uVar8 * 3;
      }
      local_6c = ALBW_AS_F32(((ulonglong)lVar16 >> 0x20));
      func_00115C54(pfVar5,pfVar5,&local_70);
      pfVar5 = pfVar9;
      if (uVar8 < 0xf) {
        pfVar5 = pfVar9 + uVar8 * 3;
      }
      func_00115C54(pfVar5,pfVar5,DAT_0022aa0c);
      iVar6 = extraout_r1;
    }
    else if ((int)uVar8 < 9) {
      func_00115154(&local_74,&local_78,(uVar8 - 6) * *piVar11 + *(int *)(param_1 + 0xad0));
      local_8c = local_74;
      local_88 = ALBW_AS_F32(((ulonglong)lVar16 >> 0x20));
      pfVar5 = pfVar9;
      if (uVar8 < 0xf) {
        pfVar5 = pfVar9 + uVar8 * 3;
      }
      local_84 = local_78;
      func_00115C54(pfVar5,pfVar5,&local_8c);
      pfVar5 = pfVar9;
      if (uVar8 < 0xf) {
        pfVar5 = pfVar9 + uVar8 * 3;
      }
      func_00115C54(pfVar5,pfVar5,DAT_0022aa10);
      iVar6 = extraout_r1_00;
    }
    else {
      func_00115154(&local_74,&local_78,(uVar8 - 9) * *DAT_0022aa14 + *(int *)(param_1 + 0xad4));
      local_70 = local_74 * ALBW_AS_F32(uVar20);
      local_68 = local_78 * ALBW_AS_F32(uVar20);
      pfVar5 = pfVar9;
      if (uVar8 < 0xf) {
        pfVar5 = pfVar9 + uVar8 * 3;
      }
      local_6c = ALBW_AS_F32(((ulonglong)lVar16 >> 0x20));
      func_00115C54(pfVar5,pfVar5,&local_70);
      pfVar5 = pfVar9;
      if (uVar8 < 0xf) {
        pfVar5 = pfVar9 + uVar8 * 3;
      }
      func_00115C54(pfVar5,pfVar5,DAT_0022aa18);
      iVar6 = extraout_r1_01;
    }
    uVar8 = uVar8 + 1;
  } while ((int)uVar8 < 0xf);
  return;
}


#include "ghidra_types.h"

extern int func_00114E74(float *param_1,float *param_2,float *param_3);
extern int func_0040659C(float *param_1,float *param_2);
extern float DAT_003ff588;
extern float DAT_003ff58c;
extern float DAT_003ff590;
extern float DAT_003ff594;

// USA 003FF2A8 <- EU 003FF288 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// PARAM param_6 Stack[0x4]:4 int
// GLOBAL DAT_003ff588 float
// GLOBAL DAT_003ff58c float
// GLOBAL DAT_003ff590 float
// GLOBAL DAT_003ff594 float

void func_003FF2A8(float *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  uint uVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  _Alignas(8) unsigned char albw_frame[0xd0];
  #define local_d0 (*(float *)(albw_frame + 0x0))
  #define local_cc (*(float *)(albw_frame + 0x4))
  #define local_c8 (*(float *)(albw_frame + 0x8))
  #define local_c4 (*(float *)(albw_frame + 0xc))
  #define local_c0 (*(float *)(albw_frame + 0x10))
  #define local_bc (*(float *)(albw_frame + 0x14))
  #define local_b8 (*(float *)(albw_frame + 0x18))
  #define local_b4 (*(float *)(albw_frame + 0x1c))
  #define local_b0 (*(float *)(albw_frame + 0x20))
  #define local_ac (*(float *)(albw_frame + 0x24))
  #define local_a8 (*(float *)(albw_frame + 0x28))
  #define fStack_a4 (*(float *)(albw_frame + 0x2c))
  #define local_88 (*(float *)(albw_frame + 0x48))
  #define local_84 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_80 (*(undefined4 *)(albw_frame + 0x50))
  #define local_7c (*(undefined4 *)(albw_frame + 0x54))
  #define local_78 (*(undefined4 *)(albw_frame + 0x58))
  #define local_74 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_70 (*(float *)(albw_frame + 0x60))
  #define local_6c (*(undefined4 *)(albw_frame + 0x64))
  #define local_68 (*(float *)(albw_frame + 0x68))
  #define local_64 (*(undefined4 *)(albw_frame + 0x6c))
  #define local_60 (*(undefined4 *)(albw_frame + 0x70))
  #define local_5c (*(undefined4 *)(albw_frame + 0x74))
  #define local_58 (*(float *)(albw_frame + 0x78))
  #define local_54 (*(undefined4 *)(albw_frame + 0x7c))
  #define local_50 (*(float *)(albw_frame + 0x80))
  #define local_4c (*(float *)(albw_frame + 0x84))
  #define fStack_48 (*(float *)(albw_frame + 0x88))
  #define local_44 (*(float *)(albw_frame + 0x8c))
  iVar2 = *(int *)(param_3 + 0x7c);
  uVar5 = *(uint *)(param_3 + 0x74);
  iVar4 = iVar2 + param_4 * 0x20;
  uVar1 = (uVar5 << 0x1e) >> 0x19;
  pfVar3 = (float *)(iVar2 + (uVar5 >> 1 & 0x18) + uVar1 + ((uVar5 << 0x1c) >> 0x1e) * 0x14 +
                             (uVar5 >> 6 & 8) + (uVar5 >> 8 & 0xc) +
                             ((int)(uVar5 << 0x13) >> 0x1f) * -0xc + (uVar5 >> 4 & 0x1c) +
                    param_6 * 0x14);
  if (((uint)ALBW_AS_U32(pfVar3[4]) & 1) == 0) {
    fVar11 = (float)VectorUnsignedToFloat((uint)*(ushort *)(iVar4 + 4),(byte)(in_fpscr >> 0x15) & 3)
    ;
    fVar10 = (float)VectorUnsignedToFloat((uint)*(ushort *)(iVar4 + 6),(byte)(in_fpscr >> 0x15) & 3)
    ;
  }
  else {
    fVar11 = *(float *)(*(int *)(param_2 + 0xb0) + 0x18);
    fVar10 = *(float *)(*(int *)(param_2 + 0xb0) + 0x1c);
  }
  fVar9 = fVar11 * DAT_003ff588;
  fVar7 = fVar10 * DAT_003ff588;
  if (param_5 == 4) {
    fVar13 = DAT_003ff588 / pfVar3[2];
    fVar12 = DAT_003ff588 / pfVar3[3];
    fVar6 = DAT_003ff590 / (fVar9 + fVar9);
    fVar8 = DAT_003ff590 / (-fVar7 - fVar7);
    local_d0 = fVar6 * DAT_003ff58c * fVar13;
    local_c4 = (DAT_003ff588 - ((*pfVar3 + *(float *)(param_2 + 0x80)) / pfVar3[2]) / fVar11) +
               -((fVar9 - fVar9) * fVar6) * fVar13;
    local_bc = fVar8 * DAT_003ff58c * fVar12;
    local_b4 = ((pfVar3[1] + *(float *)(param_2 + 0x90)) / pfVar3[3]) / fVar10 + DAT_003ff588 +
               -((fVar7 - fVar7) * fVar8) * fVar12;
  }
  else {
    local_d0 = DAT_003ff588 / pfVar3[2];
    fVar12 = DAT_003ff588 / pfVar3[3];
    fVar6 = DAT_003ff590 / (fVar9 + fVar9);
    fVar8 = DAT_003ff590 / (-fVar7 - fVar7);
    local_c4 = (DAT_003ff588 - (*pfVar3 / pfVar3[2]) / fVar11) +
               -((fVar9 - fVar9) * fVar6) * local_d0;
    local_d0 = fVar6 * DAT_003ff58c * local_d0;
    local_bc = fVar8 * DAT_003ff58c * fVar12;
    local_b4 = (pfVar3[1] / pfVar3[3]) / fVar10 + DAT_003ff588 + -((fVar7 - fVar7) * fVar8) * fVar12
    ;
  }
  fStack_a4 = DAT_003ff590;
  local_cc = DAT_003ff594;
  fVar10 = DAT_003ff594;
  fVar11 = DAT_003ff590;
  local_c8 = local_cc;
  local_c0 = local_cc;
  local_b8 = local_cc;
  local_b0 = local_cc;
  local_ac = local_cc;
  local_a8 = local_cc;
  func_00114E74(&local_d0,&local_d0,(float *)(param_2 + 0x74));
  func_0040659C(&local_88,(float *)(iVar2 + uVar1 + param_4 * 0x14));
  local_70 = local_88;
  local_6c = local_84;
  local_64 = local_80;
  local_60 = local_7c;
  local_5c = local_78;
  local_54 = local_74;
  local_68 = fVar10;
  local_58 = fVar10;
  local_50 = fVar10;
  local_4c = fVar10;
  fStack_48 = fVar11;
  local_44 = fVar10;
  func_00114E74(&local_d0,&local_70,&local_d0);
  *param_1 = local_d0;
  param_1[1] = local_cc;
  param_1[2] = local_c8;
  param_1[3] = local_c4;
  param_1[4] = local_c0;
  param_1[5] = local_bc;
  param_1[6] = local_b8;
  param_1[7] = local_b4;
  return;
}


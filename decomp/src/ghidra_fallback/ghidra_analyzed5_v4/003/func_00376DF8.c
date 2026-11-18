#include "ghidra_types.h"

extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004A7620(int param_1,uint *param_2,uint param_3,float fparam_0,float fparam_1);
extern float DAT_00377058;
extern uint DAT_0037705c;
extern undefined4 DAT_00377060;
extern float DAT_00377064;
extern uint DAT_00377068;
extern int *DAT_0037706c;
extern float DAT_00377070;
extern float DAT_00377074;

// USA 00376DF8 <- EU 00376DD4 (Ghidra, non-matching)
// GLOBAL DAT_00377058 float
// GLOBAL DAT_0037705c uint
// GLOBAL DAT_00377060 undefined4
// GLOBAL DAT_00377064 float
// GLOBAL DAT_00377068 uint
// GLOBAL DAT_0037706c int *
// GLOBAL DAT_00377070 float
// GLOBAL DAT_00377074 float

undefined4 func_00376DF8(int param_1,float *param_2,float *param_3)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  ulonglong uVar13;
  _Alignas(8) unsigned char albw_frame[0xf0];
  #define local_ec (*(float *)(albw_frame + 0x4))
  #define local_e8 (*(float *)(albw_frame + 0x8))
  #define local_e4 (*(float *)(albw_frame + 0xc))
  #define local_e0 ((byte *)(albw_frame + 0x10))
  #define uStack_d0 (*(uint *)(albw_frame + 0x20))
  #define local_cc (*(undefined4 *)(albw_frame + 0x24))
  #define local_c8 (*(undefined4 *)(albw_frame + 0x28))
  #define local_c4 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_c0 (*(undefined4 *)(albw_frame + 0x30))
  #define local_bc (*(float *)(albw_frame + 0x34))
  #define local_b8 (*(undefined1 *)(albw_frame + 0x38))
  #define local_b7 (*(undefined1 *)(albw_frame + 0x39))
  #define local_b0 (*(float *)(albw_frame + 0x40))
  #define local_ac (*(float *)(albw_frame + 0x44))
  #define local_a8 (*(float *)(albw_frame + 0x48))
  #define local_a4 (*(float * *)(albw_frame + 0x4c))
  #define local_a0 (*(int *)(albw_frame + 0x50))
  #define local_98 (*(undefined4 *)(albw_frame + 0x58))
  #define local_90 (*(undefined4 *)(albw_frame + 0x60))
  #define local_88 (*(float * *)(albw_frame + 0x68))
  #define local_84 (*(float * *)(albw_frame + 0x6c))
  #define local_78 (*(undefined4 *)(albw_frame + 0x78))
  #define local_74 (*(float *)(albw_frame + 0x7c))
  #define local_70 (*(undefined4 *)(albw_frame + 0x80))
  #define local_6c (*(float *)(albw_frame + 0x84))
  #define local_68 (*(float *)(albw_frame + 0x88))
  #define local_64 (*(float *)(albw_frame + 0x8c))
  #define local_60 (*(float *)(albw_frame + 0x90))
  #define local_5c (*(float *)(albw_frame + 0x94))
  #define fStack_58 (*(float *)(albw_frame + 0x98))
  #define fStack_54 (*(float *)(albw_frame + 0x9c))
  uStack_d0 = DAT_0037705c | (uint)param_3 & 0xffff0000;
  uVar7 = *(undefined4 *)(param_1 + 0x18);
  local_e0[0] = 0;
  local_e0[1] = 0;
  local_e0[2] = 0;
  local_e0[3] = 0;
  local_cc = 0xff;
  local_e0[4] = 0;
  local_e0[5] = 0;
  local_e0[6] = 0;
  local_e0[7] = 0;
  local_e0[8] = 0;
  local_e0[9] = 0;
  local_e0[10] = 0;
  local_e0[0xb] = 0;
  local_e0[0xc] = 0;
  local_e0[0xd] = 0;
  local_e0[0xe] = 0;
  local_e0[0xf] = 0;
  local_c8 = 0;
  local_c4 = 0;
  local_c0 = 0;
  local_bc = DAT_00377058;
  local_b8 = 0;
  local_b7 = 1;
  fVar10 = DAT_00377058;
  func_00110D44(&local_a4,local_e0,0x2a);
  local_a0 = param_1 + 4;
  local_98 = *(undefined4 *)(param_1 + 0x14);
  local_90 = DAT_00377060;
  local_78 = uVar7;
  local_74 = fVar10;
  local_70 = uVar7;
  local_6c = fVar10;
  func_00115C70(&local_68,param_3,param_2);
  fVar8 = SQRT(local_68 * local_68 + local_64 * local_64 + local_60 * local_60);
  fVar9 = *(float *)(param_1 + 0x18) * DAT_00377064;
  if (fVar10 < fVar8) {
    fVar5 = fVar9 / fVar8;
    local_68 = local_68 * fVar5;
    local_64 = local_64 * fVar5;
    local_60 = local_60 * fVar5;
  }
  local_5c = *param_2;
  fStack_58 = param_2[1];
  fStack_54 = param_2[2];
  fVar5 = DAT_00377064;
  func_00115C54(&local_ec,&local_5c,&local_68);
  piVar1 = DAT_0037706c;
  if (fVar10 < fVar8) {
    uVar13 = (ulonglong)DAT_00377068;
    fVar12 = DAT_00377074;
    fVar11 = DAT_00377070;
    do {
      local_b0 = local_ec;
      local_ac = local_e8;
      local_a8 = local_e4;
      if (fVar8 <= fVar9) {
        local_ec = *param_3;
        local_e8 = param_3[1];
        local_e4 = param_3[2];
        local_b0 = *param_3;
        local_ac = param_3[1];
        local_a8 = param_3[2];
      }
      local_a4 = &local_b0;
      local_88 = &local_ec;
      local_84 = &local_5c;
      iVar2 = func_004A7620(*piVar1,(uint *)&local_a4,0xff,fVar5,ALBW_AS_F32(uVar13));
      if (iVar2 != 0) {
        fVar6 = local_b0 - local_ec;
        bVar3 = fVar12 == fVar6;
        bVar4 = fVar6 <= fVar12;
        if (!bVar4 || bVar3) {
          bVar3 = fVar6 == fVar11;
          bVar4 = fVar11 <= fVar6;
        }
        if (bVar4 && !bVar3) {
          return 1;
        }
        fVar6 = local_ac - local_e8;
        bVar3 = fVar12 == fVar6;
        bVar4 = fVar6 <= fVar12;
        if (!bVar4 || bVar3) {
          bVar3 = fVar6 == fVar11;
          bVar4 = fVar11 <= fVar6;
        }
        if (bVar4 && !bVar3) {
          return 1;
        }
        fVar6 = local_a8 - local_e4;
        bVar3 = fVar12 == fVar6;
        bVar4 = fVar6 <= fVar12;
        if (!bVar4 || bVar3) {
          bVar3 = fVar6 == fVar11;
          bVar4 = fVar11 <= fVar6;
        }
        if (bVar4 && !bVar3) {
          return 1;
        }
      }
      func_00115C54(&local_5c,&local_5c,&local_68);
      func_00115C54(&local_ec,&local_ec,&local_68);
      fVar8 = fVar8 - fVar9;
    } while (fVar10 < fVar8);
  }
  return 0;
}


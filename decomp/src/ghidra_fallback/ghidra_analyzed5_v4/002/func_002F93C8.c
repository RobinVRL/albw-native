#include "ghidra_types.h"

extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_00111A64(uint *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_004A9F98(int param_1,uint *param_2,uint param_3,float fparam_0,float fparam_1);
extern int func_004D7F70(float *param_1,uint param_2);
extern int func_0058A7D4(void);
extern uint DAT_002f96f8;
extern float DAT_002f96fc;
extern undefined4 *DAT_002f9700;
extern float DAT_002f9704;
extern undefined4 DAT_002f9708;
extern float DAT_002f970c;
extern float DAT_002f9710;
extern int *DAT_002f9714;
extern int DAT_002f9718;
extern undefined4 DAT_002f977c;

// USA 002F93C8 <- EU 002F93A4 (Ghidra, non-matching)
// GLOBAL DAT_002f96f8 uint
// GLOBAL DAT_002f96fc float
// GLOBAL DAT_002f9700 undefined4 *
// GLOBAL DAT_002f9704 float
// GLOBAL DAT_002f9708 undefined4
// GLOBAL DAT_002f970c float
// GLOBAL DAT_002f9710 float
// GLOBAL DAT_002f9714 int *
// GLOBAL DAT_002f9718 int
// GLOBAL DAT_002f977c undefined4

undefined4 func_002F93C8(uint param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  ulonglong uVar14;
  _Alignas(8) unsigned char albw_frame[0xf0];
  #define local_e4 (*(float *)(albw_frame + 0xc))
  #define fStack_e0 (*(float *)(albw_frame + 0x10))
  #define local_dc (*(float *)(albw_frame + 0x14))
  #define local_d0 (*(float *)(albw_frame + 0x20))
  #define fStack_cc (*(float *)(albw_frame + 0x24))
  #define local_c8 (*(float *)(albw_frame + 0x28))
  #define local_c4 ((uint *)(albw_frame + 0x2c))
  #define local_b8 (*(undefined4 *)(albw_frame + 0x38))
  #define local_b0 (*(undefined4 *)(albw_frame + 0x40))
  #define local_a8 (*(float * *)(albw_frame + 0x48))
  #define local_a4 (*(float * *)(albw_frame + 0x4c))
  #define local_98 (*(undefined4 *)(albw_frame + 0x58))
  #define local_94 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_90 (*(undefined4 *)(albw_frame + 0x60))
  #define local_8c (*(undefined4 *)(albw_frame + 0x64))
  #define local_88 ((byte *)(albw_frame + 0x68))
  #define local_78 (*(uint *)(albw_frame + 0x78))
  #define local_74 (*(undefined4 *)(albw_frame + 0x7c))
  #define uStack_70 (*(undefined4 *)(albw_frame + 0x80))
  #define local_6c (*(undefined4 *)(albw_frame + 0x84))
  #define local_68 (*(undefined4 *)(albw_frame + 0x88))
  #define local_64 (*(float *)(albw_frame + 0x8c))
  #define local_60 (*(undefined1 *)(albw_frame + 0x90))
  #define local_5f (*(undefined1 *)(albw_frame + 0x91))
  #define local_54 (*(float *)(albw_frame + 0x9c))
  #define local_50 (*(float *)(albw_frame + 0xa0))
  #define fStack_4c (*(float *)(albw_frame + 0xa4))
  #define local_48 (*(float *)(albw_frame + 0xa8))
  #define local_44 (*(float *)(albw_frame + 0xac))
  #define local_40 (*(undefined4 *)(albw_frame + 0xb0))
  local_d0 = *(float *)(param_1 + 0x3d0);
  fStack_cc = *(float *)(param_1 + 0x3d4);
  local_c8 = *(float *)(param_1 + 0x3d8);
  local_88[0] = 0;
  local_88[1] = 0;
  local_88[2] = 0;
  local_88[3] = 0;
  local_78 = DAT_002f96f8 | param_1 & 0xffff0000;
  local_88[4] = 0;
  local_88[5] = 0;
  local_88[6] = 0;
  local_88[7] = 0;
  local_88[8] = 0;
  local_88[9] = 0;
  local_88[10] = 0;
  local_88[0xb] = 0;
  local_88[0xc] = 0;
  local_88[0xd] = 0;
  local_88[0xe] = 0;
  local_88[0xf] = 0;
  local_74 = 0xff;
  uStack_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_64 = DAT_002f96fc;
  local_60 = 0;
  local_5f = 1;
  fVar13 = DAT_002f96fc;
  func_00110D44(local_c4,local_88,0x2a);
  piVar1 = DAT_002f9714;
  pfVar8 = &local_54;
  uVar14 = (ulonglong)(uint)ALBW_AS_U32(DAT_002f9710);
  local_54 = local_d0;
  fStack_4c = local_c8;
  if (param_2 != 0) {
    pfVar8 = (float *)0x0;
  }
  uVar6 = 0;
  local_50 = fStack_cc + DAT_002f9704;
  local_98 = DAT_002f9708;
  local_94 = *DAT_002f9700;
  local_90 = DAT_002f9700[1];
  local_8c = DAT_002f9700[2];
  local_c4[0] = 0;
  local_c4[1] = 0;
  local_a4 = &local_54;
  local_b8 = *(undefined4 *)(param_1 + 0x2cc);
  uVar7 = 0xffffffff;
  local_b0 = 0x59;
  local_e4 = local_d0;
  fStack_e0 = fStack_cc;
  local_dc = local_c8;
  fVar10 = DAT_002f970c;
  if (param_2 == 0) {
    uVar7 = *(int *)(param_1 + 1000) + 0x20000000U >> 0x1e;
    fVar9 = DAT_002f9710;
    func_00115C54(&local_e4,&local_d0,(float *)(DAT_002f9718 + uVar7 * 0xc));
    fVar12 = local_e4 - *(float *)(param_1 + 8);
    fVar11 = local_dc - *(float *)(param_1 + 0x10);
    if (fVar12 * fVar12 + fVar11 * fVar11 < *(float *)(param_1 + 0x8ec)) goto LAB_002f95cc;
  }
  else {
    do {
      func_00115C54(&local_e4,&local_d0,(float *)(DAT_002f9718 + uVar6 * 0xc));
      local_a8 = &local_e4;
      iVar2 = func_004A9F98(*piVar1,local_c4,0xff,ALBW_AS_F32(uVar14),fVar10);
      if ((iVar2 == 0) &&
         (fVar11 = local_e4 - *(float *)(param_1 + 8), fVar9 = local_dc - *(float *)(param_1 + 0x10)
         , fVar11 * fVar11 + fVar9 * fVar9 < *(float *)(param_1 + 0x8ec))) {
        pfVar8 = (float *)((int)pfVar8 + 1);
        puVar3 = (uint *)func_0058A7D4();
        uVar4 = func_00111A64(puVar3);
        if ((int)(ZEXT48(pfVar8) * (ulonglong)uVar4 >> 0x20) == 0) {
          uVar7 = uVar6;
        }
      }
      fVar9 = ALBW_AS_F32(uVar14);
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < 4);
LAB_002f95cc:
    if (uVar7 < 4) goto LAB_002f9728;
  }
  iVar2 = DAT_002f9718;
  if (*(float *)(param_1 + 8) < local_d0) {
    uVar6 = 3;
  }
  else {
    uVar6 = 1;
  }
  func_00115C54(&local_e4,&local_d0,(float *)(DAT_002f9718 + uVar6 * 0xc));
  local_a8 = &local_e4;
  iVar5 = func_004A9F98(*piVar1,local_c4,0xff,fVar9,fVar10);
  if (iVar5 != 0) {
    uVar6 = 4;
  }
  if (*(float *)(param_1 + 0x10) < local_c8) {
    uVar4 = 2;
  }
  else {
    uVar4 = 0;
  }
  func_00115C54(&local_e4,&local_d0,(float *)(iVar2 + uVar4 * 0xc));
  local_a8 = &local_e4;
  iVar2 = func_004A9F98(*piVar1,local_c4,0xff,fVar9,fVar10);
  uVar7 = uVar4;
  if (iVar2 == 0) {
    if (uVar6 != 4) {
      fVar10 = *(float *)(param_1 + 8) - local_d0;
      if (fVar10 <= fVar13) {
        fVar10 = -fVar10;
      }
      fVar9 = *(float *)(param_1 + 0x10) - local_c8;
      if (fVar9 <= fVar13) {
        fVar9 = -fVar9;
      }
      if (fVar9 <= fVar10) goto LAB_002f9688;
    }
  }
  else {
    if (uVar6 == 4) {
      return 0;
    }
LAB_002f9688:
    uVar7 = uVar6;
  }
  if ((int)*(char *)(param_1 + 0x8e0) == uVar7) {
    if (uVar7 == uVar6) {
      if (uVar4 != 4) {
        uVar7 = uVar4;
      }
    }
    else if (uVar6 != 4) {
      uVar7 = uVar6;
    }
  }
  *(char *)(param_1 + 0x8e0) = (char)uVar7;
LAB_002f9728:
  local_40 = DAT_002f977c;
  local_48 = fVar13;
  local_44 = fVar13;
  func_004D7F70(&local_48,uVar7 << 0x1e);
  func_00115C54(&local_48,&local_48,&local_d0);
  *(float *)(param_1 + 0x8d0) = local_48;
  *(float *)(param_1 + 0x8d4) = local_44;
  *(undefined4 *)(param_1 + 0x8d8) = local_40;
  return 1;
}


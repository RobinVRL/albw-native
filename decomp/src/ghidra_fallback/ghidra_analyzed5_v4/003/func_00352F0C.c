// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_001151F8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
extern int func_00115B68(float *param_1,float *param_2,float *param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);
extern int func_001E8440(int param_1,float *param_2,float param_3);
extern int func_00491404(float *param_1,float *param_2);
extern int func_00491F5C(float *param_1,float *param_2,float *param_3);
extern int func_004CEAF0(int param_1);
extern int func_004D7F70(float *param_1,uint param_2);
extern int func_004F68AC();
extern int func_00556E64(int param_1);
extern int func_0058A44C(int param_1);
extern int *DAT_00353200;
extern float DAT_00353204;
extern float DAT_00353208;
extern int *DAT_0035320c;
extern float DAT_00353210;
extern float DAT_00353214;
extern float DAT_00353218;
extern float DAT_0035321c;

// USA 00352F0C <- EU 00352EE8 (Ghidra, non-matching)
// GLOBAL DAT_00353200 int *
// GLOBAL DAT_00353204 float
// GLOBAL DAT_00353208 float
// GLOBAL DAT_0035320c int *
// GLOBAL DAT_00353210 float
// GLOBAL DAT_00353214 float
// GLOBAL DAT_00353218 float
// GLOBAL DAT_0035321c float

undefined4 func_00352F0C(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  float *pfVar5;
  float *in_r2;
  float *in_r3;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define local_a8 (*(float *)(albw_frame + 0x8))
  #define local_a4 (*(float * *)(albw_frame + 0xc))
  #define local_a0 (*(float *)(albw_frame + 0x10))
  #define local_9c (*(float *)(albw_frame + 0x14))
  #define local_98 (*(float *)(albw_frame + 0x18))
  #define local_94 (*(float *)(albw_frame + 0x1c))
  #define local_90 (*(float *)(albw_frame + 0x20))
  #define fStack_8c (*(float *)(albw_frame + 0x24))
  #define local_88 (*(float *)(albw_frame + 0x28))
  #define local_84 (*(float *)(albw_frame + 0x2c))
  #define local_80 (*(float *)(albw_frame + 0x30))
  #define fStack_7c (*(float *)(albw_frame + 0x34))
  #define local_78 (*(float *)(albw_frame + 0x38))
  #define local_74 (*(float *)(albw_frame + 0x3c))
  #define local_70 (*(float *)(albw_frame + 0x40))
  #define local_6c (*(float *)(albw_frame + 0x44))
  #define local_68 (*(float *)(albw_frame + 0x48))
  #define local_64 (*(float *)(albw_frame + 0x4c))
  #define local_60 (*(float *)(albw_frame + 0x50))
  #define uStack_5c (*(undefined4 *)(albw_frame + 0x54))
  #define local_58 (*(float *)(albw_frame + 0x58))
  #define afStack_50 ((float *)(albw_frame + 0x60))
  #define iStack_2c (*(int *)(albw_frame + 0x84))
  #define local_28 (*(int *)(albw_frame + 0x88))
  iStack_2c = param_1;
  local_28 = param_2;
  iVar2 = func_0058A44C(param_1);
  iVar6 = *DAT_00353200;
  fVar13 = DAT_00353208;
  fVar14 = DAT_00353204;
  if ((iVar6 != 0) && (bVar1 = func_00556E64(iVar6), fVar12 = DAT_00353210, !bVar1)) {
    if (*DAT_0035320c == 0) {
      return 0;
    }
    in_r3 = *(float **)(*DAT_0035320c + 0x18);
    if (in_r3 != (float *)0x0) {
      pfVar5 = (float *)(param_1 + 0xb8c);
      if (iVar2 == 0) {
        *pfVar5 = *pfVar5 + -*pfVar5 * DAT_00353214;
      }
      else {
        *(undefined4 *)(param_1 + 0xb80) = *(undefined4 *)(param_1 + 0x3d0);
        *(undefined4 *)(param_1 + 0xb84) = *(undefined4 *)(param_1 + 0xc);
        *(undefined4 *)(param_1 + 0xb88) = *(undefined4 *)(param_1 + 0x3d8);
        *pfVar5 = *pfVar5 + (fVar14 - *pfVar5) * fVar12;
      }
      in_r2 = (float *)0x1;
      local_a8 = **(float **)(iVar6 + 0x1c);
      local_a0 = (*(float **)(iVar6 + 0x1c))[2];
      fVar12 = *(float *)(param_1 + 0xb8c);
      local_a8 = local_a8 + (*(float *)(param_1 + 0xb80) - local_a8) * fVar12;
      local_a4 = (float *)ALBW_PTR_BITS((*(float *)(param_1 + 0xc) +
                          (*(float *)(param_1 + 0xb84) - *(float *)(param_1 + 0xc)) * fVar12));
      local_a0 = local_a0 + (*(float *)(param_1 + 0xb88) - local_a0) * fVar12;
      func_001E8440((int)in_r3,&local_a8,1);
    }
  }
  iVar2 = *(int *)(param_1 + 0xba0);
  piVar9 = (int *)(param_1 + 0xba0);
  if (iVar2 != 0) {
    iVar6 = *(int *)(*(int *)(param_1 + 0xa88) + 0x1c);
    *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
    func_001151F8((undefined4 *)(iVar2 + 0x80),(undefined4 *)(iVar6 + 100),
                  (undefined4 *)(iVar6 + 0x88));
    iVar2 = *piVar9;
    *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
    *(undefined4 *)(iVar2 + 0x74) = *(undefined4 *)(iVar6 + 0x94);
    *(undefined4 *)(iVar2 + 0x78) = *(undefined4 *)(iVar6 + 0x98);
    *(undefined4 *)(iVar2 + 0x7c) = *(undefined4 *)(iVar6 + 0x9c);
    func_004CEAF0(*piVar9);
    local_a8 = *(float *)(iVar6 + 0x88);
    in_r3 = *(float **)(iVar6 + 0x8c);
    local_a0 = *(float *)(iVar6 + 0x90);
    iVar2 = *(int *)(*piVar9 + 0x24);
    iVar11 = *(int *)(*(int *)(param_1 + 0x40c) + 0x24);
    fVar12 = *(float *)(iVar6 + 0x98);
    pfVar5 = (float *)ALBW_PTR_BITS((*(float *)(param_1 + 0xc) + DAT_00353218));
    local_a4 = in_r3;
    if (ALBW_AS_F32(in_r3) < ALBW_AS_F32(pfVar5)) {
      local_a4 = pfVar5;
    }
    iVar6 = *(int *)(iVar2 + 0x10);
    uVar15 = CONCAT44(local_a4,fVar14);
    local_78 = fVar13;
    local_74 = fVar13;
    local_70 = fVar13;
    func_004D7F70(&local_78,*(uint *)(param_1 + 1000));
    in_r2 = &local_78;
    func_00115C54(&local_a8,&local_a8,in_r2);
    uStack_5c = (undefined4)uVar15;
    local_60 = fVar13;
    local_58 = fVar13;
    if (0 < iVar6) {
      fVar12 = fVar12 * DAT_0035321c;
      uVar7 = 0;
      do {
        if (uVar7 < *(uint *)(param_1 + 0xba4)) {
          psVar3 = (short *)(*(int *)(param_1 + 0xba8) + uVar7 * 2);
        }
        else {
          psVar3 = *(short **)(param_1 + 0xba8);
        }
        iVar10 = *(int *)(iVar11 + 0x14) + *psVar3 * 0x30;
        local_6c = *(float *)(iVar10 + 0xc) - local_a8;
        local_64 = *(float *)(iVar10 + 0x2c) - local_a0;
        local_68 = fVar12;
        func_00115DC8(&local_6c);
        iVar4 = func_00115B68(afStack_50,&local_60,&local_6c);
        if (iVar4 == 0) {
          local_9c = ALBW_AS_F32(uVar15);
          local_98 = fVar13;
          local_94 = fVar13;
          local_90 = fVar13;
          fStack_8c = local_9c;
          local_88 = fVar13;
          local_84 = fVar13;
          local_80 = fVar13;
          fStack_7c = local_9c;
        }
        else {
          func_00491404(&local_9c,afStack_50);
        }
        pfVar5 = (float *)(*(int *)(iVar2 + 0x14) + uVar7 * 0x30);
        func_00491F5C(pfVar5,&local_9c,pfVar5);
        uVar8 = uVar7 + 1;
        in_r2 = (float *)(*(int *)(iVar2 + 0x14) + uVar7 * 0x30);
        in_r2[3] = *(float *)(iVar10 + 0xc);
        *(int *)(*(int *)(iVar2 + 0x14) + uVar7 * 0x30 + 0x1c) = (int)((ulonglong)uVar15 >> 0x20);
        *(undefined4 *)(*(int *)(iVar2 + 0x14) + uVar7 * 0x30 + 0x2c) =
             *(undefined4 *)(iVar10 + 0x2c);
        uVar7 = uVar8;
      } while ((int)uVar8 < iVar6);
    }
  }
  return func_004F68AC(param_1,local_28,in_r2,in_r3);
}


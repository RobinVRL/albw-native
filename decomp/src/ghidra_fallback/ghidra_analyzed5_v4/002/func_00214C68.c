#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_00215F70(int param_1);
extern int func_004F8864(int param_1,undefined4 *param_2,uint param_3,float fparam_0);
extern float DAT_0021503c;
extern float DAT_00215040;
extern float DAT_00215044;
extern float DAT_00215048;
extern float *DAT_0021504c;
extern float DAT_0021524c;
extern float DAT_00215250;

// USA 00214C68 <- EU 00214C68 (Ghidra, non-matching)
// GLOBAL DAT_0021503c float
// GLOBAL DAT_00215040 float
// GLOBAL DAT_00215044 float
// GLOBAL DAT_00215048 float
// GLOBAL DAT_0021504c float *
// GLOBAL DAT_0021524c float
// GLOBAL DAT_00215250 float

undefined4 func_00214C68(int param_1)

{
  byte bVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fVar10;
  float fparam_0;
  float fparam_0_00;
  float fVar11;
  _Alignas(8) unsigned char albw_frame[0xf0];
  #define local_e8 (*(float *)(albw_frame + 0x8))
  #define local_e4 (*(float *)(albw_frame + 0xc))
  #define local_e0 (*(float *)(albw_frame + 0x10))
  #define local_dc (*(float *)(albw_frame + 0x14))
  #define local_d4 (*(float *)(albw_frame + 0x1c))
  #define uStack_d0 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_cc (*(undefined4 *)(albw_frame + 0x24))
  #define local_c8 (*(float *)(albw_frame + 0x28))
  #define uStack_c4 (*(undefined4 *)(albw_frame + 0x2c))
  #define uStack_c0 (*(undefined4 *)(albw_frame + 0x30))
  #define local_bc (*(float *)(albw_frame + 0x34))
  #define uStack_b8 (*(undefined4 *)(albw_frame + 0x38))
  #define uStack_b4 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_b0 (*(float * *)(albw_frame + 0x40))
  #define local_ac (*(float * *)(albw_frame + 0x44))
  #define local_a8 (*(float *)(albw_frame + 0x48))
  #define local_a4 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_a0 (*(undefined4 *)(albw_frame + 0x50))
  #define local_9c (*(float *)(albw_frame + 0x54))
  #define uStack_98 (*(undefined4 *)(albw_frame + 0x58))
  #define uStack_94 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_8c (*(uint * *)(albw_frame + 0x64))
  #define local_88 (*(int *)(albw_frame + 0x68))
  #define local_80 (*(float *)(albw_frame + 0x70))
  #define uStack_7c (*(undefined4 *)(albw_frame + 0x74))
  #define uStack_78 (*(undefined4 *)(albw_frame + 0x78))
  #define local_74 (*(float *)(albw_frame + 0x7c))
  #define uStack_70 (*(undefined4 *)(albw_frame + 0x80))
  #define uStack_6c (*(undefined4 *)(albw_frame + 0x84))
  #define local_68 (*(float *)(albw_frame + 0x88))
  #define uStack_64 (*(undefined4 *)(albw_frame + 0x8c))
  #define uStack_60 (*(undefined4 *)(albw_frame + 0x90))
  #define local_5c (*(float *)(albw_frame + 0x94))
  #define uStack_58 (*(undefined4 *)(albw_frame + 0x98))
  #define uStack_54 (*(undefined4 *)(albw_frame + 0x9c))
  #define local_50 (*(float *)(albw_frame + 0xa0))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0xa4))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0xa8))
  local_88 = param_1 + 0xb00;
  iVar5 = 0;
  iVar6 = 0;
  iVar7 = *(int *)(param_1 + 0x968);
  local_ac = (float *)(param_1 + 0xa14);
  fVar8 = DAT_0021503c;
  fVar11 = DAT_00215040;
  fparam_0 = DAT_00215048;
  fparam_0_00 = DAT_00215044;
  if (iVar7 != 0) {
    local_8c = (uint *)(param_1 + 0xaac);
    do {
      fVar9 = *(float *)(param_1 + 0xa3c);
      fVar10 = *(float *)(param_1 + 0xa40);
      iVar2 = *(int *)(param_1 + 0x964) + iVar5;
      if (*(int *)(param_1 + 0x960) <= iVar2) {
        iVar2 = iVar2 - *(int *)(param_1 + 0x960);
      }
      pfVar3 = (float *)(*(int *)(param_1 + 0x95c) + iVar2 * 0x28);
      *pfVar3 = *(float *)(param_1 + 0xa38);
      pfVar3[1] = fVar9;
      pfVar3[2] = fVar10;
      pfVar3[9] = *(float *)(param_1 + 1000);
      bVar1 = *(byte *)(param_1 + 0x8c0);
      if (bVar1 == 2) {
LAB_00214d60:
        fVar10 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
        pfVar3[1] = fVar9 + fVar10 * fparam_0_00 * fparam_0;
      }
      else {
        if ((char)bVar1 < '\x03') {
          if (bVar1 < 2) goto LAB_00214d60;
        }
        else if (bVar1 == 3 || bVar1 == 10) goto LAB_00214d60;
        if (*(char *)(local_88 + 0x3b) == '\0') {
          iVar2 = func_00215F70(param_1);
          local_e8 = fVar8;
          local_e4 = fVar11;
          local_e0 = fVar8;
          if (iVar2 == 0) {
            local_e8 = *DAT_0021504c;
            local_e4 = DAT_0021504c[1];
            local_e0 = DAT_0021504c[2];
          }
          func_00115D70(&local_e8,&local_e8,fparam_0);
          fVar9 = pfVar3[6];
          local_a8 = *(float *)((int)ALBW_AS_U32(fVar9) + 0xe4);
          local_a4 = *(undefined4 *)((int)ALBW_AS_U32(fVar9) + 0xf0);
          local_a0 = *(undefined4 *)((int)ALBW_AS_U32(fVar9) + 0xfc);
          func_00115D70(&local_50,&local_a8,fparam_0_00);
          fVar9 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
          local_5c = local_50;
          uStack_58 = uStack_4c;
          uStack_54 = uStack_48;
          func_00115D70(&local_50,&local_5c,fVar9);
          local_68 = local_50;
          uStack_64 = uStack_4c;
          uStack_60 = uStack_48;
          func_00115D70(&local_50,&local_68,local_e4);
          local_bc = local_50;
          uStack_b8 = uStack_4c;
          uStack_b4 = uStack_48;
          func_00115C54(pfVar3,pfVar3,&local_bc);
          fVar9 = pfVar3[6];
          *(uint *)((int)ALBW_AS_U32(fVar9) + 0x164) = *(uint *)((int)ALBW_AS_U32(fVar9) + 0x164) | 0x40000000;
          *(float *)((int)ALBW_AS_U32(fVar9) + 0x74) = local_e8;
          *(float *)((int)ALBW_AS_U32(fVar9) + 0x78) = local_e4;
          *(float *)((int)ALBW_AS_U32(fVar9) + 0x7c) = local_e0;
        }
        else {
          iVar2 = func_00215F70(param_1);
          local_e8 = fVar8;
          local_e4 = fVar11;
          local_e0 = fVar8;
          if (iVar2 == 0) {
            local_e8 = *DAT_0021504c;
            local_e4 = DAT_0021504c[1];
            local_e0 = DAT_0021504c[2];
          }
          func_00115D70(&local_e8,&local_e8,fparam_0);
          fVar9 = pfVar3[6];
          local_a8 = *(float *)((int)ALBW_AS_U32(fVar9) + 0xe4);
          local_a4 = *(undefined4 *)((int)ALBW_AS_U32(fVar9) + 0xf0);
          local_a0 = *(undefined4 *)((int)ALBW_AS_U32(fVar9) + 0xfc);
          iVar2 = *(int *)(param_1 + 0xab0) - *(int *)(param_1 + 0xaac);
          if (iVar2 < 2) {
            iVar2 = 1;
          }
          local_b0 = local_ac;
          fVar9 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
          fVar9 = fVar8 / fVar9;
          local_80 = local_a8;
          uStack_7c = local_a4;
          uStack_78 = local_a0;
          func_00115C70(&local_50,&local_80,local_ac);
          local_74 = local_50;
          uStack_70 = uStack_4c;
          uStack_6c = uStack_48;
          func_00115D70(&local_50,&local_74,fVar9);
          local_d4 = local_50;
          uStack_d0 = uStack_4c;
          uStack_cc = uStack_48;
          func_00115C54(local_b0,local_b0,&local_d4);
          func_00115D70(&local_50,local_ac,fparam_0_00);
          fVar9 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
          local_5c = local_50;
          uStack_58 = uStack_4c;
          uStack_54 = uStack_48;
          func_00115D70(&local_50,&local_5c,fVar9);
          local_68 = local_50;
          uStack_64 = uStack_4c;
          uStack_60 = uStack_48;
          func_00115D70(&local_50,&local_68,fparam_0);
          local_bc = local_50;
          uStack_b8 = uStack_4c;
          uStack_b4 = uStack_48;
          func_00115C54(pfVar3,pfVar3,&local_bc);
          fVar9 = pfVar3[6];
          *(uint *)((int)ALBW_AS_U32(fVar9) + 0x164) = *(uint *)((int)ALBW_AS_U32(fVar9) + 0x164) | 0x40000000;
          *(float *)((int)ALBW_AS_U32(fVar9) + 0x74) = local_e8;
          *(float *)((int)ALBW_AS_U32(fVar9) + 0x78) = local_e4;
          *(float *)((int)ALBW_AS_U32(fVar9) + 0x7c) = local_e0;
          if (*local_8c < local_8c[1]) {
            *local_8c = *local_8c + 1;
          }
          else {
            *(undefined1 *)(param_1 + 0xb3b) = 0;
          }
        }
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 1;
    } while (iVar5 != iVar7);
  }
  fVar9 = DAT_0021524c;
  pfVar3 = DAT_0021504c;
  bVar1 = *(byte *)(param_1 + 0x8c0);
  pfVar4 = (float *)(param_1 + 0x9e4);
  if (bVar1 != 2) {
    if ((char)bVar1 < '\x03') {
      if (1 < bVar1) {
LAB_00215050:
        if (*(char *)(local_88 + 0x3b) == '\0') {
          iVar5 = func_00215F70(param_1);
          if (iVar5 == 0) {
            local_e4 = *pfVar3;
            local_e0 = pfVar3[1];
            local_dc = pfVar3[2];
            func_00115D70(&local_e4,&local_e4,fparam_0);
          }
          else {
            local_e4 = fVar8;
            local_e0 = fVar11;
            local_dc = fVar8;
            func_00115D70(&local_e4,&local_e4,fparam_0);
          }
          func_00115D70(&local_9c,&local_a8,fparam_0_00);
          local_c8 = local_9c;
          uStack_c4 = uStack_98;
          uStack_c0 = uStack_94;
          fVar8 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0xa8c),
                                             (byte)(in_fpscr >> 0x15) & 3);
          func_00115D70(&local_9c,&local_c8,fVar8);
          local_bc = local_9c;
          uStack_b8 = uStack_98;
          uStack_b4 = uStack_94;
          func_00115D70(&local_9c,&local_bc,local_e0);
          fVar8 = DAT_00215250;
          *pfVar4 = local_9c;
          *(undefined4 *)(param_1 + 0x9e8) = uStack_98;
          *(undefined4 *)(param_1 + 0x9ec) = uStack_94;
          *(float *)(param_1 + 0x4e4) = local_e4;
          *(float *)(param_1 + 0x4e8) = local_e0;
          *(float *)(param_1 + 0x4ec) = local_dc;
          return func_004F8864(param_1,pfVar4,0,fVar8);
        }
        iVar5 = func_00215F70(param_1);
        if (iVar5 == 0) {
          local_e4 = *pfVar3;
          local_e0 = pfVar3[1];
          local_dc = pfVar3[2];
          func_00115D70(&local_e4,&local_e4,fparam_0);
        }
        else {
          local_e4 = fVar8;
          local_e0 = fVar11;
          local_dc = fVar8;
          func_00115D70(&local_e4,&local_e4,fparam_0);
        }
        func_00115D70(&local_9c,local_ac,fparam_0_00);
        local_c8 = local_9c;
        uStack_c4 = uStack_98;
        uStack_c0 = uStack_94;
        fVar8 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0xa8c),
                                           (byte)(in_fpscr >> 0x15) & 3);
        func_00115D70(&local_9c,&local_c8,fVar8);
        local_bc = local_9c;
        uStack_b8 = uStack_98;
        uStack_b4 = uStack_94;
        func_00115D70(&local_9c,&local_bc,fparam_0);
        *pfVar4 = local_9c;
        *(undefined4 *)(param_1 + 0x9e8) = uStack_98;
        *(undefined4 *)(param_1 + 0x9ec) = uStack_94;
        *(float *)(param_1 + 0x4e4) = local_e4;
        *(float *)(param_1 + 0x4e8) = local_e0;
        *(float *)(param_1 + 0x4ec) = local_dc;
        return 0;
      }
    }
    else if (bVar1 != 3 && bVar1 != 10) goto LAB_00215050;
  }
  *pfVar4 = DAT_0021524c;
  *(float *)(param_1 + 0x9ec) = fVar9;
  fVar8 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0xa8c),(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0x9e8) = fVar8 * fparam_0_00 * fparam_0;
  return 0;
}


#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_0042E990(int param_1,float *param_2,undefined4 param_3,undefined4 *param_4);
extern int func_0042EFB0(int param_1,float *param_2,float *param_3,undefined4 param_4,undefined4 *param_5);
extern int DAT_0042e7b8;
extern undefined4 DAT_0042e7bc;
extern int DAT_0042e7c0;
extern undefined4 *DAT_0042e7c4;
extern undefined4 *DAT_0042e7c8;
extern char *DAT_0042e7cc;
extern float *DAT_0042e7d0;

// USA 0042E4CC <- EU 0042E4AC (Ghidra, non-matching)
// GLOBAL DAT_0042e7b8 int
// GLOBAL DAT_0042e7bc undefined4
// GLOBAL DAT_0042e7c0 int
// GLOBAL DAT_0042e7c4 undefined4 *
// GLOBAL DAT_0042e7c8 undefined4 *
// GLOBAL DAT_0042e7cc char *
// GLOBAL DAT_0042e7d0 float *

int func_0042E4CC(int param_1,undefined4 param_2,undefined4 *param_3)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  ushort *puVar8;
  float fVar9;
  float fVar10;
  _Alignas(8) unsigned char albw_frame[0xd0];
  #define local_c4 (*(float *)(albw_frame + 0xc))
  #define local_c0 (*(undefined4 *)(albw_frame + 0x10))
  #define local_bc (*(undefined4 *)(albw_frame + 0x14))
  #define local_b8 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_b4 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_b0 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_ac (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_a8 (*(undefined4 *)(albw_frame + 0x28))
  #define local_a4 (*(undefined4 *)(albw_frame + 0x2c))
  #define uStack_a0 (*(undefined4 *)(albw_frame + 0x30))
  #define local_9c (*(float * *)(albw_frame + 0x34))
  #define local_98 (*(float * *)(albw_frame + 0x38))
  #define local_94 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_90 (*(undefined4 *)(albw_frame + 0x40))
  #define uStack_8c (*(undefined4 *)(albw_frame + 0x44))
  #define uStack_88 (*(undefined4 *)(albw_frame + 0x48))
  #define uStack_84 (*(undefined4 *)(albw_frame + 0x4c))
  #define uStack_80 (*(undefined4 *)(albw_frame + 0x50))
  #define local_7c (*(float *)(albw_frame + 0x54))
  #define local_78 (*(undefined4 * *)(albw_frame + 0x58))
  #define local_74 (*(float *)(albw_frame + 0x5c))
  #define local_70 (*(undefined4 *)(albw_frame + 0x60))
  #define uStack_6c (*(undefined4 *)(albw_frame + 0x64))
  #define local_64 ((float *)(albw_frame + 0x6c))
  #define afStack_58 ((float *)(albw_frame + 0x78))
  #define local_4c (*(float *)(albw_frame + 0x84))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x88))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0x8c))
  #define local_40 (*(float *)(albw_frame + 0x90))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x94))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x98))
  #define afStack_34 ((float *)(albw_frame + 0x9c))
  #define afStack_28 ((float *)(albw_frame + 0xa8))
  local_b8 = *param_3;
  uStack_b4 = param_3[1];
  uStack_b0 = param_3[2];
  uStack_ac = param_3[3];
  uStack_a8 = param_3[4];
  local_a4 = param_3[5];
  uStack_a0 = param_3[6];
  local_9c = (float *)param_3[7];
  local_98 = (float *)param_3[8];
  local_94 = param_3[9];
  local_90 = param_3[10];
  uStack_8c = param_3[0xb];
  uStack_88 = param_3[0xc];
  uStack_84 = param_3[0xd];
  uStack_80 = param_3[0xe];
  if (((*(char *)(param_3 + 10) != '\0') && (*(char *)(param_1 + 0x4a0) == '\0')) &&
     (func_00115C54(&local_7c,(float *)param_3[7],(float *)(param_3 + 0xc)),
     local_7c = *(float *)(param_1 + 0x490) - local_7c,
     fVar10 = *(float *)(param_1 + 0x494) - ALBW_AS_F32(local_78),
     local_74 = *(float *)(param_1 + 0x498) - local_74,
     fVar9 = *(float *)(param_1 + 0x49c) - ALBW_AS_F32(param_3[0xb]),
     fVar9 * fVar9 < local_7c * local_7c + fVar10 * fVar10 + local_74 * local_74)) {
    local_90 = local_90 & 0xffffff00;
  }
  func_00115C70(local_64,(float *)param_3[8],(float *)(param_1 + 4));
  func_00115C70(&local_c4,(float *)param_3[7],(float *)(param_1 + 4));
  func_00115C54(local_64,local_64,(float *)(param_3 + 0xc));
  func_00115C54(&local_c4,&local_c4,(float *)(param_3 + 0xc));
  func_00115C70(afStack_58,(float *)(param_1 + 4),(float *)(param_1 + 0x10));
  func_00115C54(local_64,local_64,afStack_58);
  uVar3 = DAT_0042e7bc;
  iVar2 = DAT_0042e7b8;
  local_9c = &local_c4;
  local_98 = local_64;
  uVar5 = param_3[0xb];
  *(float *)(DAT_0042e7b8 + 8) = local_c4;
  *(undefined4 *)(iVar2 + 0xc) = local_c0;
  *(undefined4 *)(iVar2 + 0x14) = uVar5;
  *(undefined4 *)(iVar2 + 0x10) = local_bc;
  *(undefined1 *)(iVar2 + 0x6d) = 0;
  *(undefined1 *)(iVar2 + 0x6c) = 0;
  *(undefined1 *)(iVar2 + 0x6f) = 0;
  *(undefined4 *)(iVar2 + 0x60) = uVar3;
  *(undefined4 **)(iVar2 + 4) = &local_b8;
  iVar6 = DAT_0042e7c0;
  *(undefined4 *)(iVar2 + 0x30) = param_2;
  *(undefined4 *)(iVar2 + 0x34) = 0;
  *(undefined4 *)(iVar2 + 0x38) = *(undefined4 *)(iVar6 + 4);
  func_00115C70((float *)(iVar2 + 0x48),local_9c,local_98);
  *(undefined4 *)(iVar2 + 100) = local_94;
  fVar9 = *local_98;
  fVar10 = local_98[1];
  *(float *)(iVar2 + 0x5c) = local_98[2];
  *(float *)(iVar2 + 0x54) = fVar9;
  *(float *)(iVar2 + 0x58) = fVar10;
  *(undefined4 *)(param_1 + 0x74) = 0;
  local_78 = DAT_0042e7c8;
  if ((*(undefined1 *)((char *)&local_90 + 1)) == '\0') {
    local_70 = DAT_0042e7c4[2];
    uStack_6c = DAT_0042e7c4[3];
  }
  else {
    local_70 = *DAT_0042e7c4;
    uStack_6c = DAT_0042e7c4[1];
  }
  local_74 = ALBW_AS_F32(param_1);
  if ((char)local_90 == '\0') {
    if (*(float *)(iVar2 + 0x14) <= *(float *)(*(int *)(param_1 + 0x5c) + 0x38)) {
      func_0042E990(param_1,(float *)(iVar2 + 8),local_a4,&local_78);
    }
    else {
      func_00115D70(&local_40,DAT_0042e7d0,*(float *)(iVar2 + 0x14));
      local_4c = local_40;
      uStack_48 = uStack_3c;
      uStack_44 = uStack_38;
      func_00115C54(afStack_28,(float *)(iVar2 + 8),&local_4c);
      func_00115C70(afStack_34,(float *)(iVar2 + 8),&local_4c);
      func_0042EFB0(param_1,afStack_34,afStack_28,local_a4,&local_78);
    }
  }
  else {
    *(undefined4 *)(iVar2 + 0x68) = local_a4;
    pcVar4 = DAT_0042e7cc;
    puVar8 = (ushort *)(*(int *)(param_1 + 0x48c) + 2);
    uVar1 = *puVar8;
    while (uVar1 != 0) {
      iVar6 = *(int *)(*(int *)(param_1 + 0x5c) + 8) + (uint)*puVar8 * 0x10;
      *(int *)(param_1 + 0x70) = iVar6;
      uVar7 = (uint)*(ushort *)(iVar6 + 0xe);
      if ((*(uint *)(iVar2 + 0x68) & 1 << (uVar7 & 0x1f)) != 0) {
        uVar7 = (uVar7 & 0xb000) >> 0xc;
        if (*pcVar4 == '\0') {
          if (uVar7 != 8) goto LAB_0042e6f0;
        }
        else if (uVar7 != 9) {
LAB_0042e6f0:
          (*(code *)*local_78)(&local_78,param_1);
        }
      }
      puVar8 = puVar8 + 1;
      uVar1 = *puVar8;
    }
  }
  return (int)*(char *)(iVar2 + 0x6d);
}


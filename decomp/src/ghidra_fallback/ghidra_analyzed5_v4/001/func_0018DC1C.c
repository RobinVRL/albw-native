#include "ghidra_types.h"

extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0014F0B0(int param_1);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_001E85D0(int param_1);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2F38(int param_1,undefined4 *param_2);
extern int func_004A7620(int param_1,uint *param_2,uint param_3,float fparam_0,float fparam_1);
extern int func_00556EAC(int param_1,int param_2);
extern int func_00588EEC(undefined4 param_1,float *param_2,float fparam_0);
extern int func_00659688(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_0018df2c;
extern uint DAT_0018df30;
extern float DAT_0018df34;
extern undefined4 *DAT_0018df38;
extern undefined4 DAT_0018df3c;
extern float DAT_0018df40;
extern float DAT_0018df44;
extern float DAT_0018df48;
extern float DAT_0018df4c;
extern float DAT_0018df50;
extern int *DAT_0018df54;
extern int *DAT_0018df58;
extern float DAT_0018df5c;
extern uint *DAT_0018df60;
extern float *DAT_0018df64;
extern int DAT_0018df68;
extern int *DAT_0018dfe0;

// USA 0018DC1C <- EU 0018DC1C (Ghidra, non-matching)
// GLOBAL DAT_0018df2c undefined4
// GLOBAL DAT_0018df30 uint
// GLOBAL DAT_0018df34 float
// GLOBAL DAT_0018df38 undefined4 *
// GLOBAL DAT_0018df3c undefined4
// GLOBAL DAT_0018df40 float
// GLOBAL DAT_0018df44 float
// GLOBAL DAT_0018df48 float
// GLOBAL DAT_0018df4c float
// GLOBAL DAT_0018df50 float
// GLOBAL DAT_0018df54 int *
// GLOBAL DAT_0018df58 int *
// GLOBAL DAT_0018df5c float
// GLOBAL DAT_0018df60 uint *
// GLOBAL DAT_0018df64 float *
// GLOBAL DAT_0018df68 int
// GLOBAL DAT_0018dfe0 int *

undefined4 func_0018DC1C(int *param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined1 uVar7;
  uint unaff_r5;
  int iVar8;
  uint in_fpscr;
  float fVar9;
  int iVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  _Alignas(8) unsigned char albw_frame[0xe0];
  #define local_dc (*(int *)(albw_frame + 0x4))
  #define local_d8 (*(int *)(albw_frame + 0x8))
  #define local_d4 (*(int *)(albw_frame + 0xc))
  #define local_d0 (*(int * *)(albw_frame + 0x10))
  #define local_c8 (*(uint *)(albw_frame + 0x18))
  #define local_c4 (*(int * *)(albw_frame + 0x1c))
  #define local_bc (*(int *)(albw_frame + 0x24))
  #define local_b4 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_ac (*(undefined4 * *)(albw_frame + 0x34))
  #define local_a8 (*(int * *)(albw_frame + 0x38))
  #define local_9c (*(undefined4 *)(albw_frame + 0x44))
  #define local_98 (*(undefined4 *)(albw_frame + 0x48))
  #define uStack_94 (*(undefined4 *)(albw_frame + 0x4c))
  #define uStack_90 (*(undefined4 *)(albw_frame + 0x50))
  #define local_8c ((byte *)(albw_frame + 0x54))
  #define local_7c (*(uint *)(albw_frame + 0x64))
  #define local_78 (*(undefined4 *)(albw_frame + 0x68))
  #define uStack_74 (*(undefined4 *)(albw_frame + 0x6c))
  #define local_70 (*(undefined4 *)(albw_frame + 0x70))
  #define local_6c (*(undefined4 *)(albw_frame + 0x74))
  #define local_68 (*(float *)(albw_frame + 0x78))
  #define local_64 (*(undefined1 *)(albw_frame + 0x7c))
  #define local_63 (*(undefined1 *)(albw_frame + 0x7d))
  #define local_60 (*(undefined4 *)(albw_frame + 0x80))
  #define local_5c (*(undefined4 *)(albw_frame + 0x84))
  #define local_58 (*(undefined4 *)(albw_frame + 0x88))
  #define local_50 (*(int *)(albw_frame + 0x90))
  #define iStack_4c (*(int *)(albw_frame + 0x94))
  #define local_48 (*(int *)(albw_frame + 0x98))
  #define local_44 (*(float * *)(albw_frame + 0x9c))
  #define afStack_40 ((float *)(albw_frame + 0xa0))
  local_44 = (float *)(param_1 + 0x133);
  func_00115C70(afStack_40,local_44,(float *)(param_1 + 0x130));
  cVar5 = *(char *)((int)param_1 + 0x563);
  local_7c = unaff_r5 & 0xffff0000 | DAT_0018df30;
  local_8c[0] = 0;
  local_8c[1] = 0;
  local_8c[2] = 0;
  local_8c[3] = 0;
  local_8c[4] = 0;
  local_8c[5] = 0;
  local_8c[6] = 0;
  local_8c[7] = 0;
  local_8c[8] = 0;
  local_8c[9] = 0;
  local_8c[10] = 0;
  local_8c[0xb] = 0;
  local_8c[0xc] = 0;
  local_8c[0xd] = 0;
  local_8c[0xe] = 0;
  local_8c[0xf] = 0;
  local_78 = 0xff;
  uStack_74 = 0;
  local_70 = 0;
  local_6c = 0;
  local_68 = DAT_0018df34;
  local_64 = 0;
  local_63 = 1;
  uVar12 = DAT_0018df2c;
  fVar13 = DAT_0018df34;
  func_00110D44(&local_c8,local_8c,0x2a);
  local_98 = *DAT_0018df38;
  uStack_94 = DAT_0018df38[1];
  uStack_90 = DAT_0018df38[2];
  local_c4 = param_1 + 0x103;
  local_c8 = 0;
  local_bc = param_1[0xb3];
  local_b4 = DAT_0018df3c;
  local_9c = uVar12;
  func_0014F0B0((int)param_1);
  fVar11 = DAT_0018df48;
  local_dc = param_1[0x136];
  local_d8 = param_1[0x137];
  local_d4 = param_1[0x138];
  local_a8 = &local_dc;
  local_ac = &local_60;
  *(undefined1 *)(param_1 + 0x157) = 0;
  piVar2 = DAT_0018df54;
  fVar9 = DAT_0018df40;
  if (*(char *)((int)param_1 + 0x55e) == '\0') {
    fVar9 = DAT_0018df44;
  }
  fVar9 = fVar9 * fVar11;
  iVar10 = (int)fVar9;
  fVar11 = (float)VectorSignedToFloat(iVar10,(byte)(in_fpscr >> 0x15) & 3);
  if ((fVar11 != fVar9) && (fVar13 <= fVar9)) {
    iVar10 = iVar10 + 1;
  }
  iVar8 = 0;
  if (0 < iVar10) {
    local_d0 = param_1 + 0x127;
    fVar11 = DAT_0018df4c;
    fVar9 = DAT_0018df50;
    while( true ) {
      iVar6 = *(int *)(param_1[0x10b] + iVar8 * 4);
      local_60 = *(undefined4 *)(iVar6 + 4);
      local_5c = *(undefined4 *)(iVar6 + 8);
      local_58 = *(undefined4 *)(iVar6 + 0xc);
      func_004A7620(*piVar2,&local_c8,0xf,fVar9,fVar11);
      piVar3 = DAT_0018df58;
      if ((char)param_1[0x157] != '\0') break;
      if ((cVar5 != '\0') && (iVar8 == iVar10 + -1)) goto LAB_0018de54;
      if (param_2 != 0) {
        return 0;
      }
      iVar8 = iVar8 + 1;
      if (iVar10 <= iVar8) {
        return 0;
      }
      if (iVar8 != 0) {
        iVar6 = *(int *)(param_1[0x10b] + iVar8 * 4 + -4);
        local_dc = *(int *)(iVar6 + 4);
        local_d8 = *(int *)(iVar6 + 8);
        local_d4 = *(int *)(iVar6 + 0xc);
      }
    }
    if (param_1[0x13f] != 0) {
      *(undefined1 *)((int)param_1 + 0x55f) = 1;
      bVar4 = func_00588EEC(*piVar3,local_44,DAT_0018df5c);
      if (bVar4) {
        uVar7 = 6;
      }
      else {
        uVar7 = 1;
      }
      return func_00659688(local_d0,uVar7);
    }
    cVar5 = *(char *)((int)param_1 + 0x559);
    cVar1 = (char)param_1[0x139];
    if (cVar5 == '\0') {
      if (cVar1 == '\x03') {
        cVar5 = '\x01';
      }
      else {
        if ((cVar1 == '\x04') && ((char)param_1[0x156] != '\x01')) goto LAB_0018df6c;
        cVar5 = '\x02';
      }
    }
    if (cVar5 == '\x01') {
LAB_0018df6c:
      *(undefined1 *)((int)param_1 + 0x55f) = 1;
      bVar4 = func_00556EAC(*DAT_0018dfe0,0x4d);
      if ((bVar4) && (param_1[0x15f] == 0)) {
        func_001E85D0(*(int *)(*piVar3 + 0x18));
      }
      return func_00659688(local_d0,3);
    }
    if (cVar5 == '\x02') {
      *(undefined1 *)((int)param_1 + 0x55f) = 1;
      if (param_1[0xd1] == 0) {
        iStack_4c = 0;
        local_50 = 0;
      }
      else {
        func_004A1B9C(&local_50,param_1[0xd1],DAT_0018df60);
      }
      if ((local_50 != 0) && (*(int *)(local_50 + 0x1c) == iStack_4c)) {
        func_004A2F38(local_50,param_1 + 0x140);
      }
      local_48 = DAT_0018df68;
      local_44 = DAT_0018df64;
      *(char *)((int)param_1 + 0x393) = cVar1;
      func_00150A84(param_1,&local_48,0);
LAB_0018de54:
      return func_00659688(local_d0,1);
    }
  }
  return 0;
}


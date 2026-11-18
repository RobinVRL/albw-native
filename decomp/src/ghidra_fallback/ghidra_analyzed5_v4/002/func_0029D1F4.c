#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0025FCB4(undefined4 *param_1);
extern undefined8 func_0029C430(int *param_1,char *param_2);
extern int func_0029FAB4(int *param_1);
extern int func_002DFB9C(int *param_1);
extern int func_002DFDA8(int param_1);
extern longlong func_004C38B0(int param_1,int param_2);
extern int func_004C3DF4(int param_1);
extern int func_00504D48(int param_1,int param_2);
extern int func_0054D224(int *param_1);
extern int *DAT_0029d3bc;
extern int *DAT_0029d3c0;
extern int *DAT_0029d3c4;
extern int DAT_0029d3c8;
extern undefined4 *DAT_0029d3e8;
extern undefined4 DAT_0029d3ec;
extern undefined4 DAT_0029d3f0;
extern int *DAT_0029d3f4;
extern char s_Environment_TitleCamera_bch_0029d3f8[];
extern char s_Environment_TitleLogo_bch_0029d3cc[];
extern char s_cf_0029d3cc[];
extern char s_cf_0029d3f8[];

// USA 0029D1F4 <- EU 0029D1D0 (Ghidra, non-matching)
// GLOBAL DAT_0029d3bc int *
// GLOBAL DAT_0029d3c0 int *
// GLOBAL DAT_0029d3c4 int *
// GLOBAL DAT_0029d3c8 int
// GLOBAL DAT_0029d3e8 undefined4 *
// GLOBAL DAT_0029d3ec undefined4
// GLOBAL DAT_0029d3f0 undefined4
// GLOBAL DAT_0029d3f4 int *
// GLOBAL s_cf_0029d3f8 string
// GLOBAL s_cf_0029d3cc string

void func_0029D1F4(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  _Alignas(8) unsigned char albw_frame[0xd0];
  #define puStack_c8 (*(undefined4 * *)(albw_frame + 0x8))
  #define uStack_c4 (*(undefined4 *)(albw_frame + 0xc))
  #define local_c0 (*(undefined4 *)(albw_frame + 0x10))
  #define local_bc (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_b8 (*(undefined4 *)(albw_frame + 0x18))
  #define local_b4 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_b0 (*(undefined4 *)(albw_frame + 0x20))
  #define local_ac (*(undefined4 *)(albw_frame + 0x24))
  #define local_a8 (*(undefined4 *)(albw_frame + 0x28))
  #define local_a4 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_a0 (*(undefined4 *)(albw_frame + 0x30))
  #define local_9c (*(undefined4 * *)(albw_frame + 0x34))
  #define local_98 (*(undefined4 *)(albw_frame + 0x38))
  #define local_94 (*(undefined1 *)(albw_frame + 0x3c))
  #define local_93 (*(undefined1 *)(albw_frame + 0x3d))
  #define local_92 (*(undefined1 *)(albw_frame + 0x3e))
  #define local_91 (*(undefined1 *)(albw_frame + 0x3f))
  #define local_90 (*(undefined1 *)(albw_frame + 0x40))
  #define local_8c (*(undefined4 * *)(albw_frame + 0x44))
  #define pcStack_88 (*(char * *)(albw_frame + 0x48))
  #define uStack_84 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_80 (*(undefined4 *)(albw_frame + 0x50))
  #define local_7c (*(undefined1 *)(albw_frame + 0x54))
  #define local_78 (*(undefined4 * *)(albw_frame + 0x58))
  #define uStack_74 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_70 (*(undefined4 *)(albw_frame + 0x60))
  #define local_6c (*(undefined4 *)(albw_frame + 0x64))
  #define uStack_68 (*(undefined4 *)(albw_frame + 0x68))
  #define local_64 (*(undefined4 *)(albw_frame + 0x6c))
  #define local_60 (*(undefined4 *)(albw_frame + 0x70))
  #define local_5c (*(undefined4 *)(albw_frame + 0x74))
  #define local_58 (*(undefined4 *)(albw_frame + 0x78))
  #define local_54 (*(undefined4 *)(albw_frame + 0x7c))
  #define local_50 (*(undefined4 *)(albw_frame + 0x80))
  #define local_4c (*(undefined4 * *)(albw_frame + 0x84))
  #define local_48 (*(undefined4 *)(albw_frame + 0x88))
  #define local_44 (*(undefined1 *)(albw_frame + 0x8c))
  #define local_43 (*(undefined1 *)(albw_frame + 0x8d))
  #define local_42 (*(undefined1 *)(albw_frame + 0x8e))
  #define local_41 (*(undefined1 *)(albw_frame + 0x8f))
  #define local_40 (*(undefined1 *)(albw_frame + 0x90))
  #define local_3c (*(undefined4 * *)(albw_frame + 0x94))
  #define pcStack_38 (*(char * *)(albw_frame + 0x98))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x9c))
  #define local_30 (*(undefined4 *)(albw_frame + 0xa0))
  #define local_2c (*(undefined1 *)(albw_frame + 0xa4))
  if (*DAT_0029d3bc == 0) {
    func_0029FAB4((int *)0x0);
  }
  func_002DFB9C((int *)0x0);
  func_002DFDA8(*DAT_0029d3c0);
  piVar8 = DAT_0029d3c4;
  iVar7 = *(int *)(DAT_0029d3c8 + *DAT_0029d3c4);
  func_004C38B0(*DAT_0029d3c4,iVar7);
  func_004C3DF4(*piVar8);
  *(int *)(param_1 + 0x13c) = iVar7;
  piVar8 = *(int **)(*piVar8 + 0x14);
  bVar3 = func_0054D224(piVar8);
  if (bVar3) {
    *(undefined2 *)(param_1 + 0xe8) = 0;
    *(undefined1 *)(param_1 + 0xea) = 1;
    *(undefined1 *)(param_1 + 0xe0) = 0;
    *(undefined4 *)(param_1 + 0xe4) = 0x11;
  }
  else {
    iVar7 = piVar8[2];
    iVar6 = piVar8[1];
    *(char *)(param_1 + 0xe0) = (char)*piVar8;
    *(int *)(param_1 + 0xe4) = iVar6;
    *(short *)(param_1 + 0xe8) = (short)iVar7;
    *(char *)(param_1 + 0xea) = (char)(iVar7 >> 0x1f) + '\x01';
  }
  func_0029C430(*(int **)(param_1 + 0x138),(char *)(param_1 + 0xe0));
  piVar2 = DAT_0029d3f4;
  uVar1 = DAT_0029d3ec;
  puVar5 = DAT_0029d3e8;
  local_c0 = 0;
  local_bc = 0;
  uStack_b8 = 0x20;
  local_b4 = 0;
  local_b0 = 0;
  local_ac = 0;
  local_a8 = 0;
  local_a4 = 0;
  local_a0 = 0;
  puStack_c8 = DAT_0029d3e8;
  uStack_c4 = DAT_0029d3ec;
  local_94 = 7;
  local_98 = DAT_0029d3f0;
  local_9c = DAT_0029d3e8;
  local_92 = 0;
  local_8c = DAT_0029d3e8;
  pcStack_88 = s_Environment_TitleLogo_bch_0029d3cc;
  uStack_84 = 0;
  local_80 = 0;
  local_7c = 0;
  local_91 = 1;
  local_90 = 1;
  local_93 = 0xff;
  local_78 = func_00504D48(*DAT_0029d3f4,(int)&puStack_c8);
  puVar4 = (undefined4 *)func_0010BAB4(0x198);
  piVar8 = (int *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    piVar8 = func_0025FCB4(puVar4);
  }
  *(int **)(param_1 + 0xec) = piVar8;
  (**(code **)(*piVar8 + 0x5c))(piVar8,local_78);
  local_70 = 0;
  local_6c = 0;
  uStack_68 = 0x20;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_78 = puVar5;
  uStack_74 = uVar1;
  local_44 = 7;
  local_4c = puVar5;
  local_48 = DAT_0029d3f0;
  local_42 = 0;
  local_3c = puVar5;
  pcStack_38 = s_Environment_TitleCamera_bch_0029d3f8;
  uStack_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_41 = 1;
  local_40 = 1;
  local_43 = 0xff;
  puVar5 = func_00504D48(*piVar2,(int)&local_78);
  *(undefined4 **)(param_1 + 0xf8) = puVar5;
  return;
}


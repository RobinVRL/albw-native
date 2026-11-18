#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00110490(undefined4 *param_1,uint param_2);
extern int func_00120B44(int param_1);
extern int func_002615BC(int *param_1);
extern int func_0029E244(int *param_1);
extern int func_0029E454(int param_1,int param_2);
extern int func_002DF3E4(int param_1);
extern int func_0031D4D4(int param_1,float fparam_0);
extern int func_0031DA18(undefined4 *param_1);
extern int func_004C3DF4(int param_1);
extern int func_00504D48(int param_1,int param_2);
extern int *DAT_0025e604;
extern undefined4 DAT_0025e628;
extern undefined4 DAT_0025e62c;
extern int *DAT_0025e638;
extern int *DAT_0025e63c;
extern float *DAT_0025e640;
extern int *DAT_0025e644;
extern int *DAT_0025e648;
extern int DAT_0025e64c;
extern int DAT_0025e650;
extern int DAT_0025e654;
extern int DAT_0025e658;
extern int *DAT_0025e65c;
extern char s_Environment_StaffRollCamera_bch_0025e608[];
extern char s_World_0025e630[];
extern char s_cf_0025e608[];

// USA 0025E3B0 <- EU 0025E3D8 (Ghidra, non-matching)
// GLOBAL DAT_0025e604 int *
// GLOBAL DAT_0025e628 undefined4
// GLOBAL DAT_0025e62c undefined4
// GLOBAL DAT_0025e638 int *
// GLOBAL DAT_0025e63c int *
// GLOBAL DAT_0025e640 float *
// GLOBAL DAT_0025e644 int *
// GLOBAL DAT_0025e648 int *
// GLOBAL DAT_0025e64c int
// GLOBAL DAT_0025e650 int
// GLOBAL DAT_0025e654 int
// GLOBAL DAT_0025e658 int
// GLOBAL DAT_0025e65c int *
// GLOBAL s_cf_0025e608 string
// GLOBAL s_World_0025e630 string

undefined8 func_0025E3B0(int param_1)

{
  uint uVar1;
  float *pfVar2;
  int *piVar3;
  int iVar4;
  ushort uVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  _Alignas(8) unsigned char albw_frame[0xe0];
  #define local_e0 ((uint *)(albw_frame + 0x0))
  #define local_60 (*(undefined4 *)(albw_frame + 0x80))
  #define local_5c (*(undefined4 *)(albw_frame + 0x84))
  #define local_58 (*(undefined4 *)(albw_frame + 0x88))
  #define local_54 (*(undefined4 *)(albw_frame + 0x8c))
  #define uStack_50 (*(undefined4 *)(albw_frame + 0x90))
  #define local_4c (*(undefined4 *)(albw_frame + 0x94))
  #define local_48 (*(undefined4 *)(albw_frame + 0x98))
  #define local_44 (*(undefined4 *)(albw_frame + 0x9c))
  #define local_40 (*(undefined4 *)(albw_frame + 0xa0))
  #define local_3c (*(undefined4 *)(albw_frame + 0xa4))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0xa8))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0xac))
  #define pcStack_30 (*(char * *)(albw_frame + 0xb0))
  #define local_2c (*(undefined1 *)(albw_frame + 0xb4))
  #define local_2b (*(undefined1 *)(albw_frame + 0xb5))
  #define local_2a (*(undefined1 *)(albw_frame + 0xb6))
  #define local_29 (*(undefined1 *)(albw_frame + 0xb7))
  #define local_28 (*(undefined1 *)(albw_frame + 0xb8))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0xbc))
  #define pcStack_20 (*(char * *)(albw_frame + 0xc0))
  #define local_1c (*(undefined4 *)(albw_frame + 0xc4))
  #define local_18 (*(undefined4 *)(albw_frame + 0xc8))
  #define local_14 (*(undefined1 *)(albw_frame + 0xcc))
  func_002DF3E4(*DAT_0025e604);
  local_5c = DAT_0025e62c;
  local_58 = 0;
  local_60 = DAT_0025e628;
  local_54 = 0;
  uStack_50 = 0x20;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  uStack_38 = 0;
  uStack_34 = DAT_0025e628;
  pcStack_30 = s_World_0025e630;
  local_2c = 7;
  local_2a = 0;
  local_1c = 0;
  local_18 = 0;
  uStack_24 = DAT_0025e628;
  pcStack_20 = s_Environment_StaffRollCamera_bch_0025e608;
  local_14 = 0;
  local_29 = 1;
  local_2b = 0xff;
  local_28 = 1;
  puVar6 = func_00504D48(*DAT_0025e638,(int)&local_60);
  *(undefined4 **)(param_1 + 0xec) = puVar6;
  if (*DAT_0025e63c == 0) {
    func_002615BC((int *)0x0);
  }
  puVar6 = (undefined4 *)func_0010BAB4(0x16c);
  iVar7 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    iVar7 = func_0031DA18(puVar6);
  }
  pfVar2 = DAT_0025e640;
  *(int *)(param_1 + 0xf4) = iVar7;
  func_0031D4D4(iVar7,*pfVar2);
  func_0029E244((int *)0x0);
  func_0029E454(*DAT_0025e644,0);
  piVar3 = DAT_0025e648;
  func_004C3DF4(*DAT_0025e648);
  func_00110490(local_e0,0x80);
  uVar5 = func_00120B44(DAT_0025e64c);
  uVar8 = 0;
  if (uVar5 != 0xffffffff) {
    do {
      uVar1 = uVar8 >> 5;
      uVar9 = uVar8 & 0x1f;
      uVar8 = uVar8 + 1;
      local_e0[uVar1] = local_e0[uVar1] | 1 << uVar9;
    } while ((int)uVar8 < (int)(uVar5 + 1));
  }
  uVar5 = func_00120B44(0xfa);
  local_e0[uVar5 >> 5] = local_e0[uVar5 >> 5] & ~(1 << (uVar5 & 0x1f));
  iVar7 = *(int *)(*piVar3 + 0x14) + 0x40;
  uVar5 = func_00120B44(DAT_0025e650);
  uVar8 = 1 << (uVar5 & 0x1f);
  if ((*(uint *)(iVar7 + (uint)(uVar5 >> 5) * 4) & uVar8) != 0) {
    local_e0[uVar5 >> 5] = local_e0[uVar5 >> 5] | uVar8;
  }
  uVar5 = func_00120B44(DAT_0025e654);
  iVar4 = DAT_0025e658;
  uVar8 = 1 << (uVar5 & 0x1f);
  if ((*(uint *)(iVar7 + (uint)(uVar5 >> 5) * 4) & uVar8) != 0) {
    local_e0[uVar5 >> 5] = uVar8 | local_e0[uVar5 >> 5];
  }
  iVar7 = 0;
  do {
    uVar5 = func_00120B44((uint)*(ushort *)(iVar4 + iVar7 * 2));
    iVar7 = iVar7 + 1;
    local_e0[uVar5 >> 5] = local_e0[uVar5 >> 5] | 1 << (uVar5 & 0x1f);
  } while (iVar7 < 2);
  uVar10 = func_0010E3C4((uint *)(*DAT_0025e65c + 0x48),local_e0,0x80);
  return uVar10;
}


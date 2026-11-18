#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0019B04C(uint param_1);
extern int func_00504D48(int param_1,int param_2);
extern undefined8 func_00689928(int *param_1,int *param_2,uint param_3);
extern int DAT_00553450;
extern int DAT_00553454;
extern int DAT_00553458;
extern uint *DAT_0055345c;
extern undefined4 *DAT_00553460;
extern undefined4 DAT_00553464;
extern undefined4 DAT_00553468;
extern undefined DAT_00553478;
extern int *DAT_00553480;
extern char s_PlayerItem__0055346c[];
extern char s_cf_0055346c[];

// USA 005532D8 <- EU 005532B0 (Ghidra, non-matching)
// GLOBAL DAT_00553450 int
// GLOBAL DAT_00553454 int
// GLOBAL DAT_00553458 int
// GLOBAL DAT_0055345c uint *
// GLOBAL DAT_00553460 undefined4 *
// GLOBAL DAT_00553464 undefined4
// GLOBAL DAT_00553468 undefined4
// GLOBAL DAT_00553478 undefined
// GLOBAL DAT_00553480 int *
// GLOBAL s_cf_0055346c string

undefined4 * func_005532D8(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  _Alignas(8) unsigned char albw_frame[0x1a0];
  #define local_19c (*(int *)(albw_frame + 0x4))
  #define local_198 (*(uint * *)(albw_frame + 0x8))
  #define local_194 (*(int *)(albw_frame + 0xc))
  #define local_190 ((undefined1 *)(albw_frame + 0x10))
  #define uStack_91 (*(undefined1 *)(albw_frame + 0x10f))
  #define local_90 (*(int *)(albw_frame + 0x110))
  #define local_8c (*(uint * *)(albw_frame + 0x114))
  #define local_88 (*(int *)(albw_frame + 0x118))
  #define local_84 (*(undefined4 *)(albw_frame + 0x11c))
  #define local_80 (*(undefined4 *)(albw_frame + 0x120))
  #define local_7c (*(undefined4 *)(albw_frame + 0x124))
  #define local_78 (*(undefined4 *)(albw_frame + 0x128))
  #define uStack_74 (*(undefined4 *)(albw_frame + 0x12c))
  #define local_70 (*(undefined4 *)(albw_frame + 0x130))
  #define local_6c (*(undefined4 *)(albw_frame + 0x134))
  #define local_68 (*(undefined4 *)(albw_frame + 0x138))
  #define local_64 (*(undefined4 *)(albw_frame + 0x13c))
  #define local_60 (*(undefined4 *)(albw_frame + 0x140))
  #define local_5c (*(int *)(albw_frame + 0x144))
  #define local_58 (*(undefined4 *)(albw_frame + 0x148))
  #define local_54 (*(undefined1 *)(albw_frame + 0x14c))
  #define local_53 (*(undefined1 *)(albw_frame + 0x14d))
  #define local_52 (*(undefined1 *)(albw_frame + 0x14e))
  #define local_51 (*(undefined1 *)(albw_frame + 0x14f))
  #define local_50 (*(undefined1 *)(albw_frame + 0x150))
  #define local_4c (*(int *)(albw_frame + 0x154))
  #define local_48 (*(uint * *)(albw_frame + 0x158))
  #define local_44 (*(undefined4 *)(albw_frame + 0x15c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x160))
  #define local_3c (*(undefined1 *)(albw_frame + 0x164))
  iVar1 = DAT_00553454;
  iVar6 = DAT_00553450 + param_2 * 0x10;
  local_198 = (uint *)local_190;
  local_194 = 0x100;
  uStack_91 = 0;
  local_190[0] = 0;
  local_19c = DAT_00553458;
  iVar4 = func_0019B04C(*DAT_0055345c);
  puVar3 = local_198;
  puVar2 = DAT_00553460;
  *DAT_00553460 = *(undefined4 *)(iVar4 + 0x214);
  local_88 = iVar1;
  local_80 = 0;
  local_84 = DAT_00553464;
  local_7c = 0;
  local_78 = 0x20;
  uStack_74 = 0;
  local_6c = 0;
  local_68 = 0;
  local_58 = DAT_00553468;
  local_54 = 7;
  local_51 = 0;
  local_40 = 0;
  local_44 = 0;
  local_53 = 0xff;
  local_70 = 0;
  local_64 = 0;
  local_5c = iVar1;
  local_60 = 0;
  local_50 = 0;
  local_48 = local_198;
  local_4c = iVar1;
  local_3c = 0;
  local_52 = 10;
  uVar8 = *(undefined4 *)(iVar6 + param_3 * 4);
  local_8c = (uint *)s_PlayerItem__0055346c;
  local_90 = iVar1;
  (**(code **)(iVar1 + 8))(&local_90);
  uVar7 = 0;
  do {
    if (*(char *)((int)local_8c + uVar7) == '\0') {
      if ((int)uVar7 < 0x40001) goto LAB_005533d0;
      break;
    }
    uVar7 = uVar7 + 1;
  } while ((int)uVar7 < 0x40001);
  uVar7 = 0;
LAB_005533d0:
  if (local_194 <= (int)uVar7) {
    uVar7 = local_194 - 1;
  }
  (**(code **)(local_90 + 8))(&local_90);
  func_0010E3C4(puVar3,local_8c,uVar7);
  *(undefined1 *)((int)puVar3 + uVar7) = 0;
  local_90 = iVar1;
  local_8c = (uint *)uVar8;
  func_00689928(&local_19c,&local_90,0xffffffff);
  local_8c = (uint *)&DAT_00553478;
  local_90 = iVar1;
  func_00689928(&local_19c,&local_90,0xffffffff);
  puVar5 = func_00504D48(*DAT_00553480,(int)&local_88);
  *puVar2 = 0;
  return puVar5;
}


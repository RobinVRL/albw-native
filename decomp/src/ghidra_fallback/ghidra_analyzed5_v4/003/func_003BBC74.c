#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_001139F8(int param_1);
extern int func_002C2D00(int *param_1);
extern int func_003CC030(undefined4 *param_1,int param_2);
extern int func_003CD3DC(undefined4 *param_1);
extern int func_00504D48(int param_1,int param_2);
extern int func_0058FAAC(undefined4 param_1,undefined4 param_2);
extern int DAT_003bc028;
extern int DAT_003bc02c;
extern int DAT_003bc030;
extern undefined4 DAT_003bc034;
extern int *DAT_003bc040;
extern undefined4 DAT_003bc044;
extern uint DAT_003bc048;
extern char s_Environment__003bc018[];
extern char s_World_003bc038[];
extern char s_cf_003bc018[];

// USA 003BBC74 <- EU 003BBC50 (Ghidra, non-matching)
// GLOBAL DAT_003bc028 int
// GLOBAL DAT_003bc02c int
// GLOBAL DAT_003bc030 int
// GLOBAL DAT_003bc034 undefined4
// GLOBAL DAT_003bc040 int *
// GLOBAL DAT_003bc044 undefined4
// GLOBAL DAT_003bc048 uint
// GLOBAL s_cf_003bc018 string
// GLOBAL s_World_003bc038 string

undefined8 func_003BBC74(int param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  _Alignas(8) unsigned char albw_frame[0x5d0];
  #define local_5d0 (*(int *)(albw_frame + 0x0))
  #define local_5cc (*(uint * *)(albw_frame + 0x4))
  #define local_5c0 (*(uint *)(albw_frame + 0x10))
  #define local_5bc (*(uint *)(albw_frame + 0x14))
  #define local_5b8 (*(byte *)(albw_frame + 0x18))
  #define local_518 (*(uint *)(albw_frame + 0xb8))
  #define local_514 (*(undefined4 *)(albw_frame + 0xbc))
  #define local_510 (*(undefined4 *)(albw_frame + 0xc0))
  #define uStack_50c (*(uint *)(albw_frame + 0xc4))
  #define local_508 (*(uint *)(albw_frame + 0xc8))
  #define uStack_504 (*(uint *)(albw_frame + 0xcc))
  #define local_500 (*(uint *)(albw_frame + 0xd0))
  #define iStack_4fc (*(int *)(albw_frame + 0xd4))
  #define local_4f8 ((int *)(albw_frame + 0xd8))
  #define local_118 (*(int *)(albw_frame + 0x4b8))
  #define local_114 (*(uint * *)(albw_frame + 0x4bc))
  #define local_110 (*(int *)(albw_frame + 0x4c0))
  #define local_10c ((uint *)(albw_frame + 0x4c4))
  #define uStack_cd (*(undefined1 *)(albw_frame + 0x503))
  #define local_cc (*(uint * *)(albw_frame + 0x504))
  #define local_c8 (*(int *)(albw_frame + 0x508))
  #define uStack_c4 (*(undefined4 *)(albw_frame + 0x50c))
  #define uStack_c0 (*(undefined4 *)(albw_frame + 0x510))
  #define local_bc (*(undefined4 *)(albw_frame + 0x514))
  #define local_b8 (*(undefined4 *)(albw_frame + 0x518))
  #define uStack_b4 (*(undefined4 *)(albw_frame + 0x51c))
  #define local_b0 (*(undefined4 *)(albw_frame + 0x520))
  #define local_ac (*(undefined4 *)(albw_frame + 0x524))
  #define local_a8 (*(undefined4 *)(albw_frame + 0x528))
  #define local_a4 (*(undefined4 *)(albw_frame + 0x52c))
  #define local_a0 (*(undefined4 *)(albw_frame + 0x530))
  #define local_9c (*(int *)(albw_frame + 0x534))
  #define local_98 (*(char * *)(albw_frame + 0x538))
  #define local_94 (*(undefined1 *)(albw_frame + 0x53c))
  #define local_93 (*(undefined1 *)(albw_frame + 0x53d))
  #define local_92 (*(undefined1 *)(albw_frame + 0x53e))
  #define local_91 (*(undefined1 *)(albw_frame + 0x53f))
  #define local_90 (*(undefined1 *)(albw_frame + 0x540))
  #define local_8c (*(int *)(albw_frame + 0x544))
  #define local_88 (*(uint * *)(albw_frame + 0x548))
  #define local_84 (*(undefined4 *)(albw_frame + 0x54c))
  #define local_80 (*(undefined4 *)(albw_frame + 0x550))
  #define local_7c (*(undefined1 *)(albw_frame + 0x554))
  #define local_78 (*(int *)(albw_frame + 0x558))
  #define uStack_74 (*(undefined4 *)(albw_frame + 0x55c))
  #define iStack_70 (*(int *)(albw_frame + 0x560))
  #define local_6c (*(undefined4 *)(albw_frame + 0x564))
  #define local_68 (*(undefined4 * *)(albw_frame + 0x568))
  #define uStack_64 (*(undefined4 *)(albw_frame + 0x56c))
  #define local_60 (*(undefined4 *)(albw_frame + 0x570))
  #define local_5c (*(undefined1 *)(albw_frame + 0x574))
  #define local_5b (*(undefined1 *)(albw_frame + 0x575))
  #define local_58 (*(undefined4 *)(albw_frame + 0x578))
  #define local_54 (*(undefined4 *)(albw_frame + 0x57c))
  #define local_50 (*(undefined4 *)(albw_frame + 0x580))
  #define local_4c (*(undefined4 *)(albw_frame + 0x584))
  #define local_48 (*(undefined4 *)(albw_frame + 0x588))
  #define local_44 (*(undefined4 *)(albw_frame + 0x58c))
  #define local_40 (*(undefined1 *)(albw_frame + 0x590))
  #define local_3f (*(undefined1 *)(albw_frame + 0x591))
  #define iStack_30 (*(int *)(albw_frame + 0x5a0))
  #define piStack_2c (*(int * *)(albw_frame + 0x5a4))
  #define local_28 (*(undefined4 *)(albw_frame + 0x5a8))
  iVar6 = DAT_003bc028;
  local_5cc = (uint *)s_Environment__003bc018;
  local_5d0 = DAT_003bc028;
  local_110 = 0x40;
  uStack_cd = 0;
  local_118 = DAT_003bc02c;
  local_114 = local_10c;
  iStack_30 = param_1;
  piStack_2c = param_2;
  local_28 = param_3;
  (**(code **)(DAT_003bc028 + 8))(&local_5d0);
  uVar5 = 0;
  do {
    if (*(char *)((int)local_5cc + uVar5) == '\0') {
      if ((int)uVar5 < 0x40001) goto LAB_003bbcf0;
      break;
    }
    uVar5 = uVar5 + 1;
  } while ((int)uVar5 < 0x40001);
  uVar5 = 0;
LAB_003bbcf0:
  if (local_110 <= (int)uVar5) {
    uVar5 = local_110 - 1;
  }
  (**(code **)(local_5d0 + 8))(&local_5d0);
  func_0010E3C4(local_10c,local_5cc,uVar5);
  puVar4 = local_114;
  local_118 = DAT_003bc030;
  *(undefined1 *)((int)local_10c + uVar5) = 0;
  (**(code **)(local_118 + 8))(&local_118);
  iVar8 = 0;
  do {
    if (*(char *)((int)local_114 + iVar8) == '\0') {
      if (iVar8 < 0x40001) goto LAB_003bbd78;
      break;
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0x40001);
  iVar8 = 0;
LAB_003bbd78:
  iVar7 = iVar8;
  if (iVar8 < 0) {
    iVar7 = 0;
  }
  (**(code **)(*param_2 + 8))(param_2);
  uVar5 = 0;
  do {
    if (*(char *)(param_2[1] + uVar5) == '\0') {
      if ((int)uVar5 < 0x40001) goto LAB_003bbdc8;
      break;
    }
    uVar5 = uVar5 + 1;
  } while ((int)uVar5 < 0x40001);
  uVar5 = 0;
LAB_003bbdc8:
  if (local_110 - iVar7 <= (int)uVar5) {
    uVar5 = (local_110 - iVar7) - 1;
  }
  if (0 < (int)uVar5) {
    local_cc = (uint *)((int)puVar4 + iVar7);
    (**(code **)(*param_2 + 8))(param_2);
    func_0010E3C4(local_cc,(uint *)param_2[1],uVar5);
    if (iVar8 < (int)(iVar7 + uVar5)) {
      *(undefined1 *)((int)puVar4 + iVar7 + uVar5) = 0;
    }
  }
  uVar1 = DAT_003bc034;
  local_c8 = iVar6;
  uStack_c4 = DAT_003bc034;
  uStack_c0 = 0;
  local_bc = 0;
  local_b8 = 0x20;
  uStack_b4 = 0;
  local_ac = 0;
  local_b0 = 0;
  local_98 = s_World_003bc038;
  local_9c = iVar6;
  local_a8 = 0;
  local_a0 = 0;
  local_94 = 7;
  local_8c = iVar6;
  local_92 = 0;
  local_88 = local_114;
  local_a4 = 0;
  local_80 = 0;
  local_7c = 0;
  local_93 = 0xff;
  local_84 = local_28;
  local_91 = 1;
  local_90 = 1;
  local_68 = func_00504D48(*DAT_003bc040,(int)&local_c8);
  piVar2 = local_68 + 0x32;
  if (*piVar2 != 0) {
    local_68 = *(undefined4 **)local_68[0x34];
  }
  local_78 = iVar6;
  uStack_74 = uVar1;
  iStack_70 = iVar6;
  if (*piVar2 == 0) {
    local_68 = (undefined4 *)0x0;
  }
  local_6c = uVar1;
  uStack_64 = 0;
  local_40 = 1;
  local_48 = 0;
  local_54 = 0;
  local_44 = 0;
  local_4c = 0;
  local_3f = 0xc4;
  local_5b = 1;
  local_58 = 0;
  local_50 = 0;
  local_5c = 1;
  local_60 = 1;
  piVar2 = func_002C2D00(&local_78);
  *(int **)(param_1 + 500) = piVar2;
  piVar2[0x59] = piVar2[0x59] | 1;
  func_003CD3DC(&local_5c0);
  uVar1 = DAT_003bc044;
  iVar6 = 0;
  local_5b8 = 3;
  local_5bc = 0x2000100;
  do {
    local_5c0 = func_001139F8(*(int *)(*(int *)(*(int *)(param_1 + 0x1ec) + 0x70 + iVar6 * 8) + 8));
    local_518 = local_5bc >> 0x10 | local_5bc << 0x10;
    local_514 = uVar1;
    local_510 = 0;
    uStack_50c = DAT_003bc048;
    uStack_504 = DAT_003bc048 | (int)DAT_003bc048 >> 0x13;
    iVar7 = param_1 + iVar6 * 8;
    local_508 = local_5c0 >> 3;
    local_500 = (uint)local_5b8;
    iStack_4fc = uStack_504 + 9;
    piVar2 = &iStack_4fc;
    iVar8 = 1;
    do {
      piVar2[1] = 0;
      iVar8 = iVar8 + -1;
      piVar2 = piVar2 + 2;
      *piVar2 = 0;
    } while (iVar8 != 0);
    puVar3 = func_003CC030(local_4f8 + 2,1);
    *(int *)(iVar7 + 0x204) = (int)puVar3 - (int)&local_518 >> 2;
    *(uint **)(iVar7 + 0x200) = &local_518;
    puVar4 = (uint *)func_0058FAAC(*(int *)(iVar7 + 0x204) << 2,0x10);
    uVar9 = func_0010E3C4(puVar4,&local_518,*(int *)(iVar7 + 0x204) << 2);
    iVar6 = iVar6 + 1;
    *(uint **)(iVar7 + 0x200) = puVar4;
  } while (iVar6 < 2);
  return uVar9;
}


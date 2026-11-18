#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_001E0B94(int param_1,undefined4 param_2,int param_3);
extern int func_00504D48(int param_1,int param_2);
extern int func_00688E10(undefined4 *param_1,int *param_2);
extern undefined8 func_00689928(int *param_1,int *param_2,uint param_3);
extern undefined DAT_0044718c;
extern int DAT_00447190;
extern undefined4 DAT_00447194;
extern undefined4 DAT_00447198;
extern int *DAT_004471b0;
extern int *DAT_00447360;
extern int *DAT_00447364;
extern char s_Layout_MapTexture_Lyt_FieldDark__004471f0[];
extern char s_Layout_MapTexture_Lyt_FieldLight_004471c8[];
extern char s_Layout_MapTexture__0044719c[];
extern char s_Lyt_FieldDark_bch_004471b4[];
extern char s_Lyt_FieldLight_bch_00447214[];
extern char s_World__00447358[];
extern char s_cf_0044719c[];
extern char s_cf_004471b4[];
extern char s_cf_004471c8[];
extern char s_cf_004471f0[];
extern char s_cf_00447214[];
extern char s_cf_00447358[];

// USA 00446EAC <- EU 00446E84 (Ghidra, non-matching)
// GLOBAL DAT_0044718c undefined
// GLOBAL DAT_00447190 int
// GLOBAL DAT_00447194 undefined4
// GLOBAL DAT_00447198 undefined4
// GLOBAL DAT_004471b0 int *
// GLOBAL DAT_00447360 int *
// GLOBAL DAT_00447364 int *
// GLOBAL s_cf_004471f0 string
// GLOBAL s_cf_004471c8 string
// GLOBAL s_cf_0044719c string
// GLOBAL s_cf_004471b4 string
// GLOBAL s_cf_00447214 string
// GLOBAL s_cf_00447358 string

void func_00446EAC(int param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint *puVar6;
  uint *puVar7;
  char *pcVar8;
  undefined4 *puVar9;
  uint uVar10;
  _Alignas(8) unsigned char albw_frame[0x530];
  #define local_528 (*(int *)(albw_frame + 0x8))
  #define local_524 (*(uint * *)(albw_frame + 0xc))
  #define local_51c (*(int *)(albw_frame + 0x14))
  #define local_518 (*(uint * *)(albw_frame + 0x18))
  #define iStack_410 (*(int *)(albw_frame + 0x120))
  #define local_40c (*(uint * *)(albw_frame + 0x124))
  #define local_408 (*(int *)(albw_frame + 0x128))
  #define aiStack_304 ((int *)(albw_frame + 0x22c))
  #define aiStack_1f8 ((int *)(albw_frame + 0x338))
  #define local_e0 (*(int *)(albw_frame + 0x450))
  #define local_dc (*(undefined4 *)(albw_frame + 0x454))
  #define local_d8 (*(undefined4 *)(albw_frame + 0x458))
  #define local_d4 (*(undefined4 *)(albw_frame + 0x45c))
  #define local_d0 (*(undefined4 *)(albw_frame + 0x460))
  #define uStack_cc (*(undefined4 *)(albw_frame + 0x464))
  #define local_c8 (*(undefined4 *)(albw_frame + 0x468))
  #define local_c4 (*(undefined4 *)(albw_frame + 0x46c))
  #define local_c0 (*(undefined4 *)(albw_frame + 0x470))
  #define local_bc (*(undefined4 *)(albw_frame + 0x474))
  #define local_b8 (*(undefined4 *)(albw_frame + 0x478))
  #define local_b4 (*(int *)(albw_frame + 0x47c))
  #define local_b0 (*(undefined4 *)(albw_frame + 0x480))
  #define local_ac (*(undefined1 *)(albw_frame + 0x484))
  #define local_ab (*(undefined1 *)(albw_frame + 0x485))
  #define local_aa (*(undefined1 *)(albw_frame + 0x486))
  #define local_a9 (*(undefined1 *)(albw_frame + 0x487))
  #define local_a8 (*(undefined1 *)(albw_frame + 0x488))
  #define local_a4 (*(int *)(albw_frame + 0x48c))
  #define local_a0 (*(uint * *)(albw_frame + 0x490))
  #define uStack_9c (*(undefined4 *)(albw_frame + 0x494))
  #define local_98 (*(int * *)(albw_frame + 0x498))
  #define local_94 (*(undefined1 *)(albw_frame + 0x49c))
  #define local_90 (*(int *)(albw_frame + 0x4a0))
  #define local_8c (*(undefined4 *)(albw_frame + 0x4a4))
  #define local_88 (*(undefined4 *)(albw_frame + 0x4a8))
  #define local_84 (*(undefined4 *)(albw_frame + 0x4ac))
  #define local_80 (*(undefined4 *)(albw_frame + 0x4b0))
  #define uStack_7c (*(undefined4 *)(albw_frame + 0x4b4))
  #define local_78 (*(undefined4 *)(albw_frame + 0x4b8))
  #define local_74 (*(undefined4 *)(albw_frame + 0x4bc))
  #define local_70 (*(undefined4 *)(albw_frame + 0x4c0))
  #define local_6c (*(undefined4 *)(albw_frame + 0x4c4))
  #define local_68 (*(undefined4 *)(albw_frame + 0x4c8))
  #define local_64 (*(int *)(albw_frame + 0x4cc))
  #define local_60 (*(undefined4 *)(albw_frame + 0x4d0))
  #define local_5c (*(undefined1 *)(albw_frame + 0x4d4))
  #define local_5b (*(undefined1 *)(albw_frame + 0x4d5))
  #define local_5a (*(undefined1 *)(albw_frame + 0x4d6))
  #define local_59 (*(undefined1 *)(albw_frame + 0x4d7))
  #define local_58 (*(undefined1 *)(albw_frame + 0x4d8))
  #define local_54 (*(int *)(albw_frame + 0x4dc))
  #define local_50 (*(uint * *)(albw_frame + 0x4e0))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x4e4))
  #define local_48 (*(int * *)(albw_frame + 0x4e8))
  #define local_44 (*(undefined1 *)(albw_frame + 0x4ec))
  #define local_40 (*(int *)(albw_frame + 0x4f0))
  #define local_3c (*(uint * *)(albw_frame + 0x4f4))
  #define local_30 (*(int *)(albw_frame + 0x500))
  #define local_2c (*(char * *)(albw_frame + 0x504))
  iVar3 = DAT_00447190;
  local_8c = DAT_00447194;
  local_90 = DAT_00447190;
  local_88 = 0;
  local_84 = 0;
  local_80 = 0x20;
  uStack_7c = 0;
  local_74 = 0;
  local_70 = 0;
  local_60 = DAT_00447198;
  local_5c = 7;
  local_5b = 4;
  local_78 = 0;
  local_6c = 0;
  local_68 = 0;
  local_5a = 0;
  local_64 = DAT_00447190;
  local_59 = 0;
  local_58 = 0;
  local_54 = DAT_00447190;
  local_50 = (uint *)&DAT_0044718c;
  uStack_4c = 0;
  bVar2 = true;
  local_48 = (int *)0x0;
  local_dc = DAT_00447194;
  local_44 = 1;
  local_e0 = DAT_00447190;
  local_d8 = 0;
  local_d4 = 0;
  local_d0 = 0x20;
  uStack_cc = 0;
  local_c0 = 0;
  local_ac = 7;
  local_ab = 4;
  local_c8 = 0;
  local_c4 = 0;
  local_bc = 0;
  local_b8 = 0;
  local_aa = 0;
  local_b0 = DAT_00447198;
  local_b4 = DAT_00447190;
  local_a9 = 0;
  local_a8 = 0;
  local_a4 = DAT_00447190;
  local_a0 = (uint *)&DAT_0044718c;
  uStack_9c = 0;
  local_94 = 1;
  local_2c = s_Layout_MapTexture__0044719c;
  local_98 = (int *)0x0;
  local_30 = DAT_00447190;
  func_00688E10(&local_51c,&local_30);
  local_524 = (uint *)s_Layout_MapTexture__0044719c;
  local_528 = iVar3;
  func_00688E10(&iStack_410,&local_528);
  cVar1 = *(char *)(*DAT_004471b0 + 0x18);
  if (cVar1 == '\n') {
LAB_00447114:
    local_3c = (uint *)s_Lyt_FieldLight_bch_00447214;
    local_40 = iVar3;
    func_00689928(&local_51c,&local_40,0xffffffff);
  }
  else {
    if (cVar1 < '\v') {
      if ((cVar1 == '\0' || cVar1 == '\x02') || (cVar1 == '\x04' || cVar1 == '\t'))
      goto LAB_00447114;
    }
    else if ((cVar1 == '\v' || cVar1 == '\f') || (cVar1 == '\x12' || cVar1 == '\x16'))
    goto LAB_00447114;
    local_3c = (uint *)s_Lyt_FieldDark_bch_004471b4;
    local_40 = iVar3;
    func_00689928(&local_51c,&local_40,0xffffffff);
  }
  local_524 = (uint *)s_Layout_MapTexture_Lyt_FieldLight_004471c8;
  local_528 = iVar3;
  (**(code **)(local_51c + 8))(&local_51c);
  (**(code **)(local_51c + 8))(&local_51c);
  puVar6 = local_518;
  (**(code **)(local_528 + 8))(&local_528);
  puVar7 = local_40c;
  pcVar8 = (char *)local_524;
  if (puVar6 != local_524) {
    pcVar8 = (char *)0x0;
    do {
      if (*(char *)((int)local_518 + (int)pcVar8) != *(char *)((int)local_524 + (int)pcVar8)) break;
      if (*(char *)((int)local_518 + (int)pcVar8) == '\0') goto LAB_004470a4;
      pcVar8 = (char *)((int)pcVar8 + 1);
    } while ((int)pcVar8 < 0x40001);
    bVar2 = false;
  }
LAB_004470a4:
  bVar2 = !bVar2;
  if (bVar2) {
    pcVar8 = s_Layout_MapTexture_Lyt_FieldLight_004471c8;
  }
  else {
    local_3c = (uint *)s_Layout_MapTexture_Lyt_FieldDark__004471f0;
  }
  local_40 = iVar3;
  if (bVar2) {
    local_3c = (uint *)pcVar8;
  }
  if (bVar2) {
    (**(code **)(iVar3 + 8))(&local_40);
    uVar10 = 0;
    do {
      if (*(char *)((int)local_3c + uVar10) == '\0') {
        if ((int)uVar10 < 0x40001) goto LAB_00447234;
        break;
      }
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < 0x40001);
    uVar10 = 0;
LAB_00447234:
    if ((int)uVar10 < local_408) goto LAB_00447240;
  }
  else {
    (**(code **)(iVar3 + 8))();
    uVar10 = 0;
    do {
      if (*(char *)((int)local_3c + uVar10) == '\0') {
        if ((int)uVar10 < 0x40001) goto LAB_0044714c;
        break;
      }
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < 0x40001);
    uVar10 = 0;
LAB_0044714c:
    if ((int)uVar10 < local_408) goto LAB_00447240;
  }
  uVar10 = local_408 - 1;
LAB_00447240:
  (**(code **)(local_40 + 8))(&local_40);
  func_0010E3C4(puVar7,local_3c,uVar10);
  *(undefined1 *)((int)puVar7 + uVar10) = 0;
  local_524 = (uint *)s_World__00447358;
  local_528 = iVar3;
  func_00688E10(aiStack_304,&local_528);
  func_00689928(aiStack_304,&local_51c,0xffffffff);
  piVar4 = DAT_00447360;
  local_48 = func_001E0B94(*DAT_00447360,aiStack_304,-1);
  piVar5 = DAT_00447364;
  if (local_48 != (int *)0x0) {
    local_50 = local_518;
    local_44 = 0;
    local_5a = 0xc;
    puVar9 = func_00504D48(*DAT_00447364,(int)&local_90);
    *(undefined4 **)(param_1 + 0x234) = puVar9;
    local_528 = iVar3;
    local_524 = (uint *)s_World__00447358;
    func_00688E10(aiStack_1f8,&local_528);
    func_00689928(aiStack_1f8,&iStack_410,0xffffffff);
    local_98 = func_001E0B94(*piVar4,aiStack_1f8,-1);
    if (local_98 != (int *)0x0) {
      local_94 = 0;
      local_a0 = local_40c;
      local_5a = 0xc;
      puVar9 = func_00504D48(*piVar5,(int)&local_e0);
      *(undefined4 **)(param_1 + 0x238) = puVar9;
    }
  }
  return;
}


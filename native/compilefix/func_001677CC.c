/* USA 001677CC (EU 001677D0): converted Ghidra text (build/decomp, round-3 stage 2) with two fixes.
 * Layout resource path building ("<name>.bflyt", "_Layout"): two sead::SafeString virtual calls
 * (vtable +8, assureTermination) lost their `this` (Ghidra `(**(code **)(local_X + 8))()`): the ARM
 * passes the string object on the stack: sp+8 = &local_148 (EU 00167B3C `mov r0, r8`, r8 = sp+8)
 * and sp+0x60 = &local_f0 (EU 00167C94 `ldm r0, {r1, r9}`: vtable local_f0 = local_94, string
 * local_ec). Without them the call ran on garbage and the attract demo's layout load crashed in
 * 00691BD0 (boot stop 91). CLASS 1 (lost `this`). Confidence: high. */
#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_001E1EDC(int param_1,int *param_2);
extern int func_003FD738(undefined4 *param_1,int param_2,int param_3);
extern int func_00404F24(undefined4 *param_1,undefined4 *param_2);
extern uint *DAT_00167ad4;
extern int DAT_00167ad8;
extern int *DAT_00167adc;
extern undefined4 DAT_00167aec;
extern undefined4 DAT_00167af0;
extern uint *DAT_00167af4;
extern undefined4 DAT_00167b00;
extern int DAT_00167b04;
extern int DAT_00167b08;
extern undefined1 DAT_00167b0c;
extern int *DAT_00167df8;
extern int *DAT_00167e04;
extern char s_Localize_00167ae0[];
extern char s_World_00167af8[];
extern char s__Layout_00167dfc[];
extern char s_cf_00167dfc[];

// USA 001677CC <- EU 001677D0 (Ghidra, non-matching)
// GLOBAL DAT_00167ad4 uint *
// GLOBAL DAT_00167ad8 int
// GLOBAL DAT_00167adc int *
// GLOBAL DAT_00167aec undefined4
// GLOBAL DAT_00167af0 undefined4
// GLOBAL DAT_00167af4 uint *
// GLOBAL DAT_00167b00 undefined4
// GLOBAL DAT_00167b04 int
// GLOBAL DAT_00167b08 int
// GLOBAL DAT_00167b0c undefined1
// GLOBAL DAT_00167df8 int *
// GLOBAL DAT_00167e04 int *
// GLOBAL s_cf_00167dfc string
// GLOBAL s_Localize_00167ae0 string
// GLOBAL s_World_00167af8 string

void func_001677CC(undefined4 param_1,int *param_2)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  _Alignas(8) unsigned char albw_frame[0x150];
  #define local_148 (*(int *)(albw_frame + 0x8))
  #define local_144 (*(uint * *)(albw_frame + 0xc))
  #define local_140 (*(int *)(albw_frame + 0x10))
  #define local_13c ((uint *)(albw_frame + 0x14))
  #define uStack_fd (*(undefined1 *)(albw_frame + 0x53))
  #define local_f8 (*(int *)(albw_frame + 0x58))
  #define local_f4 (*(uint * *)(albw_frame + 0x5c))
  #define local_f0 (*(int *)(albw_frame + 0x60))
  #define local_ec (*(uint * *)(albw_frame + 0x64))
  #define local_e8 (*(int *)(albw_frame + 0x68))
  #define local_e4 ((uint *)(albw_frame + 0x6c))
  #define uStack_a5 (*(undefined1 *)(albw_frame + 0xab))
  #define local_a0 (*(int *)(albw_frame + 0xb0))
  #define local_9c (*(int *)(albw_frame + 0xb4))
  #define local_98 (*(int *)(albw_frame + 0xb8))
  #define local_94 (*(int *)(albw_frame + 0xbc))
  #define iStack_8c (*(int *)(albw_frame + 0xc4))
  #define local_88 (*(uint * *)(albw_frame + 0xc8))
  #define uStack_84 (*(undefined4 *)(albw_frame + 0xcc))
  #define local_80 (*(undefined4 *)(albw_frame + 0xd0))
  #define local_7c (*(undefined4 *)(albw_frame + 0xd4))
  #define local_78 (*(undefined4 *)(albw_frame + 0xd8))
  #define local_74 (*(undefined4 *)(albw_frame + 0xdc))
  #define local_70 (*(undefined4 *)(albw_frame + 0xe0))
  #define local_6c (*(undefined4 *)(albw_frame + 0xe4))
  #define local_68 (*(undefined4 *)(albw_frame + 0xe8))
  #define local_64 (*(undefined4 *)(albw_frame + 0xec))
  #define local_60 (*(int *)(albw_frame + 0xf0))
  #define local_5c (*(uint * *)(albw_frame + 0xf4))
  #define local_58 (*(undefined1 *)(albw_frame + 0xf8))
  #define local_57 (*(undefined1 *)(albw_frame + 0xf9))
  #define local_56 (*(undefined1 *)(albw_frame + 0xfa))
  #define local_55 (*(undefined1 *)(albw_frame + 0xfb))
  #define local_54 (*(undefined1 *)(albw_frame + 0xfc))
  #define local_50 (*(uint * *)(albw_frame + 0x100))
  #define local_48 (*(int *)(albw_frame + 0x108))
  #define local_44 (*(int * *)(albw_frame + 0x10c))
  #define local_40 (*(int *)(albw_frame + 0x110))
  #define local_3c (*(uint * *)(albw_frame + 0x114))
  #define local_38 (*(undefined4 *)(albw_frame + 0x118))
  #define local_34 (*(undefined2 *)(albw_frame + 0x11c))
  #define local_32 (*(undefined2 *)(albw_frame + 0x11e))
  #define local_2c (*(undefined2 *)(albw_frame + 0x124))
  #define local_2a (*(undefined2 *)(albw_frame + 0x126))
  #define local_28 (*(undefined4 *)(albw_frame + 0x128))
  iVar7 = DAT_00167ad8;
  if (((*DAT_00167ad4 & 1) == 0) &&
     (iVar3 = func_00100174((int *)DAT_00167ad4), piVar1 = DAT_00167adc, iVar3 != 0)) {
    DAT_00167adc[1] = (int)s_Localize_00167ae0;
    *piVar1 = iVar7;
  }
  piVar1 = DAT_00167adc;
  local_9c = (int)param_2 + 0x99;
  local_a0 = iVar7;
  (**(code **)(*DAT_00167adc + 8))(DAT_00167adc);
  (**(code **)(*piVar1 + 8))(piVar1);
  iVar3 = piVar1[1];
  (**(code **)(local_a0 + 8))(&local_a0);
  local_f4 = DAT_00167af4;
  bVar8 = true;
  if (iVar3 != local_9c) {
    iVar3 = 0;
    do {
      if (*(char *)(piVar1[1] + iVar3) != *(char *)(local_9c + iVar3)) break;
      if (*(char *)(piVar1[1] + iVar3) == '\0') goto LAB_001678b4;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x40001);
    bVar8 = false;
  }
LAB_001678b4:
  if (bVar8) {
    local_44 = param_2 + 0x20;
    local_48 = iVar7;
    iStack_8c = iVar7;
    local_88 = DAT_00167af4;
    uStack_84 = 0;
    local_7c = 0x20;
    local_80 = 0;
    local_70 = 0;
    local_6c = 0;
    local_5c = (uint *)s_World_00167af8;
    local_58 = 7;
    local_57 = 4;
    local_55 = 1;
    local_56 = 0xc;
    local_74 = 0;
    local_68 = 0;
    local_64 = 0;
    local_60 = iVar7;
    local_54 = 1;
    local_78 = 0x80;
    (**(code **)(iVar7 + 8))(&local_48);
    iVar3 = 0;
    do {
      if (*(char *)((int)local_44 + iVar3) == '\0') {
        bVar9 = SBORROW4(iVar3,0x40000);
        iVar4 = iVar3 + -0x40000;
        bVar8 = iVar3 == 0x40000;
        if (iVar3 < 0x40001) {
          bVar9 = SBORROW4(2,iVar3);
          iVar4 = 2 - iVar3;
          bVar8 = iVar3 == 2;
        }
        if (bVar8 || iVar4 < 0 != bVar9) {
          local_f4 = (uint *)((int)local_44 + 2);
        }
        break;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x40001);
    local_140 = 0x40;
    local_f8 = iVar7;
    uStack_fd = 0;
    local_98 = DAT_00167b04;
    local_148 = DAT_00167b04;
    local_144 = local_13c;
    (**(code **)(iVar7 + 8))(&local_f8);
    uVar6 = 0;
    do {
      if (*(char *)((int)local_f4 + uVar6) == '\0') {
        if ((int)uVar6 < 0x40001) goto LAB_001679f4;
        break;
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < 0x40001);
    uVar6 = 0;
LAB_001679f4:
    if (local_140 <= (int)uVar6) {
      uVar6 = local_140 - 1;
    }
    (**(code **)(local_f8 + 8))(&local_f8);
    func_0010E3C4(local_13c,local_f4,uVar6);
    *(undefined1 *)((int)local_13c + uVar6) = 0;
    iVar3 = 2;
    local_94 = DAT_00167b08;
    local_148 = DAT_00167b08;
    (**(code **)(DAT_00167b08 + 8))(&local_148);
    puVar2 = local_144;
    iVar4 = 0;
    do {
      if (*(char *)((int)local_144 + iVar4) == '\0') {
        if (iVar4 < 0x40001) {
          if (1 < iVar4) goto LAB_00167a84;
          goto LAB_00167a80;
        }
        break;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x40001);
    iVar4 = 0;
LAB_00167a80:
    iVar3 = iVar4;
LAB_00167a84:
    *(undefined1 *)((int)local_144 + (iVar4 - iVar3)) = 0;
    local_f4 = (uint *)&DAT_00167b0c;
    local_f8 = iVar7;
    (**(code **)(local_148 + 8))(&local_148);
    iVar3 = 0;
    do {
      if (*(char *)((int)local_144 + iVar3) == '\0') {
        if (iVar3 < 0x40001) goto LAB_00167b24;
        break;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x40001);
    iVar3 = 0;
LAB_00167b24:
    iVar4 = iVar3;
    if (iVar3 < 0) {
      iVar4 = 0;
    }
    (**(code **)(local_f8 + 8))(&local_f8);
    uVar6 = 0;
    do {
      if (*(char *)((int)local_f4 + uVar6) == '\0') {
        if ((int)uVar6 < 0x40001) goto LAB_00167b74;
        break;
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < 0x40001);
    uVar6 = 0;
LAB_00167b74:
    if (local_140 - iVar4 <= (int)uVar6) {
      uVar6 = (local_140 - iVar4) - 1;
    }
    if (0 < (int)uVar6) {
      local_50 = (uint *)((int)puVar2 + iVar4);
      (**(code **)(local_f8 + 8))(&local_f8);
      func_0010E3C4(local_50,local_f4,uVar6);
      if (iVar3 < (int)(iVar4 + uVar6)) {
        *(undefined1 *)((int)puVar2 + iVar4 + uVar6) = 0;
      }
    }
    local_88 = local_144;
    local_f8 = iVar7;
    local_f4 = *(uint **)(*DAT_00167df8 + 100);
    local_e8 = 0x40;
    uStack_a5 = 0;
    local_f0 = local_98;
    local_ec = local_e4;
    (**(code **)(iVar7 + 8))(&local_f8);
    uVar6 = 0;
    do {
      if (*(char *)((int)local_f4 + uVar6) == '\0') {
        if ((int)uVar6 < 0x40001) goto LAB_00167c4c;
        break;
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < 0x40001);
    uVar6 = 0;
LAB_00167c4c:
    if (local_e8 <= (int)uVar6) {
      uVar6 = local_e8 - 1;
    }
    (**(code **)(local_f8 + 8))(&local_f8);
    func_0010E3C4(local_e4,local_f4,uVar6);
    puVar2 = local_ec;
    *(undefined1 *)((int)local_e4 + uVar6) = 0;
    local_40 = iVar7;
    local_f0 = local_94;
    local_3c = (uint *)s__Layout_00167dfc;
    (**(code **)(local_94 + 8))(&local_f0);
    iVar7 = 0;
    do {
      if (*(char *)((int)local_ec + iVar7) == '\0') {
        if (iVar7 < 0x40001) goto LAB_00167cd8;
        break;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x40001);
    iVar7 = 0;
LAB_00167cd8:
    iVar3 = iVar7;
    if (iVar7 < 0) {
      iVar3 = 0;
    }
    (**(code **)(local_40 + 8))(&local_40);
    uVar6 = 0;
    do {
      if (*(char *)((int)local_3c + uVar6) == '\0') {
        if ((int)uVar6 < 0x40001) goto LAB_00167d28;
        break;
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < 0x40001);
    uVar6 = 0;
LAB_00167d28:
    if (local_e8 - iVar3 <= (int)uVar6) {
      uVar6 = (local_e8 - iVar3) - 1;
    }
    if (0 < (int)uVar6) {
      (**(code **)(local_40 + 8))(&local_40);
      func_0010E3C4((uint *)((int)puVar2 + iVar3),local_3c,uVar6);
      if (iVar7 < (int)(iVar3 + uVar6)) {
        *(undefined1 *)((int)puVar2 + iVar3 + uVar6) = 0;
      }
    }
    local_5c = local_ec;
    puVar5 = func_001E1EDC(*DAT_00167e04,&iStack_8c);
    if (puVar5 != (undefined4 *)0x0) {
      local_38 = 0;
      local_34 = 0;
      local_32 = 0;
      local_2c = 0;
      local_2a = 0;
      local_28 = 0;
      func_003FD738(&local_38,puVar5[5],puVar5[6]);
      iVar7 = (**(code **)(*param_2 + 0x28))(param_2,0);
      func_00404F24(*(undefined4 **)(iVar7 + 0x7c),&local_38);
      *(byte *)(iVar7 + 0x9e) = *(byte *)(iVar7 + 0x9e) & 0xfb;
    }
  }
  return;
}


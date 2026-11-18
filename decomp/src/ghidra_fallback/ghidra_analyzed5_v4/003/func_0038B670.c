#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0026FC20(int param_1,int param_2,int *param_3,undefined4 *param_4);
extern int func_0028C8EC(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern undefined4 func_0028D580(uint *param_1,int param_2,undefined1 param_3,undefined1 param_4,uint param_5);
extern int func_002902CC(int param_1,undefined1 param_2);
extern int func_0039F100(int param_1);
extern int func_0039F190(int param_1);
extern int func_0039F3B0(int param_1);
extern int func_0039F480(int param_1);
extern int func_0039F5B0(int param_1);
extern int func_0039F640(int param_1);
extern int func_0039F6D0(int param_1);
extern int func_0039F7A0(int param_1);
extern int func_0039F870(int param_1);
extern int func_003B5D38(int param_1);
extern int func_004EA104(int param_1,int *param_2,int param_3);
extern int func_004EAF8C(int param_1,int *param_2,int param_3);
extern int func_00537C14(int param_1,int param_2);
extern int func_0053ED74(int param_1);
extern int func_0054C998(int param_1,int param_2);
extern int func_00564A78(int param_1,int *param_2);
extern int func_00587F74(int param_1,int *param_2,int param_3);
extern uint *DAT_0038ba68;
extern undefined4 *DAT_0038ba6c;
extern undefined4 DAT_0038ba70;
extern int *DAT_0038ba74;
extern uint DAT_0038ba94;
extern int *DAT_0038ba98;
extern undefined DAT_0038bab4;
extern uint *DAT_0038badc;
extern undefined4 *DAT_0038bae0;
extern uint *DAT_0038be84;
extern undefined4 *DAT_0038be88;
extern undefined4 DAT_0038bebc;
extern char s_SE_LightArrow_SET_0038befc[];
extern char s_SE_PL_Glasses_ON_0038be70[];
extern char s_SE_PL_Kandelaar_SWING_0038ba9c[];
extern char s_SE_PL_Kandelaar_SWING_Lv2_0038ba78[];
extern char s_SE_PL_Net_SWING_0038bacc[];
extern char s_SE_PL_Net_SWING_Lv2_0038bab8[];
extern char s_SE_PL_USE_FRUIT_DAHLIAN_0038be8c[];
extern char s_SE_PV_NOT_MOVE_0038bec0[];
extern char s_SE_PV_USE_FRUIT_DAHLIAN_0038bea4[];
extern char s_SE_S_WARP_BELL_0038be4c[];
extern char s_SE_S_WARP_OPEN_MAP_0038be5c[];

// USA 0038B670 <- EU 0038B64C (Ghidra, non-matching)
// GLOBAL DAT_0038ba68 uint *
// GLOBAL DAT_0038ba6c undefined4 *
// GLOBAL DAT_0038ba70 undefined4
// GLOBAL DAT_0038ba74 int *
// GLOBAL DAT_0038ba94 uint
// GLOBAL DAT_0038ba98 int *
// GLOBAL DAT_0038bab4 undefined
// GLOBAL DAT_0038badc uint *
// GLOBAL DAT_0038bae0 undefined4 *
// GLOBAL DAT_0038be84 uint *
// GLOBAL DAT_0038be88 undefined4 *
// GLOBAL DAT_0038bebc undefined4
// GLOBAL s_SE_LightArrow_SET_0038befc string
// GLOBAL s_SE_PL_Glasses_ON_0038be70 string
// GLOBAL s_SE_PL_Kandelaar_SWING_0038ba9c string
// GLOBAL s_SE_PL_Kandelaar_SWING_Lv2_0038ba78 string
// GLOBAL s_SE_PL_Net_SWING_0038bacc string
// GLOBAL s_SE_PL_Net_SWING_Lv2_0038bab8 string
// GLOBAL s_SE_PL_USE_FRUIT_DAHLIAN_0038be8c string
// GLOBAL s_SE_PV_NOT_MOVE_0038bec0 string
// GLOBAL s_SE_PV_USE_FRUIT_DAHLIAN_0038bea4 string
// GLOBAL s_SE_S_WARP_BELL_0038be4c string
// GLOBAL s_SE_S_WARP_OPEN_MAP_0038be5c string

/* WARNING: Variable defined which should be unmapped: objStack_30 */

undefined4 func_0038B670(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define objStack_30 ((uint *)(albw_frame + 0x0))
  #define local_28 (*(uint *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  #define local_20 (*(uint *)(albw_frame + 0x10))
  #define local_1c (*(char * *)(albw_frame + 0x14))
  uVar4 = DAT_0038bebc;
  uVar1 = DAT_0038ba94;
  switch(*(undefined2 *)(param_2 + 2)) {
  case 0x9c:
    puVar5 = *(undefined4 **)(param_1 + 0x14c);
    if (((*DAT_0038ba68 & 1) == 0) && (iVar6 = func_00100174((int *)DAT_0038ba68), iVar6 != 0)) {
      *DAT_0038ba6c = DAT_0038ba70;
    }
    if ((puVar5 == (undefined4 *)0x0) ||
       (iVar6 = (**(code **)*puVar5)(puVar5,DAT_0038ba6c), iVar6 == 0)) {
      puVar5 = (undefined4 *)0x0;
    }
    func_003B5D38((int)puVar5);
    *(undefined1 *)(puVar5 + 0xb) = 1;
    iVar6 = func_0053ED74(*(int *)(param_1 + 0x4c));
    objStack_30[0] = *(uint *)(iVar6 + 0xc);
    objStack_30[1] = *(uint *)(iVar6 + 0x1c);
    local_28 = *(uint *)(iVar6 + 0x2c);
    local_24 = *(char **)(*(int *)(param_1 + 0x28) + 0x2cc);
    func_0026FC20(*(int *)(*DAT_0038ba74 + 0xf9c),9,(int *)&local_24,objStack_30);
    iVar6 = func_0054C998(*(int *)(param_1 + 0x48),**(int **)(param_1 + 0x3c));
    *(int *)(param_1 + 0x58) = iVar6;
    if (*(uint *)(*(int *)(param_1 + 0x28) + 0x464) < 3) {
      local_1c = s_SE_PL_Kandelaar_SWING_0038ba9c;
      local_20 = DAT_0038ba94;
      func_004EA104(*DAT_0038ba98,(int *)&local_20,0);
    }
    else {
      local_1c = s_SE_PL_Kandelaar_SWING_Lv2_0038ba78;
      local_20 = DAT_0038ba94;
      func_004EA104(*DAT_0038ba98,(int *)&local_20,0);
    }
    break;
  case 0x9d:
    objStack_30[1] = (uint)&DAT_0038bab4;
    objStack_30[0] = DAT_0038ba94;
    uVar3 = func_00564A78(*(int *)(*(int *)(param_1 + 0x150) + 4),(int *)objStack_30);
    *(uint *)(param_1 + 0x160) = uVar3;
    *(undefined1 *)(param_1 + 0x141) = 0;
    *(undefined1 *)(param_1 + 0x143) = 1;
    local_28 = uVar1;
    if (*(uint *)(*(int *)(param_1 + 0x28) + 0x468) < 3) {
      local_24 = s_SE_PL_Net_SWING_0038bacc;
      func_004EA104(*DAT_0038ba98,(int *)&local_28,0);
    }
    else {
      local_24 = s_SE_PL_Net_SWING_Lv2_0038bab8;
      func_004EA104(*DAT_0038ba98,(int *)&local_28,0);
    }
    *(undefined1 *)(*(int *)(param_1 + 0x2c) + 199) = 0;
    return 0;
  case 0x9e:
    puVar5 = *(undefined4 **)(param_1 + 0x154);
    if (((*DAT_0038badc & 1) == 0) && (iVar6 = func_00100174((int *)DAT_0038badc), iVar6 != 0)) {
      *DAT_0038bae0 = DAT_0038ba70;
    }
    if ((puVar5 == (undefined4 *)0x0) ||
       (iVar6 = (**(code **)*puVar5)(puVar5,DAT_0038bae0), iVar6 == 0)) {
      puVar5 = (undefined4 *)0x0;
    }
    iVar6 = *(int *)(param_2 + 8);
    *(int *)(param_1 + 0x164) = iVar6;
    uVar4 = func_00537C14(*(int *)(param_1 + 0x28) + 0x40c,iVar6 + 0x12);
    *(undefined4 *)(param_1 + 0x168) = uVar4;
    *(undefined1 *)(param_1 + 0x147) = 0;
    switch(uVar4) {
    case 0:
    case 0xb:
      func_0039F5B0((int)puVar5);
      break;
    case 1:
      func_0039F190((int)puVar5);
      break;
    case 2:
      func_0039F3B0((int)puVar5);
      break;
    case 3:
      func_0039F7A0((int)puVar5);
      *(undefined1 *)(param_1 + 0x145) = 1;
      break;
    case 4:
      func_0039F870((int)puVar5);
      break;
    case 8:
      func_0039F6D0((int)puVar5);
      break;
    case 0xc:
    case 0xd:
      func_0039F480((int)puVar5);
    }
    break;
  case 0x9f:
    *(undefined4 *)(param_1 + 0x164) = *(undefined4 *)(param_2 + 8);
    puVar5 = *(undefined4 **)(param_1 + 0x154);
    if (((*DAT_0038badc & 1) == 0) && (iVar6 = func_00100174((int *)DAT_0038badc), iVar6 != 0)) {
      *DAT_0038bae0 = DAT_0038ba70;
    }
    if ((puVar5 == (undefined4 *)0x0) ||
       (iVar6 = (**(code **)*puVar5)(puVar5,DAT_0038bae0), iVar6 == 0)) {
      puVar5 = (undefined4 *)0x0;
    }
    func_0039F640((int)puVar5);
    break;
  case 0xa0:
    *(undefined4 *)(param_1 + 0x164) = *(undefined4 *)(param_2 + 8);
    puVar5 = *(undefined4 **)(param_1 + 0x154);
    if (((*DAT_0038badc & 1) == 0) && (iVar6 = func_00100174((int *)DAT_0038badc), iVar6 != 0)) {
      *DAT_0038bae0 = DAT_0038ba70;
    }
    if ((puVar5 == (undefined4 *)0x0) ||
       (iVar6 = (**(code **)*puVar5)(puVar5,DAT_0038bae0), iVar6 == 0)) {
      puVar5 = (undefined4 *)0x0;
    }
    func_0039F100((int)puVar5);
    break;
  case 0xa1:
    objStack_30[1] = (uint)s_SE_S_WARP_BELL_0038be4c;
    objStack_30[0] = DAT_0038ba94;
    func_00587F74(*DAT_0038ba98,(int *)objStack_30,0);
    goto LAB_0038bba0;
  case 0xa2:
    *(undefined1 *)(param_1 + 0x146) = 1;
LAB_0038bba0:
    *(undefined1 *)(param_1 + 0x147) = 0;
    return 0;
  case 0xa3:
    *(undefined1 *)(*(int *)(param_1 + 0x2c) + 0xbe) = 1;
    objStack_30[1] = (uint)s_SE_S_WARP_OPEN_MAP_0038be5c;
    objStack_30[0] = uVar1;
    return func_00587F74(*DAT_0038ba98,(int *)objStack_30,0);
  case 0xa4:
    iVar6 = func_0054C998(*(int *)(param_1 + 0x48),**(int **)(param_1 + 0x3c));
    *(int *)(param_1 + 0x58) = iVar6;
    return 0;
  case 0xa5:
    *(undefined1 *)(*(int *)(param_1 + 0x2c) + 0xc0) = 1;
    objStack_30[1] = (uint)s_SE_PL_Glasses_ON_0038be70;
    objStack_30[0] = uVar1;
    return func_004EA104(*DAT_0038ba98,(int *)objStack_30,0);
  case 0xa6:
    *(undefined1 *)(param_1 + 0x142) = 0;
    puVar5 = *(undefined4 **)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x180) = *puVar5;
    *(undefined4 *)(param_1 + 0x184) = puVar5[1];
    *(undefined4 *)(param_1 + 0x188) = puVar5[2];
    *(undefined1 *)(*(int *)(param_1 + 0x2c) + 199) = 0;
    *(undefined1 *)(param_1 + 0x149) = 1;
    *(undefined1 *)(param_1 + 0x147) = 0;
    return 0;
  case 0xa7:
    puVar5 = *(undefined4 **)(param_1 + 0x15c);
    if (((*DAT_0038be84 & 1) == 0) && (iVar6 = func_00100174((int *)DAT_0038be84), iVar6 != 0)) {
      *DAT_0038be88 = DAT_0038ba70;
    }
    if ((puVar5 == (undefined4 *)0x0) ||
       (iVar6 = (**(code **)*puVar5)(puVar5,DAT_0038be88), iVar6 == 0)) {
      puVar5 = (undefined4 *)0x0;
    }
    *(undefined1 *)(puVar5 + 7) = 0;
    piVar2 = DAT_0038ba98;
    uVar1 = DAT_0038ba94;
    objStack_30[1] = (uint)s_SE_PL_USE_FRUIT_DAHLIAN_0038be8c;
    objStack_30[0] = DAT_0038ba94;
    func_004EA104(*DAT_0038ba98,(int *)objStack_30,0);
    objStack_30[1] = (uint)s_SE_PV_USE_FRUIT_DAHLIAN_0038bea4;
    objStack_30[0] = uVar1;
    func_004EAF8C(*piVar2,(int *)objStack_30,0);
    *(undefined1 *)(*(int *)(param_1 + 0x2c) + 199) = 0;
    return 0;
  case 0xa8:
    iVar6 = *(int *)(param_2 + 8);
    *(int *)(param_1 + 0x164) = iVar6;
    iVar6 = func_00537C14(*(int *)(param_1 + 0x28) + 0x40c,iVar6 + 0x12);
    *(int *)(param_1 + 0x168) = iVar6;
    return func_002902CC(*(int *)(param_1 + 0x2c),iVar6 == 9);
  case 0xa9:
    puVar5 = *(undefined4 **)(param_1 + 0x34);
    *puVar5 = DAT_0038bebc;
    puVar5[1] = uVar4;
    puVar5[2] = uVar4;
    iVar6 = *(int *)(param_2 + 8);
    *(int *)(param_1 + 0x164) = iVar6;
    iVar6 = func_00537C14(*(int *)(param_1 + 0x28) + 0x40c,iVar6 + 0x12);
    *(int *)(param_1 + 0x168) = iVar6;
    *(undefined1 *)(param_1 + 0x147) = 0;
    *(undefined1 *)(param_1 + 0x144) = 1;
    *(undefined1 *)(param_1 + 0x148) = 0;
    if (iVar6 != 0xd) {
      return 0;
    }
    iVar6 = *(int *)(param_1 + 0x4c);
    objStack_30[0] = 6;
    func_0028D580((uint *)(iVar6 + 0x3c),0,1,1,6);
    objStack_30[0] = 6;
    return func_0028D580((uint *)(iVar6 + 0x5c),0,1,1,6);
  case 0xaa:
    *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(param_2 + 0xc);
    func_0028C8EC(*(int *)(param_1 + 0x4c),2,param_3,param_4);
    objStack_30[1] = (uint)s_SE_PV_NOT_MOVE_0038bec0;
    objStack_30[0] = DAT_0038ba94;
    func_004EAF8C(*DAT_0038ba98,(int *)objStack_30,0);
    *(undefined4 *)(param_1 + 0x17c) = *(undefined4 *)(*(int *)(param_1 + 0x30) + 4);
    return 0;
  case 0xab:
    objStack_30[1] = (uint)s_SE_LightArrow_SET_0038befc;
    objStack_30[0] = DAT_0038ba94;
    return func_004EA104(*DAT_0038ba98,(int *)objStack_30,0);
  default:
    return 0;
  }
  *(undefined1 *)(*(int *)(param_1 + 0x2c) + 199) = 0;
  return 0;
}


#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005eea10;
extern undefined4 *DAT_005eea14;
extern undefined DAT_005eea18;
extern undefined4 DAT_005eea1c;
extern undefined4 DAT_005eeb88;
extern undefined4 DAT_005eeb8c;
extern char s_cmn_action_check_005eeabc[];
extern char s_cmn_action_enter_005eea54[];
extern char s_cmn_action_get_005eeb50[];
extern char s_cmn_action_getpouch_005eeb74[];
extern char s_cmn_action_grasp_005eead0[];
extern char s_cmn_action_hold_005eea30[];
extern char s_cmn_action_keepwait_005eeb3c[];
extern char s_cmn_action_leave_005eea68[];
extern char s_cmn_action_look_005eeaac[];
extern char s_cmn_action_open_005eea20[];
extern char s_cmn_action_pullgrasp_005eeb0c[];
extern char s_cmn_action_pullup_005eeaf8[];
extern char s_cmn_action_read_005eea9c[];
extern char s_cmn_action_swim_005eea7c[];
extern char s_cmn_action_swing_005eeb60[];
extern char s_cmn_action_takealong_005eeb24[];
extern char s_cmn_action_talk_005eea8c[];
extern char s_cmn_action_throw_005eea40[];
extern char s_cmn_action_touch_005eeae4[];

// USA 005EE8B4 <- EU 005EE88C (Ghidra, non-matching)
// GLOBAL DAT_005eea10 undefined4 *
// GLOBAL DAT_005eea14 undefined4 *
// GLOBAL DAT_005eea18 undefined
// GLOBAL DAT_005eea1c undefined4
// GLOBAL DAT_005eeb88 undefined4
// GLOBAL DAT_005eeb8c undefined4
// GLOBAL s_cmn_action_check_005eeabc string
// GLOBAL s_cmn_action_enter_005eea54 string
// GLOBAL s_cmn_action_get_005eeb50 string
// GLOBAL s_cmn_action_getpouch_005eeb74 string
// GLOBAL s_cmn_action_grasp_005eead0 string
// GLOBAL s_cmn_action_hold_005eea30 string
// GLOBAL s_cmn_action_keepwait_005eeb3c string
// GLOBAL s_cmn_action_leave_005eea68 string
// GLOBAL s_cmn_action_look_005eeaac string
// GLOBAL s_cmn_action_open_005eea20 string
// GLOBAL s_cmn_action_pullgrasp_005eeb0c string
// GLOBAL s_cmn_action_pullup_005eeaf8 string
// GLOBAL s_cmn_action_read_005eea9c string
// GLOBAL s_cmn_action_swim_005eea7c string
// GLOBAL s_cmn_action_swing_005eeb60 string
// GLOBAL s_cmn_action_takealong_005eeb24 string
// GLOBAL s_cmn_action_talk_005eea8c string
// GLOBAL s_cmn_action_throw_005eea40 string
// GLOBAL s_cmn_action_touch_005eeae4 string

undefined4 func_005EE8B4(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005eea10;
  *DAT_005eea10 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005eea14;
  *DAT_005eea14 = 0;
  puVar1[1] = 0;
  uVar2 = DAT_005eea1c;
  puVar1[2] = DAT_005eea1c;
  puVar1[3] = &DAT_005eea18;
  puVar1[5] = uVar2;
  puVar1[6] = s_cmn_action_open_005eea20;
  puVar1[8] = uVar2;
  puVar1[9] = s_cmn_action_open_005eea20;
  puVar1[0xb] = uVar2;
  puVar1[0xc] = s_cmn_action_open_005eea20;
  puVar1[0xe] = uVar2;
  puVar1[0xf] = s_cmn_action_hold_005eea30;
  puVar1[0x11] = uVar2;
  puVar1[0x12] = s_cmn_action_hold_005eea30;
  puVar1[0x14] = uVar2;
  puVar1[0x15] = s_cmn_action_hold_005eea30;
  puVar1[0x17] = uVar2;
  puVar1[0x18] = s_cmn_action_throw_005eea40;
  puVar1[0x1a] = uVar2;
  puVar1[0x1b] = s_cmn_action_enter_005eea54;
  puVar1[0x1d] = uVar2;
  puVar1[0x1e] = s_cmn_action_leave_005eea68;
  puVar1[0x20] = uVar2;
  puVar1[0x21] = s_cmn_action_swim_005eea7c;
  puVar1[0x23] = uVar2;
  puVar1[0x24] = s_cmn_action_talk_005eea8c;
  puVar1[0x26] = uVar2;
  puVar1[0x27] = s_cmn_action_read_005eea9c;
  puVar1[0x29] = uVar2;
  puVar1[0x2a] = s_cmn_action_look_005eeaac;
  puVar1[0x2c] = uVar2;
  puVar1[0x2d] = s_cmn_action_check_005eeabc;
  puVar1[0x2f] = uVar2;
  puVar1[0x30] = s_cmn_action_grasp_005eead0;
  puVar1[0x32] = uVar2;
  puVar1[0x33] = s_cmn_action_touch_005eeae4;
  puVar1[0x35] = uVar2;
  puVar1[0x36] = s_cmn_action_touch_005eeae4;
  puVar1[0x38] = uVar2;
  puVar1[0x39] = s_cmn_action_pullup_005eeaf8;
  puVar1[0x3b] = uVar2;
  puVar1[0x3c] = s_cmn_action_pullgrasp_005eeb0c;
  puVar1[0x3e] = uVar2;
  puVar1[0x3f] = s_cmn_action_hold_005eea30;
  puVar1[0x41] = uVar2;
  puVar1[0x42] = s_cmn_action_takealong_005eeb24;
  puVar1[0x44] = uVar2;
  puVar1[0x45] = s_cmn_action_takealong_005eeb24;
  puVar1[0x47] = uVar2;
  puVar1[0x48] = s_cmn_action_keepwait_005eeb3c;
  puVar1[0x4a] = uVar2;
  puVar1[0x4b] = s_cmn_action_get_005eeb50;
  puVar1[0x4d] = uVar2;
  puVar1[0x4e] = s_cmn_action_swing_005eeb60;
  puVar1[0x50] = uVar2;
  puVar1[0x51] = s_cmn_action_getpouch_005eeb74;
  puVar1[0x53] = uVar2;
  puVar1[0x54] = s_cmn_action_check_005eeabc;
  return func_005902C0(0);
}


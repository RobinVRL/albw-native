#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC6FC(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4, undefined4 param_5,undefined4 *param_6,undefined4 param_7);
extern int *DAT_005c3030;
extern int *DAT_005c3034;
extern undefined DAT_005c3038;
extern int DAT_005c3040;
extern undefined DAT_005c304c;
extern undefined DAT_005c3084;
extern undefined4 DAT_005c308c;
extern undefined4 DAT_005c3090;
extern undefined4 DAT_005c309c;
extern undefined4 *DAT_005c30a0;
extern undefined4 DAT_005c30a4;
extern undefined4 *DAT_005c30a8;
extern undefined DAT_005c30ac;
extern int DAT_005c30cc;
extern uint *DAT_005c30d0;
extern undefined4 DAT_005c30d4;
extern undefined4 *DAT_005c30d8;
extern undefined4 DAT_005c30dc;
extern char s_Bubble_005c3094[];
extern char s_EnemyIceBubble_005c30bc[];
extern char s_damage_005c307c[];
extern char s_escape_005c3054[];
extern char s_jitabata_005c3064[];
extern char s_piyopiyo_005c3070[];
extern char s_revival_005c305c[];
extern char s_tornado_005c3044[];

// USA 005C2EC8 <- EU 005C2EA0 (Ghidra, non-matching)
// GLOBAL DAT_005c3030 int *
// GLOBAL DAT_005c3034 int *
// GLOBAL DAT_005c3038 undefined
// GLOBAL DAT_005c3040 int
// GLOBAL DAT_005c304c undefined
// GLOBAL DAT_005c3084 undefined
// GLOBAL DAT_005c308c undefined4
// GLOBAL DAT_005c3090 undefined4
// GLOBAL DAT_005c309c undefined4
// GLOBAL DAT_005c30a0 undefined4 *
// GLOBAL DAT_005c30a4 undefined4
// GLOBAL DAT_005c30a8 undefined4 *
// GLOBAL DAT_005c30ac undefined
// GLOBAL DAT_005c30cc int
// GLOBAL DAT_005c30d0 uint *
// GLOBAL DAT_005c30d4 undefined4
// GLOBAL DAT_005c30d8 undefined4 *
// GLOBAL DAT_005c30dc undefined4
// GLOBAL s_Bubble_005c3094 string
// GLOBAL s_EnemyIceBubble_005c30bc string
// GLOBAL s_damage_005c307c string
// GLOBAL s_escape_005c3054 string
// GLOBAL s_jitabata_005c3064 string
// GLOBAL s_piyopiyo_005c3070 string
// GLOBAL s_revival_005c305c string
// GLOBAL s_tornado_005c3044 string

undefined8 func_005C2EC8(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(undefined1 *)(albw_frame + 0x8))
  #define local_27 (*(undefined1 *)(albw_frame + 0x9))
  #define local_26 (*(undefined1 *)(albw_frame + 0xa))
  #define local_25 (*(undefined1 *)(albw_frame + 0xb))
  #define local_24 (*(undefined1 *)(albw_frame + 0xc))
  #define local_20 (*(int *)(albw_frame + 0x10))
  #define local_1c (*(char * *)(albw_frame + 0x14))
  #define local_18 (*(int *)(albw_frame + 0x18))
  #define local_14 (*(undefined * *)(albw_frame + 0x1c))
  piVar1 = DAT_005c3030;
  DAT_005c3030[2] = -1;
  piVar1[3] = -1;
  iVar5 = DAT_005c3040;
  piVar1[4] = 0;
  piVar1[5] = 0;
  piVar2 = DAT_005c3034;
  DAT_005c3034[1] = (int)&DAT_005c3038;
  *piVar2 = iVar5;
  piVar2[3] = (int)s_tornado_005c3044;
  piVar2[2] = iVar5;
  piVar2[5] = (int)&DAT_005c304c;
  piVar2[4] = iVar5;
  piVar2[7] = (int)s_escape_005c3054;
  piVar2[6] = iVar5;
  piVar2[9] = (int)s_revival_005c305c;
  piVar2[8] = iVar5;
  piVar2[0xb] = (int)s_jitabata_005c3064;
  piVar2[10] = iVar5;
  piVar2[0xd] = (int)s_piyopiyo_005c3070;
  piVar2[0xc] = iVar5;
  piVar2[0xf] = (int)s_damage_005c307c;
  piVar2[0xe] = iVar5;
  piVar2[0x10] = iVar5;
  piVar2[0x11] = (int)&DAT_005c3084;
  piVar1[7] = (int)s_Bubble_005c3094;
  piVar1[6] = iVar5;
  local_28 = 0;
  local_27 = 0;
  local_26 = 0;
  local_24 = 0xff;
  local_25 = 0xff;
  func_004FC6FC(DAT_005c30a0,0,0,0,0,(undefined4 *)&local_28,0xb);
  puVar3 = DAT_005c30a8;
  puVar6 = DAT_005c30a8 + 3;
  DAT_005c30a8[1] = 5;
  puVar3[2] = puVar6;
  *puVar3 = 0;
  local_14 = &DAT_005c30ac;
  local_18 = iVar5;
  local_1c = s_EnemyIceBubble_005c30bc;
  local_20 = iVar5;
  iVar5 = *piVar1;
  if (*piVar1 == 0) {
    iVar5 = DAT_005c30cc;
  }
  uVar4 = func_0019B51C(DAT_005c30d8,DAT_005c30d4,*DAT_005c30d0,(int)&local_20,DAT_005c30a8,
                        &local_18,iVar5);
  return CONCAT44(DAT_005c30dc,uVar4);
}


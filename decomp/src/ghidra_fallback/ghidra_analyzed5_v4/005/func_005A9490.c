#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC6FC(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4, undefined4 param_5,undefined4 *param_6,undefined4 param_7);
extern int *DAT_005a95f8;
extern int *DAT_005a95fc;
extern undefined DAT_005a9600;
extern int DAT_005a9608;
extern undefined DAT_005a9614;
extern undefined DAT_005a964c;
extern undefined4 DAT_005a9654;
extern undefined4 DAT_005a9658;
extern undefined4 DAT_005a9664;
extern undefined4 *DAT_005a9668;
extern undefined4 DAT_005a966c;
extern undefined4 *DAT_005a9670;
extern undefined DAT_005a9674;
extern int DAT_005a9688;
extern uint *DAT_005a968c;
extern undefined4 DAT_005a9690;
extern undefined4 *DAT_005a9694;
extern undefined4 DAT_005a9698;
extern char s_Bubble_005a965c[];
extern char s_EnemyBubble_005a967c[];
extern char s_damage_005a9644[];
extern char s_escape_005a961c[];
extern char s_jitabata_005a962c[];
extern char s_piyopiyo_005a9638[];
extern char s_revival_005a9624[];
extern char s_tornado_005a960c[];

// USA 005A9490 <- EU 005A9468 (Ghidra, non-matching)
// GLOBAL DAT_005a95f8 int *
// GLOBAL DAT_005a95fc int *
// GLOBAL DAT_005a9600 undefined
// GLOBAL DAT_005a9608 int
// GLOBAL DAT_005a9614 undefined
// GLOBAL DAT_005a964c undefined
// GLOBAL DAT_005a9654 undefined4
// GLOBAL DAT_005a9658 undefined4
// GLOBAL DAT_005a9664 undefined4
// GLOBAL DAT_005a9668 undefined4 *
// GLOBAL DAT_005a966c undefined4
// GLOBAL DAT_005a9670 undefined4 *
// GLOBAL DAT_005a9674 undefined
// GLOBAL DAT_005a9688 int
// GLOBAL DAT_005a968c uint *
// GLOBAL DAT_005a9690 undefined4
// GLOBAL DAT_005a9694 undefined4 *
// GLOBAL DAT_005a9698 undefined4
// GLOBAL s_Bubble_005a965c string
// GLOBAL s_EnemyBubble_005a967c string
// GLOBAL s_damage_005a9644 string
// GLOBAL s_escape_005a961c string
// GLOBAL s_jitabata_005a962c string
// GLOBAL s_piyopiyo_005a9638 string
// GLOBAL s_revival_005a9624 string
// GLOBAL s_tornado_005a960c string

undefined8 func_005A9490(void)

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
  piVar1 = DAT_005a95f8;
  DAT_005a95f8[2] = -1;
  piVar1[3] = -1;
  iVar5 = DAT_005a9608;
  piVar1[4] = 0;
  piVar1[5] = 0;
  piVar2 = DAT_005a95fc;
  DAT_005a95fc[1] = (int)&DAT_005a9600;
  *piVar2 = iVar5;
  piVar2[3] = (int)s_tornado_005a960c;
  piVar2[2] = iVar5;
  piVar2[5] = (int)&DAT_005a9614;
  piVar2[4] = iVar5;
  piVar2[7] = (int)s_escape_005a961c;
  piVar2[6] = iVar5;
  piVar2[9] = (int)s_revival_005a9624;
  piVar2[8] = iVar5;
  piVar2[0xb] = (int)s_jitabata_005a962c;
  piVar2[10] = iVar5;
  piVar2[0xd] = (int)s_piyopiyo_005a9638;
  piVar2[0xc] = iVar5;
  piVar2[0xf] = (int)s_damage_005a9644;
  piVar2[0xe] = iVar5;
  piVar2[0x10] = iVar5;
  piVar2[0x11] = (int)&DAT_005a964c;
  piVar1[7] = (int)s_Bubble_005a965c;
  piVar1[6] = iVar5;
  local_28 = 0;
  local_27 = 0;
  local_26 = 0;
  local_24 = 0xff;
  local_25 = 0xff;
  func_004FC6FC(DAT_005a9668,0,0,0,0,(undefined4 *)&local_28,0xb);
  puVar3 = DAT_005a9670;
  puVar6 = DAT_005a9670 + 3;
  DAT_005a9670[1] = 5;
  puVar3[2] = puVar6;
  *puVar3 = 0;
  local_14 = &DAT_005a9674;
  local_18 = iVar5;
  local_1c = s_EnemyBubble_005a967c;
  local_20 = iVar5;
  iVar5 = *piVar1;
  if (*piVar1 == 0) {
    iVar5 = DAT_005a9688;
  }
  uVar4 = func_0019B51C(DAT_005a9694,DAT_005a9690,*DAT_005a968c,(int)&local_20,DAT_005a9670,
                        &local_18,iVar5);
  return CONCAT44(DAT_005a9698,uVar4);
}


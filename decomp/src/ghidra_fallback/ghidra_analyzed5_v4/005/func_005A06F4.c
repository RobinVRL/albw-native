#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC6FC(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4, undefined4 param_5,undefined4 *param_6,undefined4 param_7);
extern int *DAT_005a08a4;
extern undefined4 *DAT_005a08a8;
extern undefined DAT_005a08ac;
extern undefined4 DAT_005a08b8;
extern int DAT_005a08c8;
extern uint *DAT_005a08cc;
extern undefined4 DAT_005a08d0;
extern undefined4 *DAT_005a08d4;
extern undefined4 DAT_005a08d8;
extern undefined4 DAT_005a08dc;
extern undefined4 *DAT_005a08e0;
extern undefined DAT_005a08e4;
extern int DAT_005a0904;
extern uint *DAT_005a0908;
extern undefined4 DAT_005a090c;
extern undefined4 *DAT_005a0910;
extern undefined4 *DAT_005a0914;
extern undefined4 DAT_005a0964;
extern undefined4 *DAT_005a0968;
extern undefined4 DAT_005a096c;
extern char s_EnemyBubbleRope_005a08f4[];
extern char s_EnemyRope_005a08bc[];
extern char s_damage00_005a0938[];
extern char s_dead00_005a095c[];
extern char s_fall00_005a0930[];
extern char s_jitabata00_005a0950[];
extern char s_move00_005a0920[];
extern char s_piyopiyo00_005a0944[];
extern char s_run00_005a0928[];
extern char s_wait00_005a0918[];

// USA 005A06F4 <- EU 005A06CC (Ghidra, non-matching)
// GLOBAL DAT_005a08a4 int *
// GLOBAL DAT_005a08a8 undefined4 *
// GLOBAL DAT_005a08ac undefined
// GLOBAL DAT_005a08b8 undefined4
// GLOBAL DAT_005a08c8 int
// GLOBAL DAT_005a08cc uint *
// GLOBAL DAT_005a08d0 undefined4
// GLOBAL DAT_005a08d4 undefined4 *
// GLOBAL DAT_005a08d8 undefined4
// GLOBAL DAT_005a08dc undefined4
// GLOBAL DAT_005a08e0 undefined4 *
// GLOBAL DAT_005a08e4 undefined
// GLOBAL DAT_005a0904 int
// GLOBAL DAT_005a0908 uint *
// GLOBAL DAT_005a090c undefined4
// GLOBAL DAT_005a0910 undefined4 *
// GLOBAL DAT_005a0914 undefined4 *
// GLOBAL DAT_005a0964 undefined4
// GLOBAL DAT_005a0968 undefined4 *
// GLOBAL DAT_005a096c undefined4
// GLOBAL s_EnemyBubbleRope_005a08f4 string
// GLOBAL s_EnemyRope_005a08bc string
// GLOBAL s_damage00_005a0938 string
// GLOBAL s_dead00_005a095c string
// GLOBAL s_fall00_005a0930 string
// GLOBAL s_jitabata00_005a0950 string
// GLOBAL s_move00_005a0920 string
// GLOBAL s_piyopiyo00_005a0944 string
// GLOBAL s_run00_005a0928 string
// GLOBAL s_wait00_005a0918 string

undefined8 func_005A06F4(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(undefined1 *)(albw_frame + 0x8))
  #define local_37 (*(undefined1 *)(albw_frame + 0x9))
  #define local_36 (*(undefined1 *)(albw_frame + 0xa))
  #define local_35 (*(undefined1 *)(albw_frame + 0xb))
  #define local_34 (*(undefined1 *)(albw_frame + 0xc))
  #define local_30 (*(undefined4 *)(albw_frame + 0x10))
  #define local_2c (*(char * *)(albw_frame + 0x14))
  #define local_28 (*(undefined4 *)(albw_frame + 0x18))
  #define local_24 (*(undefined * *)(albw_frame + 0x1c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x20))
  #define local_1c (*(char * *)(albw_frame + 0x24))
  #define local_18 (*(undefined4 *)(albw_frame + 0x28))
  #define local_14 (*(undefined * *)(albw_frame + 0x2c))
  piVar1 = DAT_005a08a4;
  DAT_005a08a4[2] = -1;
  piVar1[3] = -1;
  piVar1[4] = 0;
  piVar1[5] = 0;
  uVar2 = DAT_005a08b8;
  puVar3 = DAT_005a08a8;
  puVar5 = DAT_005a08a8 + 3;
  DAT_005a08a8[1] = 5;
  puVar3[2] = puVar5;
  *puVar3 = 0;
  local_24 = &DAT_005a08ac;
  local_28 = uVar2;
  local_2c = s_EnemyRope_005a08bc;
  local_30 = uVar2;
  iVar4 = *piVar1;
  if (*piVar1 == 0) {
    iVar4 = DAT_005a08c8;
  }
  func_0019B51C(DAT_005a08d4,DAT_005a08d0,*DAT_005a08cc,(int)&local_30,DAT_005a08a8,&local_28,iVar4)
  ;
  puVar3 = DAT_005a08e0;
  DAT_005a08e0[2] = DAT_005a08e0 + 3;
  puVar3[1] = 5;
  *puVar3 = 0;
  local_14 = &DAT_005a08e4;
  local_18 = uVar2;
  local_1c = s_EnemyBubbleRope_005a08f4;
  local_20 = uVar2;
  iVar4 = piVar1[1];
  if (piVar1[1] == 0) {
    iVar4 = DAT_005a0904;
  }
  func_0019B51C(DAT_005a0910,DAT_005a090c,*DAT_005a0908,(int)&local_20,DAT_005a08e0,&local_18,iVar4)
  ;
  puVar3 = DAT_005a0914;
  DAT_005a0914[1] = s_wait00_005a0918;
  *puVar3 = uVar2;
  puVar3[3] = s_move00_005a0920;
  puVar3[2] = uVar2;
  puVar3[5] = s_run00_005a0928;
  puVar3[4] = uVar2;
  puVar3[7] = s_fall00_005a0930;
  puVar3[6] = uVar2;
  puVar3[9] = s_damage00_005a0938;
  puVar3[8] = uVar2;
  puVar3[0xb] = s_piyopiyo00_005a0944;
  puVar3[10] = uVar2;
  puVar3[0xd] = s_jitabata00_005a0950;
  puVar3[0xc] = uVar2;
  puVar3[0xe] = uVar2;
  puVar3[0xf] = s_dead00_005a095c;
  local_38 = 0;
  local_37 = 0;
  local_36 = 0;
  local_34 = 0xff;
  local_35 = 0xff;
  puVar3 = func_004FC6FC(DAT_005a0968,0,1,0,0,(undefined4 *)&local_38,0xb);
  return CONCAT44(DAT_005a096c,puVar3);
}


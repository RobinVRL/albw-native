#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005abcc4;
extern undefined4 *DAT_005abcc8;
extern undefined4 DAT_005abcd8;
extern undefined4 DAT_005abd00;
extern uint DAT_005abd04;
extern undefined4 DAT_005abd08;
extern uint DAT_005abd0c;
extern undefined4 DAT_005abd10;
extern undefined4 DAT_005abd14;
extern undefined4 *DAT_005abd18;
extern undefined4 DAT_005abd1c;
extern undefined4 *DAT_005abd20;
extern undefined4 DAT_005abd24;
extern undefined4 *DAT_005abd28;
extern undefined4 DAT_005abd2c;
extern undefined4 DAT_005abd30;
extern undefined4 DAT_005abd34;
extern undefined4 DAT_005abd38;
extern undefined4 DAT_005abd3c;
extern undefined4 DAT_005abd40;
extern undefined4 DAT_005abd44;
extern undefined4 DAT_005abd48;
extern undefined4 DAT_005abd4c;
extern undefined DAT_005abd50;
extern undefined DAT_005abd74;
extern undefined DAT_005abdc4;
extern undefined DAT_005abdd8;
extern undefined4 DAT_005abde8;
extern undefined4 *DAT_005abdec;
extern undefined DAT_005abdf0;
extern int DAT_005abe08;
extern uint *DAT_005abe0c;
extern undefined4 DAT_005abe10;
extern undefined4 DAT_005abe14;
extern char s_N_ArrowB_00_005abcdc[];
extern char s_N_ArrowL_00_005abce8[];
extern char s_N_ArrowR_00_005abcf4[];
extern char s_N_ArrowT_00_005abccc[];
extern char s_NpcBirdLift_005abdfc[];
extern char s_dogeza_talk_005abdcc[];
extern char s_happy_005abdbc[];
extern char s_question_005abdb0[];
extern char s_question_loop_005abda0[];
extern char s_shock_005abde0[];
extern char s_surprise_loop_005abd64[];
extern char s_surprise_st_005abd58[];
extern char s_talk_negative_005abd90[];
extern char s_talk_panic_005abd84[];
extern char s_twitter_005abd7c[];

// USA 005ABAA4 <- EU 005ABA7C (Ghidra, non-matching)
// GLOBAL DAT_005abcc4 undefined4 *
// GLOBAL DAT_005abcc8 undefined4 *
// GLOBAL DAT_005abcd8 undefined4
// GLOBAL DAT_005abd00 undefined4
// GLOBAL DAT_005abd04 uint
// GLOBAL DAT_005abd08 undefined4
// GLOBAL DAT_005abd0c uint
// GLOBAL DAT_005abd10 undefined4
// GLOBAL DAT_005abd14 undefined4
// GLOBAL DAT_005abd18 undefined4 *
// GLOBAL DAT_005abd1c undefined4
// GLOBAL DAT_005abd20 undefined4 *
// GLOBAL DAT_005abd24 undefined4
// GLOBAL DAT_005abd28 undefined4 *
// GLOBAL DAT_005abd2c undefined4
// GLOBAL DAT_005abd30 undefined4
// GLOBAL DAT_005abd34 undefined4
// GLOBAL DAT_005abd38 undefined4
// GLOBAL DAT_005abd3c undefined4
// GLOBAL DAT_005abd40 undefined4
// GLOBAL DAT_005abd44 undefined4
// GLOBAL DAT_005abd48 undefined4
// GLOBAL DAT_005abd4c undefined4
// GLOBAL DAT_005abd50 undefined
// GLOBAL DAT_005abd74 undefined
// GLOBAL DAT_005abdc4 undefined
// GLOBAL DAT_005abdd8 undefined
// GLOBAL DAT_005abde8 undefined4
// GLOBAL DAT_005abdec undefined4 *
// GLOBAL DAT_005abdf0 undefined
// GLOBAL DAT_005abe08 int
// GLOBAL DAT_005abe0c uint *
// GLOBAL DAT_005abe10 undefined4
// GLOBAL DAT_005abe14 undefined4
// GLOBAL s_N_ArrowB_00_005abcdc string
// GLOBAL s_N_ArrowL_00_005abce8 string
// GLOBAL s_N_ArrowR_00_005abcf4 string
// GLOBAL s_N_ArrowT_00_005abccc string
// GLOBAL s_NpcBirdLift_005abdfc string
// GLOBAL s_dogeza_talk_005abdcc string
// GLOBAL s_happy_005abdbc string
// GLOBAL s_question_005abdb0 string
// GLOBAL s_question_loop_005abda0 string
// GLOBAL s_shock_005abde0 string
// GLOBAL s_surprise_loop_005abd64 string
// GLOBAL s_surprise_st_005abd58 string
// GLOBAL s_talk_negative_005abd90 string
// GLOBAL s_talk_panic_005abd84 string
// GLOBAL s_twitter_005abd7c string

undefined8 func_005ABAA4(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define puStack_24 (*(undefined * *)(albw_frame + 0xc))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(char * *)(albw_frame + 0x14))
  puVar1 = DAT_005abcc4;
  DAT_005abcc4[2] = 0xffffffff;
  puVar1[3] = 0xffffffff;
  puVar1[4] = 0;
  puVar1[5] = 0;
  uVar6 = DAT_005abcd8;
  puVar7 = DAT_005abcc8;
  DAT_005abcc8[1] = s_N_ArrowT_00_005abccc;
  *puVar7 = uVar6;
  puVar7[3] = s_N_ArrowB_00_005abcdc;
  puVar7[2] = uVar6;
  puVar7[5] = s_N_ArrowL_00_005abce8;
  puVar7[4] = uVar6;
  puVar7[6] = uVar6;
  puVar7[7] = s_N_ArrowR_00_005abcf4;
  uVar9 = func_00114608(0x4e000000,DAT_005abd04);
  *puVar1 = (int)uVar9;
  uVar8 = DAT_005abd08;
  uVar9 = func_00114608(DAT_005abd0c,(uint)((ulonglong)uVar9 >> 0x20));
  puVar1[1] = (int)uVar9;
  uVar5 = DAT_005abd38;
  puVar1 = DAT_005abd18;
  uVar3 = DAT_005abd14;
  uVar2 = DAT_005abd10;
  *DAT_005abd18 = DAT_005abd1c;
  uVar4 = DAT_005abd24;
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  puVar1 = DAT_005abd20;
  *DAT_005abd20 = uVar4;
  uVar4 = DAT_005abd34;
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  puVar1 = DAT_005abd28;
  *DAT_005abd28 = DAT_005abd2c;
  puVar1[1] = uVar8;
  puVar1[2] = uVar2;
  puVar1[3] = DAT_005abd30;
  puVar1[4] = uVar4;
  puVar1[5] = uVar5;
  uVar3 = DAT_005abd40;
  puVar1[6] = DAT_005abd3c;
  puVar1[7] = uVar3;
  puVar1[8] = uVar2;
  uVar3 = DAT_005abd4c;
  uVar2 = DAT_005abd48;
  puVar1[9] = DAT_005abd44;
  puVar1[10] = uVar2;
  puVar1[0xb] = uVar3;
  puVar1[0xd] = &DAT_005abd50;
  puVar1[0xc] = uVar6;
  puVar1[0xf] = s_surprise_st_005abd58;
  puVar1[0xe] = uVar6;
  puVar1[0x11] = s_surprise_loop_005abd64;
  puVar1[0x10] = uVar6;
  puVar1[0x13] = &DAT_005abd74;
  puVar1[0x12] = uVar6;
  puVar1[0x15] = s_twitter_005abd7c;
  puVar1[0x14] = uVar6;
  puVar1[0x17] = s_talk_panic_005abd84;
  puVar1[0x16] = uVar6;
  puVar1[0x19] = s_talk_negative_005abd90;
  puVar1[0x18] = uVar6;
  puVar1[0x1b] = s_question_loop_005abda0;
  puVar1[0x1a] = uVar6;
  puVar1[0x1d] = s_question_005abdb0;
  puVar1[0x1c] = uVar6;
  puVar1[0x1f] = s_happy_005abdbc;
  puVar1[0x1e] = uVar6;
  puVar1[0x21] = &DAT_005abdc4;
  puVar1[0x20] = uVar6;
  puVar1[0x23] = s_dogeza_talk_005abdcc;
  puVar1[0x22] = uVar6;
  puVar1[0x25] = &DAT_005abdd8;
  puVar1[0x24] = uVar6;
  puVar1[0x26] = uVar6;
  puVar1[0x27] = s_shock_005abde0;
  puVar1 = DAT_005abdec;
  puVar7 = DAT_005abdec + 3;
  *DAT_005abdec = 0;
  puVar1[1] = 5;
  puVar1[2] = puVar7;
  local_28 = uVar6;
  puStack_24 = &DAT_005abdf0;
  uStack_20 = uVar6;
  local_1c = s_NpcBirdLift_005abdfc;
  uVar6 = func_0019B51C(DAT_005abdec + 8,DAT_005abe10,*DAT_005abe0c,(int)&uStack_20,DAT_005abdec,
                        &local_28,DAT_005abe08);
  return CONCAT44(DAT_005abe14,uVar6);
}


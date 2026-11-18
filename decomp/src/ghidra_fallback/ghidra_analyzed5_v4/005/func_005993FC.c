#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_00599520;
extern undefined4 *DAT_00599524;
extern undefined4 *DAT_00599528;
extern undefined4 DAT_00599538;
extern undefined4 DAT_00599560;
extern undefined4 DAT_00599564;
extern undefined4 *DAT_00599568;
extern undefined DAT_0059956c;
extern uint *DAT_00599588;
extern undefined4 DAT_0059958c;
extern undefined4 *DAT_00599590;
extern undefined4 DAT_00599594;
extern undefined4 *DAT_00599598;
extern undefined DAT_0059959c;
extern uint *DAT_005995b8;
extern undefined4 DAT_005995bc;
extern undefined4 *DAT_005995c0;
extern char s_MojWindL_0059957c[];
extern char s_MojWindS_005995ac[];
extern char s_N_ArrowB_00_0059953c[];
extern char s_N_ArrowL_00_00599548[];
extern char s_N_ArrowR_00_00599554[];
extern char s_N_ArrowT_00_0059952c[];

// USA 005993FC <- EU 005993D4 (Ghidra, non-matching)
// GLOBAL DAT_00599520 undefined4 *
// GLOBAL DAT_00599524 undefined4 *
// GLOBAL DAT_00599528 undefined4 *
// GLOBAL DAT_00599538 undefined4
// GLOBAL DAT_00599560 undefined4
// GLOBAL DAT_00599564 undefined4
// GLOBAL DAT_00599568 undefined4 *
// GLOBAL DAT_0059956c undefined
// GLOBAL DAT_00599588 uint *
// GLOBAL DAT_0059958c undefined4
// GLOBAL DAT_00599590 undefined4 *
// GLOBAL DAT_00599594 undefined4
// GLOBAL DAT_00599598 undefined4 *
// GLOBAL DAT_0059959c undefined
// GLOBAL DAT_005995b8 uint *
// GLOBAL DAT_005995bc undefined4
// GLOBAL DAT_005995c0 undefined4 *
// GLOBAL s_MojWindL_0059957c string
// GLOBAL s_MojWindS_005995ac string
// GLOBAL s_N_ArrowB_00_0059953c string
// GLOBAL s_N_ArrowL_00_00599548 string
// GLOBAL s_N_ArrowR_00_00599554 string
// GLOBAL s_N_ArrowT_00_0059952c string

undefined8 func_005993FC(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(undefined4 *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(undefined * *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(char * *)(albw_frame + 0x14))
  #define local_18 (*(undefined4 *)(albw_frame + 0x18))
  #define local_14 (*(undefined * *)(albw_frame + 0x1c))
  puVar1 = DAT_00599520;
  *DAT_00599520 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_00599538;
  puVar1 = DAT_00599524;
  *DAT_00599524 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_00599528;
  DAT_00599528[1] = s_N_ArrowT_00_0059952c;
  *puVar1 = uVar2;
  puVar1[3] = s_N_ArrowB_00_0059953c;
  puVar1[2] = uVar2;
  puVar1[5] = s_N_ArrowL_00_00599548;
  puVar1[4] = uVar2;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_00599554;
  puVar1 = DAT_00599568;
  puVar3 = DAT_00599568 + 3;
  DAT_00599568[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_24 = &DAT_0059956c;
  local_2c = s_MojWindL_0059957c;
  local_28 = uVar2;
  local_30 = uVar2;
  func_0019B51C(DAT_00599590,DAT_0059958c,*DAT_00599588,(int)&local_30,DAT_00599568,&local_28,0);
  puVar1 = DAT_00599598;
  puVar3 = DAT_00599598 + 3;
  DAT_00599598[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_14 = &DAT_0059959c;
  local_1c = s_MojWindS_005995ac;
  local_18 = uVar2;
  local_20 = uVar2;
  uVar2 = func_0019B51C(DAT_005995c0,DAT_005995bc,*DAT_005995b8,(int)&local_20,DAT_00599598,
                        &local_18,0);
  return CONCAT44(DAT_00599594,uVar2);
}


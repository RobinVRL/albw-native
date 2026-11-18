#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005c0988;
extern undefined4 *DAT_005c098c;
extern undefined4 *DAT_005c0990;
extern undefined4 DAT_005c09a0;
extern undefined4 DAT_005c09c8;
extern uint DAT_005c09cc;
extern uint DAT_005c09d0;
extern undefined4 *DAT_005c09d4;
extern undefined DAT_005c09d8;
extern undefined DAT_005c09ec;
extern undefined4 DAT_005c0a08;
extern undefined4 DAT_005c0a18;
extern undefined4 *DAT_005c0a1c;
extern undefined DAT_005c0a20;
extern uint *DAT_005c0a38;
extern undefined4 DAT_005c0a3c;
extern undefined4 *DAT_005c0a40;
extern undefined4 DAT_005c0a44;
extern char s_LittleBird_005c0a0c[];
extern char s_N_ArrowB_00_005c09a4[];
extern char s_N_ArrowL_00_005c09b0[];
extern char s_N_ArrowR_00_005c09bc[];
extern char s_N_ArrowT_00_005c0994[];
extern char s_ObjLittleBird_005c0a28[];
extern char s_glide_005c09dc[];
extern char s_grooming_005c09f4[];
extern char s_hopping_005c0a00[];
extern char s_landing_005c09e4[];

// USA 005C0844 <- EU 005C081C (Ghidra, non-matching)
// GLOBAL DAT_005c0988 undefined4 *
// GLOBAL DAT_005c098c undefined4 *
// GLOBAL DAT_005c0990 undefined4 *
// GLOBAL DAT_005c09a0 undefined4
// GLOBAL DAT_005c09c8 undefined4
// GLOBAL DAT_005c09cc uint
// GLOBAL DAT_005c09d0 uint
// GLOBAL DAT_005c09d4 undefined4 *
// GLOBAL DAT_005c09d8 undefined
// GLOBAL DAT_005c09ec undefined
// GLOBAL DAT_005c0a08 undefined4
// GLOBAL DAT_005c0a18 undefined4
// GLOBAL DAT_005c0a1c undefined4 *
// GLOBAL DAT_005c0a20 undefined
// GLOBAL DAT_005c0a38 uint *
// GLOBAL DAT_005c0a3c undefined4
// GLOBAL DAT_005c0a40 undefined4 *
// GLOBAL DAT_005c0a44 undefined4
// GLOBAL s_LittleBird_005c0a0c string
// GLOBAL s_N_ArrowB_00_005c09a4 string
// GLOBAL s_N_ArrowL_00_005c09b0 string
// GLOBAL s_N_ArrowR_00_005c09bc string
// GLOBAL s_N_ArrowT_00_005c0994 string
// GLOBAL s_ObjLittleBird_005c0a28 string
// GLOBAL s_glide_005c09dc string
// GLOBAL s_grooming_005c09f4 string
// GLOBAL s_hopping_005c0a00 string
// GLOBAL s_landing_005c09e4 string

undefined8 func_005C0844(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(undefined4 *)(albw_frame + 0x0))
  #define puStack_1c (*(undefined * *)(albw_frame + 0x4))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  puVar1 = DAT_005c0988;
  DAT_005c0988[2] = 0xffffffff;
  puVar1[3] = 0xffffffff;
  uVar2 = DAT_005c09a0;
  puVar1 = DAT_005c098c;
  *DAT_005c098c = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005c0990;
  DAT_005c0990[1] = s_N_ArrowT_00_005c0994;
  *puVar1 = uVar2;
  puVar1[3] = s_N_ArrowB_00_005c09a4;
  puVar1[2] = uVar2;
  puVar1[5] = s_N_ArrowL_00_005c09b0;
  puVar1[4] = uVar2;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_005c09bc;
  puVar1 = DAT_005c0988;
  uVar4 = func_00114608(DAT_005c09d0,DAT_005c09cc);
  *puVar1 = (int)uVar4;
  puVar3 = DAT_005c09d4;
  DAT_005c09d4[1] = &DAT_005c09d8;
  *puVar3 = uVar2;
  puVar3[3] = s_glide_005c09dc;
  puVar3[2] = uVar2;
  puVar3[5] = s_landing_005c09e4;
  puVar3[4] = uVar2;
  puVar3[7] = &DAT_005c09ec;
  puVar3[6] = uVar2;
  puVar3[9] = s_grooming_005c09f4;
  puVar3[8] = uVar2;
  puVar3[10] = uVar2;
  puVar3[0xb] = s_hopping_005c0a00;
  puVar1[7] = s_LittleBird_005c0a0c;
  puVar1[6] = uVar2;
  puVar1 = DAT_005c0a1c;
  puVar3 = DAT_005c0a1c + 3;
  *DAT_005c0a1c = 0;
  puVar1[1] = 5;
  puVar1[2] = puVar3;
  local_20 = uVar2;
  puStack_1c = &DAT_005c0a20;
  uStack_18 = uVar2;
  local_14 = s_ObjLittleBird_005c0a28;
  uVar2 = func_0019B51C(DAT_005c0a40,DAT_005c0a3c,*DAT_005c0a38,(int)&uStack_18,DAT_005c0a1c,
                        &local_20,0);
  return CONCAT44(DAT_005c0a44,uVar2);
}


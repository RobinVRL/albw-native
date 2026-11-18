#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC6FC(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4, undefined4 param_5,undefined4 *param_6,undefined4 param_7);
extern int *DAT_005e0c68;
extern undefined4 *DAT_005e0c6c;
extern undefined4 DAT_005e0c7c;
extern undefined4 DAT_005e0ca4;
extern undefined4 DAT_005e0ca8;
extern undefined4 *DAT_005e0cac;
extern undefined DAT_005e0cb0;
extern undefined DAT_005e0cb8;
extern undefined DAT_005e0cc4;
extern undefined4 DAT_005e0cd8;
extern undefined4 *DAT_005e0cdc;
extern undefined4 DAT_005e0ce0;
extern undefined4 *DAT_005e0ce4;
extern undefined DAT_005e0ce8;
extern int DAT_005e0d14;
extern uint *DAT_005e0d18;
extern undefined4 DAT_005e0d1c;
extern undefined4 *DAT_005e0d20;
extern undefined4 DAT_005e0d24;
extern char s_MiniGameRSCrowly_005e0d00[];
extern char s_N_ArrowB_00_005e0c80[];
extern char s_N_ArrowL_00_005e0c8c[];
extern char s_N_ArrowR_00_005e0c98[];
extern char s_N_ArrowT_00_005e0c70[];
extern char s_damage_005e0cbc[];
extern char s_piyopiyo_005e0ccc[];

// USA 005E0B00 <- EU 005E0AD8 (Ghidra, non-matching)
// GLOBAL DAT_005e0c68 int *
// GLOBAL DAT_005e0c6c undefined4 *
// GLOBAL DAT_005e0c7c undefined4
// GLOBAL DAT_005e0ca4 undefined4
// GLOBAL DAT_005e0ca8 undefined4
// GLOBAL DAT_005e0cac undefined4 *
// GLOBAL DAT_005e0cb0 undefined
// GLOBAL DAT_005e0cb8 undefined
// GLOBAL DAT_005e0cc4 undefined
// GLOBAL DAT_005e0cd8 undefined4
// GLOBAL DAT_005e0cdc undefined4 *
// GLOBAL DAT_005e0ce0 undefined4
// GLOBAL DAT_005e0ce4 undefined4 *
// GLOBAL DAT_005e0ce8 undefined
// GLOBAL DAT_005e0d14 int
// GLOBAL DAT_005e0d18 uint *
// GLOBAL DAT_005e0d1c undefined4
// GLOBAL DAT_005e0d20 undefined4 *
// GLOBAL DAT_005e0d24 undefined4
// GLOBAL s_MiniGameRSCrowly_005e0d00 string
// GLOBAL s_N_ArrowB_00_005e0c80 string
// GLOBAL s_N_ArrowL_00_005e0c8c string
// GLOBAL s_N_ArrowR_00_005e0c98 string
// GLOBAL s_N_ArrowT_00_005e0c70 string
// GLOBAL s_damage_005e0cbc string
// GLOBAL s_piyopiyo_005e0ccc string

undefined8 func_005E0B00(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(undefined1 *)(albw_frame + 0x8))
  #define local_27 (*(undefined1 *)(albw_frame + 0x9))
  #define local_26 (*(undefined1 *)(albw_frame + 0xa))
  #define local_25 (*(undefined1 *)(albw_frame + 0xb))
  #define local_24 (*(undefined1 *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(char * *)(albw_frame + 0x14))
  #define local_18 (*(undefined4 *)(albw_frame + 0x18))
  #define local_14 (*(undefined * *)(albw_frame + 0x1c))
  piVar1 = DAT_005e0c68;
  DAT_005e0c68[2] = -1;
  piVar1[3] = -1;
  uVar3 = DAT_005e0c7c;
  piVar1[4] = 0;
  piVar1[5] = 0;
  puVar2 = DAT_005e0c6c;
  DAT_005e0c6c[1] = s_N_ArrowT_00_005e0c70;
  *puVar2 = uVar3;
  puVar2[3] = s_N_ArrowB_00_005e0c80;
  puVar2[2] = uVar3;
  puVar2[5] = s_N_ArrowL_00_005e0c8c;
  puVar2[4] = uVar3;
  puVar2[6] = uVar3;
  puVar2[7] = s_N_ArrowR_00_005e0c98;
  puVar2 = DAT_005e0cac;
  DAT_005e0cac[1] = &DAT_005e0cb0;
  *puVar2 = uVar3;
  puVar2[3] = &DAT_005e0cb8;
  puVar2[2] = uVar3;
  puVar2[5] = &DAT_005e0cb8;
  puVar2[4] = uVar3;
  puVar2[7] = s_damage_005e0cbc;
  puVar2[6] = uVar3;
  puVar2[9] = &DAT_005e0cc4;
  puVar2[8] = uVar3;
  puVar2[10] = uVar3;
  puVar2[0xb] = s_piyopiyo_005e0ccc;
  local_28 = 0;
  local_27 = 0;
  local_26 = 0;
  local_24 = 0xff;
  local_25 = 0xff;
  func_004FC6FC(DAT_005e0cdc,0,0,0,0,(undefined4 *)&local_28,0xb);
  puVar2 = DAT_005e0ce4;
  puVar5 = DAT_005e0ce4 + 3;
  DAT_005e0ce4[1] = 5;
  puVar2[2] = puVar5;
  *puVar2 = 0;
  local_14 = &DAT_005e0ce8;
  local_18 = uVar3;
  local_1c = s_MiniGameRSCrowly_005e0d00;
  local_20 = uVar3;
  iVar4 = *piVar1;
  if (*piVar1 == 0) {
    iVar4 = DAT_005e0d14;
  }
  uVar3 = func_0019B51C(DAT_005e0d20,DAT_005e0d1c,*DAT_005e0d18,(int)&local_20,DAT_005e0ce4,
                        &local_18,iVar4);
  return CONCAT44(DAT_005e0d24,uVar3);
}


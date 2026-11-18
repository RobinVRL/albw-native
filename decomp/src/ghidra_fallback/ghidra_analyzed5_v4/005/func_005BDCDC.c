#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005bddec;
extern undefined4 *DAT_005bddf0;
extern undefined4 DAT_005bde00;
extern undefined4 DAT_005bde28;
extern uint DAT_005bde2c;
extern uint DAT_005bde30;
extern uint DAT_005bde34;
extern uint DAT_005bde38;
extern uint DAT_005bde3c;
extern uint DAT_005bde40;
extern int DAT_005bde44;
extern undefined DAT_005bde48;
extern undefined4 DAT_005bde6c;
extern uint *DAT_005bde70;
extern undefined4 DAT_005bde74;
extern undefined4 *DAT_005bde78;
extern undefined4 DAT_005bde7c;
extern char s_MiniGameRSObj_005bde5c[];
extern char s_N_ArrowB_00_005bde04[];
extern char s_N_ArrowL_00_005bde10[];
extern char s_N_ArrowR_00_005bde1c[];
extern char s_N_ArrowT_00_005bddf4[];

// USA 005BDCDC <- EU 005BDCB4 (Ghidra, non-matching)
// GLOBAL DAT_005bddec undefined4 *
// GLOBAL DAT_005bddf0 undefined4 *
// GLOBAL DAT_005bde00 undefined4
// GLOBAL DAT_005bde28 undefined4
// GLOBAL DAT_005bde2c uint
// GLOBAL DAT_005bde30 uint
// GLOBAL DAT_005bde34 uint
// GLOBAL DAT_005bde38 uint
// GLOBAL DAT_005bde3c uint
// GLOBAL DAT_005bde40 uint
// GLOBAL DAT_005bde44 int
// GLOBAL DAT_005bde48 undefined
// GLOBAL DAT_005bde6c undefined4
// GLOBAL DAT_005bde70 uint *
// GLOBAL DAT_005bde74 undefined4
// GLOBAL DAT_005bde78 undefined4 *
// GLOBAL DAT_005bde7c undefined4
// GLOBAL s_MiniGameRSObj_005bde5c string
// GLOBAL s_N_ArrowB_00_005bde04 string
// GLOBAL s_N_ArrowL_00_005bde10 string
// GLOBAL s_N_ArrowR_00_005bde1c string
// GLOBAL s_N_ArrowT_00_005bddf4 string

undefined8 func_005BDCDC(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(undefined4 *)(albw_frame + 0x0))
  #define puStack_1c (*(undefined * *)(albw_frame + 0x4))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  puVar1 = DAT_005bddec;
  DAT_005bddec[6] = 0xffffffff;
  puVar1[7] = 0xffffffff;
  uVar4 = DAT_005bde00;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar2 = DAT_005bddf0;
  DAT_005bddf0[1] = s_N_ArrowT_00_005bddf4;
  *puVar2 = uVar4;
  puVar2[3] = s_N_ArrowB_00_005bde04;
  puVar2[2] = uVar4;
  puVar2[5] = s_N_ArrowL_00_005bde10;
  puVar2[4] = uVar4;
  puVar2[6] = uVar4;
  puVar2[7] = s_N_ArrowR_00_005bde1c;
  uVar5 = func_00114608(DAT_005bde30,DAT_005bde2c);
  *puVar1 = (int)uVar5;
  uVar5 = func_00114608(DAT_005bde34,(uint)((ulonglong)uVar5 >> 0x20));
  puVar1[1] = (int)uVar5;
  uVar5 = func_00114608(DAT_005bde38,(uint)((ulonglong)uVar5 >> 0x20));
  puVar1[2] = (int)uVar5;
  uVar5 = func_00114608(DAT_005bde3c,(uint)((ulonglong)uVar5 >> 0x20));
  puVar1[3] = (int)uVar5;
  uVar5 = func_00114608(DAT_005bde40,(uint)((ulonglong)uVar5 >> 0x20));
  puVar1[4] = (int)uVar5;
  iVar3 = DAT_005bde44;
  *(undefined4 *)(DAT_005bde44 + 4) = 0;
  *(undefined4 *)(iVar3 + 8) = 0;
  *(undefined4 *)(iVar3 + -0x288) = 0;
  *(undefined4 *)(iVar3 + -0x284) = 5;
  *(int *)(iVar3 + -0x280) = iVar3 + -0x27c;
  local_20 = uVar4;
  puStack_1c = &DAT_005bde48;
  uStack_18 = uVar4;
  local_14 = s_MiniGameRSObj_005bde5c;
  uVar4 = func_0019B51C(DAT_005bde78,DAT_005bde74,*DAT_005bde70,(int)&uStack_18,DAT_005bde6c,
                        &local_20,0);
  return CONCAT44(DAT_005bde7c,uVar4);
}


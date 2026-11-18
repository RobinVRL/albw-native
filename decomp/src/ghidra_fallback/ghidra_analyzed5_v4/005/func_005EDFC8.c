#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005ee154;
extern undefined4 *DAT_005ee158;
extern undefined4 *DAT_005ee15c;
extern undefined4 DAT_005ee16c;
extern undefined4 DAT_005ee194;
extern undefined4 DAT_005ee198;
extern undefined4 *DAT_005ee19c;
extern undefined DAT_005ee1a0;
extern uint *DAT_005ee1d4;
extern undefined4 DAT_005ee1d8;
extern undefined4 *DAT_005ee1dc;
extern undefined4 DAT_005ee1e0;
extern undefined4 *DAT_005ee1e4;
extern undefined DAT_005ee1e8;
extern uint *DAT_005ee220;
extern undefined4 *DAT_005ee224;
extern undefined4 *DAT_005ee228;
extern undefined DAT_005ee22c;
extern uint *DAT_005ee268;
extern undefined4 *DAT_005ee26c;
extern char s_AreaEventTalkCollectSandRod_005ee24c[];
extern char s_AreaEventTalkMSGetAfter_005ee208[];
extern char s_AreaEventTalkTutorial_005ee1bc[];
extern char s_N_ArrowB_00_005ee170[];
extern char s_N_ArrowL_00_005ee17c[];
extern char s_N_ArrowR_00_005ee188[];
extern char s_N_ArrowT_00_005ee160[];

// USA 005EDFC8 <- EU 005EDFA0 (Ghidra, non-matching)
// GLOBAL DAT_005ee154 undefined4 *
// GLOBAL DAT_005ee158 undefined4 *
// GLOBAL DAT_005ee15c undefined4 *
// GLOBAL DAT_005ee16c undefined4
// GLOBAL DAT_005ee194 undefined4
// GLOBAL DAT_005ee198 undefined4
// GLOBAL DAT_005ee19c undefined4 *
// GLOBAL DAT_005ee1a0 undefined
// GLOBAL DAT_005ee1d4 uint *
// GLOBAL DAT_005ee1d8 undefined4
// GLOBAL DAT_005ee1dc undefined4 *
// GLOBAL DAT_005ee1e0 undefined4
// GLOBAL DAT_005ee1e4 undefined4 *
// GLOBAL DAT_005ee1e8 undefined
// GLOBAL DAT_005ee220 uint *
// GLOBAL DAT_005ee224 undefined4 *
// GLOBAL DAT_005ee228 undefined4 *
// GLOBAL DAT_005ee22c undefined
// GLOBAL DAT_005ee268 uint *
// GLOBAL DAT_005ee26c undefined4 *
// GLOBAL s_AreaEventTalkCollectSandRod_005ee24c string
// GLOBAL s_AreaEventTalkMSGetAfter_005ee208 string
// GLOBAL s_AreaEventTalkTutorial_005ee1bc string
// GLOBAL s_N_ArrowB_00_005ee170 string
// GLOBAL s_N_ArrowL_00_005ee17c string
// GLOBAL s_N_ArrowR_00_005ee188 string
// GLOBAL s_N_ArrowT_00_005ee160 string

undefined8 func_005EDFC8(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(undefined4 *)(albw_frame + 0x0))
  #define local_3c (*(char * *)(albw_frame + 0x4))
  #define local_38 (*(undefined4 *)(albw_frame + 0x8))
  #define local_34 (*(undefined * *)(albw_frame + 0xc))
  #define local_30 (*(undefined4 *)(albw_frame + 0x10))
  #define local_2c (*(char * *)(albw_frame + 0x14))
  #define local_28 (*(undefined4 *)(albw_frame + 0x18))
  #define local_24 (*(undefined * *)(albw_frame + 0x1c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x20))
  #define local_1c (*(char * *)(albw_frame + 0x24))
  #define local_18 (*(undefined4 *)(albw_frame + 0x28))
  #define local_14 (*(undefined * *)(albw_frame + 0x2c))
  puVar1 = DAT_005ee154;
  *DAT_005ee154 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005ee16c;
  puVar1 = DAT_005ee158;
  *DAT_005ee158 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005ee15c;
  DAT_005ee15c[1] = s_N_ArrowT_00_005ee160;
  *puVar1 = uVar2;
  puVar1[3] = s_N_ArrowB_00_005ee170;
  puVar1[2] = uVar2;
  puVar1[5] = s_N_ArrowL_00_005ee17c;
  puVar1[4] = uVar2;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_005ee188;
  puVar1 = DAT_005ee19c;
  puVar3 = DAT_005ee19c + 3;
  DAT_005ee19c[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_34 = &DAT_005ee1a0;
  local_3c = s_AreaEventTalkTutorial_005ee1bc;
  local_38 = uVar2;
  local_40 = uVar2;
  func_0019B51C(DAT_005ee1dc,DAT_005ee1d8,*DAT_005ee1d4,(int)&local_40,DAT_005ee19c,&local_38,0);
  puVar1 = DAT_005ee1e4;
  puVar3 = DAT_005ee1e4 + 3;
  DAT_005ee1e4[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_24 = &DAT_005ee1e8;
  local_2c = s_AreaEventTalkMSGetAfter_005ee208;
  local_28 = uVar2;
  local_30 = uVar2;
  func_0019B51C(DAT_005ee224,DAT_005ee1d8,*DAT_005ee220,(int)&local_30,DAT_005ee1e4,&local_28,0);
  puVar1 = DAT_005ee228;
  puVar3 = DAT_005ee228 + 3;
  DAT_005ee228[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_14 = &DAT_005ee22c;
  local_1c = s_AreaEventTalkCollectSandRod_005ee24c;
  local_18 = uVar2;
  local_20 = uVar2;
  uVar2 = func_0019B51C(DAT_005ee26c,DAT_005ee1d8,*DAT_005ee268,(int)&local_20,DAT_005ee228,
                        &local_18,0);
  return CONCAT44(DAT_005ee1e0,uVar2);
}


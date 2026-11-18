#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005be4a4;
extern undefined4 *DAT_005be4a8;
extern undefined4 *DAT_005be4ac;
extern undefined DAT_005be4b0;
extern undefined4 DAT_005be4b8;
extern undefined4 DAT_005be4c4;
extern undefined4 DAT_005be4c8;
extern undefined4 *DAT_005be4cc;
extern undefined4 DAT_005be4d0;
extern undefined4 *DAT_005be4d4;
extern undefined DAT_005be4d8;
extern uint *DAT_005be4f4;
extern undefined4 DAT_005be4f8;
extern undefined4 *DAT_005be4fc;
extern undefined4 DAT_005be500;
extern undefined4 *DAT_005be504;
extern undefined DAT_005be508;
extern uint *DAT_005be538;
extern undefined4 DAT_005be53c;
extern undefined4 *DAT_005be540;
extern char s_MojDoorSwitchGanon_005be524[];
extern char s_MojDoorSwitch_005be4e4[];
extern char s_close_005be4bc[];

// USA 005BE36C <- EU 005BE344 (Ghidra, non-matching)
// GLOBAL DAT_005be4a4 undefined4 *
// GLOBAL DAT_005be4a8 undefined4 *
// GLOBAL DAT_005be4ac undefined4 *
// GLOBAL DAT_005be4b0 undefined
// GLOBAL DAT_005be4b8 undefined4
// GLOBAL DAT_005be4c4 undefined4
// GLOBAL DAT_005be4c8 undefined4
// GLOBAL DAT_005be4cc undefined4 *
// GLOBAL DAT_005be4d0 undefined4
// GLOBAL DAT_005be4d4 undefined4 *
// GLOBAL DAT_005be4d8 undefined
// GLOBAL DAT_005be4f4 uint *
// GLOBAL DAT_005be4f8 undefined4
// GLOBAL DAT_005be4fc undefined4 *
// GLOBAL DAT_005be500 undefined4
// GLOBAL DAT_005be504 undefined4 *
// GLOBAL DAT_005be508 undefined
// GLOBAL DAT_005be538 uint *
// GLOBAL DAT_005be53c undefined4
// GLOBAL DAT_005be540 undefined4 *
// GLOBAL s_MojDoorSwitchGanon_005be524 string
// GLOBAL s_MojDoorSwitch_005be4e4 string
// GLOBAL s_close_005be4bc string

undefined8 func_005BE36C(void)

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
  puVar1 = DAT_005be4a4;
  *DAT_005be4a4 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005be4b8;
  puVar1 = DAT_005be4a8;
  *DAT_005be4a8 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005be4ac;
  DAT_005be4ac[1] = &DAT_005be4b0;
  *puVar1 = uVar2;
  puVar1[2] = uVar2;
  puVar1[3] = s_close_005be4bc;
  puVar1 = DAT_005be4cc;
  DAT_005be4cc[1] = &DAT_005be4b0;
  *puVar1 = uVar2;
  puVar1[2] = uVar2;
  puVar1[3] = s_close_005be4bc;
  puVar1 = DAT_005be4d4;
  puVar3 = DAT_005be4d4 + 3;
  DAT_005be4d4[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_24 = &DAT_005be4d8;
  local_2c = s_MojDoorSwitch_005be4e4;
  local_28 = uVar2;
  local_30 = uVar2;
  func_0019B51C(DAT_005be4fc,DAT_005be4f8,*DAT_005be4f4,(int)&local_30,DAT_005be4d4,&local_28,0);
  puVar1 = DAT_005be504;
  puVar3 = DAT_005be504 + 3;
  DAT_005be504[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_14 = &DAT_005be508;
  local_1c = s_MojDoorSwitchGanon_005be524;
  local_18 = uVar2;
  local_20 = uVar2;
  uVar2 = func_0019B51C(DAT_005be540,DAT_005be53c,*DAT_005be538,(int)&local_20,DAT_005be504,
                        &local_18,0);
  return CONCAT44(DAT_005be500,uVar2);
}


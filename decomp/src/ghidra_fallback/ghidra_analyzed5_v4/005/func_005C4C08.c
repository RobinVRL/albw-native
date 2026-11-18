#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005c4d30;
extern undefined4 *DAT_005c4d34;
extern undefined4 *DAT_005c4d38;
extern undefined4 DAT_005c4d48;
extern undefined4 DAT_005c4d8c;
extern undefined4 DAT_005c4d90;
extern undefined4 *DAT_005c4d94;
extern undefined4 DAT_005c4d98;
extern undefined4 *DAT_005c4d9c;
extern undefined4 *DAT_005c4da0;
extern undefined4 DAT_005c4db0;
extern undefined4 *DAT_005c4db4;
extern undefined DAT_005c4db8;
extern uint *DAT_005c4ddc;
extern undefined4 DAT_005c4de0;
extern undefined4 *DAT_005c4de4;
extern undefined4 DAT_005c4de8;
extern char s_AttemptedLeft_005c4d58[];
extern char s_AttemptedRight_005c4d68[];
extern char s_MojSwitchWater_005c4dcc[];
extern char s_SetLeft_005c4d78[];
extern char s_SetRight_005c4d80[];
extern char s_SwitchWater_005c4da4[];
extern char s_TurnLeft_005c4d3c[];
extern char s_TurnRight_005c4d4c[];

// USA 005C4C08 <- EU 005C4BE0 (Ghidra, non-matching)
// GLOBAL DAT_005c4d30 undefined4 *
// GLOBAL DAT_005c4d34 undefined4 *
// GLOBAL DAT_005c4d38 undefined4 *
// GLOBAL DAT_005c4d48 undefined4
// GLOBAL DAT_005c4d8c undefined4
// GLOBAL DAT_005c4d90 undefined4
// GLOBAL DAT_005c4d94 undefined4 *
// GLOBAL DAT_005c4d98 undefined4
// GLOBAL DAT_005c4d9c undefined4 *
// GLOBAL DAT_005c4da0 undefined4 *
// GLOBAL DAT_005c4db0 undefined4
// GLOBAL DAT_005c4db4 undefined4 *
// GLOBAL DAT_005c4db8 undefined
// GLOBAL DAT_005c4ddc uint *
// GLOBAL DAT_005c4de0 undefined4
// GLOBAL DAT_005c4de4 undefined4 *
// GLOBAL DAT_005c4de8 undefined4
// GLOBAL s_AttemptedLeft_005c4d58 string
// GLOBAL s_AttemptedRight_005c4d68 string
// GLOBAL s_MojSwitchWater_005c4dcc string
// GLOBAL s_SetLeft_005c4d78 string
// GLOBAL s_SetRight_005c4d80 string
// GLOBAL s_SwitchWater_005c4da4 string
// GLOBAL s_TurnLeft_005c4d3c string
// GLOBAL s_TurnRight_005c4d4c string

undefined8 func_005C4C08(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define puStack_14 (*(undefined * *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  #define local_c (*(char * *)(albw_frame + 0x14))
  puVar1 = DAT_005c4d30;
  *DAT_005c4d30 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  local_18 = DAT_005c4d48;
  puVar1 = DAT_005c4d34;
  *DAT_005c4d34 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005c4d38;
  DAT_005c4d38[1] = s_TurnLeft_005c4d3c;
  *puVar1 = local_18;
  puVar1[3] = s_TurnRight_005c4d4c;
  puVar1[2] = local_18;
  puVar1[5] = s_AttemptedLeft_005c4d58;
  puVar1[4] = local_18;
  puVar1[7] = s_AttemptedRight_005c4d68;
  puVar1[6] = local_18;
  puVar1[9] = s_SetLeft_005c4d78;
  puVar1[8] = local_18;
  puVar1[10] = local_18;
  puVar1[0xb] = s_SetRight_005c4d80;
  puVar1 = DAT_005c4d94;
  DAT_005c4d94[1] = s_TurnLeft_005c4d3c + 4;
  *puVar1 = local_18;
  puVar1 = DAT_005c4d9c;
  DAT_005c4d9c[1] = s_TurnRight_005c4d4c + 4;
  *puVar1 = local_18;
  puVar1 = DAT_005c4da0;
  DAT_005c4da0[1] = s_SwitchWater_005c4da4;
  *puVar1 = local_18;
  puVar1 = DAT_005c4db4;
  puVar3 = DAT_005c4db4 + 3;
  *DAT_005c4db4 = 0;
  puVar1[1] = 5;
  puVar1[2] = puVar3;
  puStack_14 = &DAT_005c4db8;
  uStack_10 = local_18;
  local_c = s_MojSwitchWater_005c4dcc;
  uVar2 = func_0019B51C(DAT_005c4de4,DAT_005c4de0,*DAT_005c4ddc,(int)&uStack_10,DAT_005c4db4,
                        &local_18,0);
  return CONCAT44(DAT_005c4de8,uVar2);
}


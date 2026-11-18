#include "ghidra_types.h"

extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_004A9F98(int param_1,uint *param_2,uint param_3,float fparam_0,float fparam_1);
extern uint DAT_0054dffc;
extern undefined4 DAT_0054e000;
extern undefined4 DAT_0054e004;
extern float DAT_0054e008;
extern float DAT_0054e00c;
extern int *DAT_0054e010;

// USA 0054DF14 <- EU 0054DEEC (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4 *
// PARAM param_6 Stack[0x4]:4 undefined4
// PARAM param_7 Stack[0x8]:4 int
// GLOBAL DAT_0054dffc uint
// GLOBAL DAT_0054e000 undefined4
// GLOBAL DAT_0054e004 undefined4
// GLOBAL DAT_0054e008 float
// GLOBAL DAT_0054e00c float
// GLOBAL DAT_0054e010 int *

int func_0054DF14(int param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 *param_5,
                 undefined4 param_6,int param_7,float fparam_0)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define local_a8 ((byte *)(albw_frame + 0x8))
  #define uStack_98 (*(uint *)(albw_frame + 0x18))
  #define local_94 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_90 (*(undefined4 *)(albw_frame + 0x20))
  #define local_8c (*(undefined4 *)(albw_frame + 0x24))
  #define local_88 (*(undefined4 *)(albw_frame + 0x28))
  #define local_84 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_80 (*(undefined1 *)(albw_frame + 0x30))
  #define local_7f (*(undefined1 *)(albw_frame + 0x31))
  #define local_7c (*(uint *)(albw_frame + 0x34))
  #define local_78 (*(undefined4 *)(albw_frame + 0x38))
  #define local_70 (*(undefined4 *)(albw_frame + 0x40))
  #define local_68 (*(undefined4 *)(albw_frame + 0x48))
  #define local_60 (*(uint *)(albw_frame + 0x50))
  #define uStack_5c (*(undefined4 *)(albw_frame + 0x54))
  #define local_50 (*(float *)(albw_frame + 0x60))
  #define local_4c (*(undefined4 *)(albw_frame + 0x64))
  #define local_48 (*(undefined4 *)(albw_frame + 0x68))
  #define local_44 (*(undefined4 *)(albw_frame + 0x6c))
  uStack_98 = param_3 & 0xffff0000 | DAT_0054dffc;
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_a8[3] = 0;
  local_94 = 0xff;
  local_a8[4] = 0;
  local_a8[5] = 0;
  local_a8[6] = 0;
  local_a8[7] = 0;
  local_a8[8] = 0;
  local_a8[9] = 0;
  local_a8[10] = 0;
  local_a8[0xb] = 0;
  local_a8[0xc] = 0;
  local_a8[0xd] = 0;
  local_a8[0xe] = 0;
  local_a8[0xf] = 0;
  local_90 = 0;
  local_8c = 0;
  local_88 = 0;
  local_84 = DAT_0054e000;
  local_80 = 0;
  local_7f = 1;
  func_00110D44(&local_7c,local_a8,0x2a);
  if (param_7 == 0) {
    local_78 = 0;
  }
  else {
    local_78 = *(undefined4 *)(param_1 + 0x4d0);
  }
  local_4c = *param_5;
  local_48 = param_5[1];
  local_44 = param_5[2];
  local_70 = *(undefined4 *)(param_1 + 0x2cc);
  local_7c = param_2;
  local_68 = param_6;
  local_60 = param_3;
  uStack_5c = param_4;
  local_50 = fparam_0;
  iVar1 = func_004A9F98(*DAT_0054e010,&local_7c,0xff,DAT_0054e00c,DAT_0054e008);
  return iVar1;
}


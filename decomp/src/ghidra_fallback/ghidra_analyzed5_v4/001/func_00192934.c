#include "ghidra_types.h"

extern int func_004A8030(int param_1,int *param_2,uint param_3);
extern uint DAT_00192a2c;
extern undefined4 DAT_00192a30;
extern float DAT_00192a34;
extern float DAT_00192a38;
extern undefined4 DAT_00192a3c;
extern int *DAT_00192a40;
extern float DAT_00192a44;

// USA 00192934 <- EU 00192934 (Ghidra, non-matching)
// GLOBAL DAT_00192a2c uint
// GLOBAL DAT_00192a30 undefined4
// GLOBAL DAT_00192a34 float
// GLOBAL DAT_00192a38 float
// GLOBAL DAT_00192a3c undefined4
// GLOBAL DAT_00192a40 int *
// GLOBAL DAT_00192a44 float

void func_00192934(int param_1,undefined4 param_2,uint param_3)

{
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(undefined4 *)(albw_frame + 0x0))
  #define local_4c (*(float *)(albw_frame + 0x4))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x8))
  #define local_44 (*(undefined4 *)(albw_frame + 0xc))
  #define local_40 (*(float *)(albw_frame + 0x10))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x14))
  #define local_38 (*(int *)(albw_frame + 0x18))
  #define local_34 (*(int *)(albw_frame + 0x1c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2c (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_28 (*(uint *)(albw_frame + 0x28))
  #define local_24 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x30))
  #define local_1c (*(undefined4 * *)(albw_frame + 0x34))
  #define local_18 (*(undefined1 * *)(albw_frame + 0x38))
  #define local_14 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_10 (*(undefined1 *)(albw_frame + 0x40))
  #define local_f (*(undefined1 *)(albw_frame + 0x41))
  local_18 = (undefined1 *)&local_50;
  uStack_28 = DAT_00192a2c | param_3 & 0xffff0000;
  local_38 = 0;
  local_30 = 0;
  local_2c = 0;
  local_20 = 0;
  local_14 = DAT_00192a30;
  local_34 = param_1 + 0x478;
  local_10 = 0;
  local_f = 1;
  local_50 = *(undefined4 *)(param_1 + 0x3d0);
  uStack_48 = *(undefined4 *)(param_1 + 0x3d8);
  local_44 = *(undefined4 *)(param_1 + 0x3d0);
  uStack_3c = *(undefined4 *)(param_1 + 0x3d8);
  local_1c = &local_44;
  local_4c = *(float *)(param_1 + 0x3d4) + DAT_00192a34;
  local_40 = *(float *)(param_1 + 0x3d4) - DAT_00192a38;
  local_24 = 0x9f;
  *(undefined4 *)(param_1 + 0x438) = DAT_00192a3c;
  *(undefined1 *)(param_1 + 0x448) = 0;
  func_004A8030(*DAT_00192a40,&local_38,0xf);
  if (*(char *)(param_1 + 0x448) != '\0') {
    *(float *)(param_1 + 0x438) = *(float *)(param_1 + 0x438) - DAT_00192a44;
  }
  return;
}


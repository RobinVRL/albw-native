#include "ghidra_types.h"

extern int func_00121DF8(int param_1,int param_2,uint param_3,int param_4);
extern int func_0052E94C(int param_1,int param_2);
extern float DAT_004ed360;
extern int *DAT_004ed364;
extern int *DAT_004ed368;

// USA 004ED2F4 <- EU 004ED2CC (Ghidra, non-matching)
// GLOBAL DAT_004ed360 float
// GLOBAL DAT_004ed364 int *
// GLOBAL DAT_004ed368 int *

void func_004ED2F4(int param_1)

{
  float fVar1;
  int *piVar2;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 ((undefined1 *)(albw_frame + 0x0))
  #define local_3c (*(undefined4 *)(albw_frame + 0x4))
  #define local_34 (*(undefined4 *)(albw_frame + 0xc))
  #define local_24 (*(undefined2 *)(albw_frame + 0x1c))
  #define local_22 (*(undefined2 *)(albw_frame + 0x1e))
  #define local_20 (*(undefined4 *)(albw_frame + 0x20))
  #define local_1c (*(undefined4 *)(albw_frame + 0x24))
  #define local_14 (*(undefined1 *)(albw_frame + 0x2c))
  fVar1 = DAT_004ed360;
  *(float *)(param_1 + 0x80) = DAT_004ed360;
  piVar2 = DAT_004ed364;
  *(bool *)(param_1 + 0x88) = *(float *)(param_1 + 0x84) != fVar1;
  *(int *)(param_1 + 0x10) = *piVar2 + 0x10;
  local_3c = 0;
  local_34 = 0;
  local_24 = 0;
  local_40[0] = 0;
  local_22 = 0;
  local_20 = 0;
  local_1c = 0;
  local_14 = 0;
  func_0052E94C(*DAT_004ed368,(int)local_40);
  func_00121DF8(*(int *)(param_1 + 0x18),(int)local_40,0,*(int *)(param_1 + 0x10));
  *(undefined1 *)(param_1 + 0xe2) = 0;
  *(undefined1 *)(param_1 + 0xe1) = 0;
  return;
}


#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_004356B4(int *param_1);
extern float DAT_0024f2c4;
extern float DAT_0024f2c8;

// USA 0024F260 <- EU 0024F260 (Ghidra, non-matching)
// GLOBAL DAT_0024f2c4 float
// GLOBAL DAT_0024f2c8 float

undefined4 func_0024F260(int param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_2c (*(float *)(albw_frame + 0x4))
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(undefined4 *)(albw_frame + 0xc))
  #define local_18 (*(float *)(albw_frame + 0x18))
  #define fStack_14 (*(float *)(albw_frame + 0x1c))
  #define local_10 (*(float *)(albw_frame + 0x20))
  fStack_14 = *(float *)(param_1 + 0x4a8) * DAT_0024f2c4;
  local_18 = DAT_0024f2c8;
  local_10 = DAT_0024f2c8;
  func_00115C54(&local_2c,(float *)(param_1 + 0x3d0),&local_18);
  iVar1 = *(int *)(param_1 + 0x4b4);
  *(float *)(iVar1 + 4) = local_2c;
  *(undefined4 *)(iVar1 + 8) = local_28;
  *(undefined4 *)(iVar1 + 0xc) = local_24;
  return func_004356B4(*(int **)(param_1 + 0x4b4));
}


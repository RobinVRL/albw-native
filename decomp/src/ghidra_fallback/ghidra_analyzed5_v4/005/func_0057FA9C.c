#include "ghidra_types.h"

extern int func_003C8AB4(int *param_1);
extern int func_00499AF0(int param_1,int *param_2,int *param_3);
extern undefined4 DAT_0057faf0;
extern undefined DAT_0057faf4;
extern int DAT_0057faf8;

// USA 0057FA9C <- EU 0057FA74 (Ghidra, non-matching)
// GLOBAL DAT_0057faf0 undefined4
// GLOBAL DAT_0057faf4 undefined
// GLOBAL DAT_0057faf8 int

int func_0057FA9C(int *param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(undefined4 *)(albw_frame + 0x0))
  #define local_2c (*(int * *)(albw_frame + 0x4))
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(undefined4 *)(albw_frame + 0xc))
  #define local_20 (*(int *)(albw_frame + 0x10))
  #define local_1c (*(undefined * *)(albw_frame + 0x14))
  iVar1 = DAT_0057faf8;
  local_2c = (int *)0x0;
  local_30 = DAT_0057faf0;
  local_1c = &DAT_0057faf4;
  local_20 = DAT_0057faf8;
  local_24 = (**(code **)(*param_1 + 0x70))(param_1);
  local_28 = iVar1;
  iVar1 = func_00499AF0((int)&local_30,&local_28,&local_20);
  param_1[0x14] = iVar1;
  func_003C8AB4(local_2c);
  return (iVar1 >> 0x1f) + 1;
}


#include "ghidra_types.h"

extern int func_004CEA18(int param_1,int param_2,uint param_3);
extern int func_00584C14(int param_1,int *param_2);
extern undefined4 DAT_004f32ec;
extern int DAT_004f32f0;
extern undefined4 DAT_004f32f4;

// USA 004F32A4 <- EU 004F327C (Ghidra, non-matching)
// GLOBAL DAT_004f32ec undefined4
// GLOBAL DAT_004f32f0 int
// GLOBAL DAT_004f32f4 undefined4

undefined4 func_004F32A4(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(undefined4 *)(albw_frame + 0x4))
  iVar1 = DAT_004f32f0;
  local_1c = DAT_004f32ec;
  local_20 = DAT_004f32f0;
  uVar2 = func_00584C14(*(int *)(param_1 + 0x40c),&local_20);
  func_004CEA18(*(int *)(param_1 + 0x40c),param_2 ^ 1,uVar2);
  local_20 = iVar1;
  local_1c = DAT_004f32f4;
  uVar2 = func_00584C14(*(int *)(param_1 + 0x40c),&local_20);
  return func_004CEA18(*(int *)(param_1 + 0x40c),param_2,uVar2);
}


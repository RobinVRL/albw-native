#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern undefined4 func_004CF864(int param_1,uint param_2,uint param_3,float fparam_0);
extern undefined4 DAT_0025f4d8;
extern undefined4 DAT_0025f4dc;
extern undefined4 DAT_0025f4e0;

// USA 0025F414 <- EU 0025F43C (Ghidra, non-matching)
// GLOBAL DAT_0025f4d8 undefined4
// GLOBAL DAT_0025f4dc undefined4
// GLOBAL DAT_0025f4e0 undefined4

void func_0025F414(int param_1)

{
  uint in_r12;
  float in_s0;
  undefined4 uVar1;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_78 ((uint *)(albw_frame + 0x8))
  #define local_70 (*(undefined4 * *)(albw_frame + 0x10))
  #define local_6c (*(undefined4 *)(albw_frame + 0x14))
  #define local_68 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_64 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_60 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_5c (*(undefined4 *)(albw_frame + 0x24))
  #define local_58 (*(uint *)(albw_frame + 0x28))
  #define local_24 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_20 (*(undefined1 *)(albw_frame + 0x60))
  func_004CF864(*(int *)(param_1 + 0x6c),1,0xffffffff,in_s0);
  local_78[1] = 3;
  local_70 = &local_6c;
  local_78[0] = 1;
  local_6c = 1;
  local_24 = 10;
  local_20 = 0;
  local_58 = in_r12 | 0xff;
  local_68 = DAT_0025f4dc;
  uStack_64 = DAT_0025f4d8;
  uStack_60 = DAT_0025f4e0;
  uStack_5c = DAT_0025f4d8;
  uVar1 = DAT_0025f4d8;
  func_0016898C(*(int *)(param_1 + 0x78),local_78);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x78) + 0x14) + 0x10) = uVar1;
  return;
}


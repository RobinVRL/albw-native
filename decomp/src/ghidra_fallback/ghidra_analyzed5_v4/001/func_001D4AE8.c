#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern float DAT_001d4bac;
extern undefined4 DAT_001d4bb0;
extern undefined4 DAT_001d4bb4;

// USA 001D4AE8 <- EU 001D4AE8 (Ghidra, non-matching)
// GLOBAL DAT_001d4bac float
// GLOBAL DAT_001d4bb0 undefined4
// GLOBAL DAT_001d4bb4 undefined4

void func_001D4AE8(int param_1,undefined4 param_2,float fparam_0)

{
  int iVar1;
  uint in_r12;
  float fVar2;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_78 ((uint *)(albw_frame + 0x8))
  #define local_70 (*(undefined4 * *)(albw_frame + 0x10))
  #define local_6c (*(undefined4 *)(albw_frame + 0x14))
  #define local_68 (*(float *)(albw_frame + 0x18))
  #define uStack_64 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_60 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_5c (*(undefined4 *)(albw_frame + 0x24))
  #define local_58 (*(uint *)(albw_frame + 0x28))
  #define local_24 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_20 (*(undefined1 *)(albw_frame + 0x60))
  local_70 = &local_6c;
  local_78[1] = 3;
  local_20 = 0;
  local_24 = 10;
  local_78[0] = 1;
  local_60 = DAT_001d4bb4;
  uStack_5c = DAT_001d4bb0;
  local_68 = DAT_001d4bac;
  uStack_64 = DAT_001d4bb0;
  local_58 = in_r12 | 0xff;
  fVar2 = DAT_001d4bac;
  local_6c = param_2;
  func_0016898C(*(int *)(param_1 + 0x4bc),local_78);
  iVar1 = *(int *)(*(int *)(param_1 + 0x4bc) + 0x14);
  if (*(float *)(iVar1 + 8) != fVar2) {
    *(float *)(iVar1 + 8) = fVar2;
    *(undefined1 *)(iVar1 + 0x26) = 1;
  }
  *(float *)(*(int *)(*(int *)(param_1 + 0x4bc) + 0x14) + 0x10) = fparam_0;
  return;
}


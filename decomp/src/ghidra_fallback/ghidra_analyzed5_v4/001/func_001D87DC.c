#include "ghidra_types.h"

extern undefined4 func_00151148(int param_1,int param_2);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_004CF478(int param_1,int param_2);
extern float fRam001d88b8;
extern undefined4 uRam001d88bc;
extern undefined4 uRam001d88c0;

// USA 001D87DC <- EU 001D87DC (Ghidra, non-matching)
// GLOBAL UNK_001d88b8 float
// GLOBAL UNK_001d88bc undefined4
// GLOBAL UNK_001d88c0 undefined4

void func_001D87DC(int param_1,undefined4 param_2,float fparam_0)

{
  int iVar1;
  uint in_r3;
  float fVar2;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define auStack_78 ((uint *)(albw_frame + 0x8))
  #define puStack_70 (*(undefined4 * *)(albw_frame + 0x10))
  #define uStack_6c (*(undefined4 *)(albw_frame + 0x14))
  #define fStack_68 (*(float *)(albw_frame + 0x18))
  #define uStack_64 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_60 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_5c (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_58 (*(uint *)(albw_frame + 0x28))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x5c))
  #define uStack_20 (*(undefined1 *)(albw_frame + 0x60))
  func_004CF478(*(int *)(param_1 + 0x40c),1);
  func_00151148(*(int *)(param_1 + 0x468),1);
  auStack_78[1] = 3;
  puStack_70 = &uStack_6c;
  uStack_20 = 0;
  uStack_24 = 10;
  auStack_78[0] = 1;
  uStack_60 = uRam001d88c0;
  uStack_5c = uRam001d88bc;
  uStack_58 = in_r3 | 0xff;
  fStack_68 = fRam001d88b8;
  uStack_64 = uRam001d88bc;
  fVar2 = fRam001d88b8;
  uStack_6c = param_2;
  func_0016898C(*(int *)(param_1 + 0x410),auStack_78);
  iVar1 = *(int *)(*(int *)(param_1 + 0x410) + 0x14);
  if (*(float *)(iVar1 + 8) != fVar2) {
    *(float *)(iVar1 + 8) = fVar2;
    *(undefined1 *)(iVar1 + 0x26) = 1;
  }
  *(float *)(*(int *)(*(int *)(param_1 + 0x410) + 0x14) + 0x10) = fparam_0;
  return;
}


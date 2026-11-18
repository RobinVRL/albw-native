#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_004CF478(int param_1,int param_2);
extern int func_0065F6A4(undefined4 *param_1,undefined1 param_2);
extern float fRam00249a10;
extern float fRam00249a14;
extern undefined4 uRam00249a18;

// USA 00249920 <- EU 00249920 (Ghidra, non-matching)
// GLOBAL UNK_00249a10 float
// GLOBAL UNK_00249a14 float
// GLOBAL UNK_00249a18 undefined4

void func_00249920(int param_1,int param_2)

{
  uint in_r12;
  uint in_fpscr;
  float fVar1;
  float fVar2;
  float fVar3;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define auStack_80 ((uint *)(albw_frame + 0x0))
  #define puStack_78 (*(undefined4 * *)(albw_frame + 0x8))
  #define uStack_74 (*(undefined4 *)(albw_frame + 0xc))
  #define fStack_70 (*(float *)(albw_frame + 0x10))
  #define fStack_6c (*(float *)(albw_frame + 0x14))
  #define uStack_68 (*(undefined4 *)(albw_frame + 0x18))
  #define fStack_64 (*(float *)(albw_frame + 0x1c))
  #define uStack_60 (*(uint *)(albw_frame + 0x20))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x54))
  #define uStack_28 (*(undefined1 *)(albw_frame + 0x58))
  func_004CF478(*(int *)(param_1 + 0x478),1);
  auStack_80[1] = 3;
  puStack_78 = &uStack_74;
  auStack_80[0] = 1;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_74 = 2;
  uStack_60 = in_r12 | 0xff;
  fStack_70 = fRam00249a14;
  fStack_6c = fRam00249a10;
  uStack_68 = uRam00249a18;
  fStack_64 = fRam00249a10;
  fVar1 = fRam00249a14;
  fVar2 = fRam00249a10;
  fVar3 = fRam00249a14;
  func_0016898C(*(int *)(param_1 + 0x47c),auStack_80);
  *(int *)(param_1 + 0x4cc) = param_2;
  if (param_2 == 0) {
    *(float *)(param_1 + 0x4d0) = fVar3;
  }
  else {
    fVar1 = (float)VectorUnsignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x4d0) = fVar2 / fVar1;
  }
  *(undefined4 *)(param_1 + 0x4c8) = 0;
  *(float *)(param_1 + 0x4ac) = fVar2;
  *(float *)(param_1 + 0x4b0) = fVar2;
  *(float *)(param_1 + 0x4b4) = fVar2;
  *(float *)(param_1 + 0x4d8) = fVar2;
  func_0065F6A4((undefined4 *)(param_1 + 0x488),2);
  return;
}


#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern undefined4 DAT_00197504;
extern float DAT_00197508;
extern undefined4 DAT_0019750c;

// USA 00197444 <- EU 00197444 (Ghidra, non-matching)
// GLOBAL DAT_00197504 undefined4
// GLOBAL DAT_00197508 float
// GLOBAL DAT_0019750c undefined4

void func_00197444(int param_1)

{
  int iVar1;
  uint in_r12;
  undefined4 uVar2;
  float fVar3;
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
  auStack_78[1] = 3;
  puStack_70 = &uStack_6c;
  uStack_20 = 0;
  uStack_6c = 0;
  uStack_24 = 10;
  auStack_78[0] = 1;
  fStack_68 = DAT_00197508;
  uStack_64 = DAT_00197504;
  uStack_60 = DAT_0019750c;
  uStack_5c = DAT_00197504;
  uStack_58 = in_r12 | 0xff;
  uVar2 = DAT_00197504;
  fVar3 = DAT_00197508;
  func_0016898C(*(int *)(param_1 + 0x4a0),auStack_78);
  iVar1 = *(int *)(*(int *)(param_1 + 0x4a0) + 0x14);
  if (*(float *)(iVar1 + 8) != fVar3) {
    *(float *)(iVar1 + 8) = fVar3;
    *(undefined1 *)(iVar1 + 0x26) = 1;
  }
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4a0) + 0x14) + 0x10) = uVar2;
  return;
}


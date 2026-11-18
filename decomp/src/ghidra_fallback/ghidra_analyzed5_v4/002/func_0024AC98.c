#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_004CF478(int param_1,int param_2);
extern float fRam0024ad20;
extern float fRam0024ad24;
extern int *piRam0024ad1c;
extern undefined4 DAT_0024aeb0;
extern undefined4 DAT_0024aeb4;
extern undefined4 DAT_0024aeb8;

// USA 0024AC98 <- EU 0024AC98 (Ghidra, non-matching)
// GLOBAL DAT_0024aeb0 undefined4
// GLOBAL DAT_0024aeb4 undefined4
// GLOBAL DAT_0024aeb8 undefined4
// GLOBAL UNK_0024ad1c int *
// GLOBAL UNK_0024ad20 float
// GLOBAL UNK_0024ad24 float

void func_0024AC98(int param_1)

{
  uint uVar1;
  int iVar2;
  uint in_r12;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define auStack_78 ((uint *)(albw_frame + 0x8))
  #define puStack_70 (*(undefined4 * *)(albw_frame + 0x10))
  #define uStack_6c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_68 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_64 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_60 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_5c (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_58 (*(uint *)(albw_frame + 0x28))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x5c))
  #define uStack_20 (*(undefined1 *)(albw_frame + 0x60))
  func_004CF478(*(int *)(param_1 + 0x40c),0);
  func_00151148(*(int *)(param_1 + 0x418),0);
  uVar1 = func_00111A64((uint *)(*piRam0024ad1c + 0x660));
  fVar5 = fRam0024ad24;
  fVar4 = fRam0024ad20;
  iVar2 = (int)((ulonglong)uVar1 * 0x3c >> 0x20) + 0x78;
  *(int *)(param_1 + 0x45c) = iVar2;
  if (iVar2 == 0) {
    *(float *)(param_1 + 0x460) = fVar4;
  }
  else {
    fVar3 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x460) = fVar5 / fVar3;
  }
  *(undefined4 *)(param_1 + 0x458) = 0;
  auStack_78[1] = 3;
  puStack_70 = &uStack_6c;
  uStack_20 = 0;
  uStack_6c = 2;
  uStack_24 = 10;
  auStack_78[0] = 1;
  uStack_68 = DAT_0024aeb4;
  uStack_64 = DAT_0024aeb0;
  uStack_60 = DAT_0024aeb8;
  uStack_5c = DAT_0024aeb0;
  uStack_58 = in_r12 | 0xff;
  func_0016898C(*(int *)(param_1 + 0x410),auStack_78);
  iVar2 = *(int *)(*(int *)(param_1 + 0x410) + 0x14);
  if (*(float *)(iVar2 + 8) != fVar4) {
    *(float *)(iVar2 + 8) = fVar4;
    *(undefined1 *)(iVar2 + 0x26) = 1;
  }
  *(float *)(*(int *)(*(int *)(param_1 + 0x410) + 0x14) + 0x10) = fVar5;
  return;
}


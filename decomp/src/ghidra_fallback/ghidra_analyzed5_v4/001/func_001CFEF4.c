#include "ghidra_types.h"

extern undefined4 func_00151148(int param_1,int param_2);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_004CF478(int param_1,int param_2);
extern float fRam001cffe4;
extern undefined4 uRam001cffe8;
extern undefined4 uRam001cffec;

// USA 001CFEF4 <- EU 001CFEF4 (Ghidra, non-matching)
// GLOBAL UNK_001cffe4 float
// GLOBAL UNK_001cffe8 undefined4
// GLOBAL UNK_001cffec undefined4

void func_001CFEF4(int param_1,undefined4 param_2,float fparam_0)

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
  func_004CF478(*(int *)(param_1 + 0x4f4),1);
  func_00151148(*(int *)(param_1 + 0x574),1);
  if (*(char *)(param_1 + 0x5df) != '\x03') {
    puStack_70 = &uStack_6c;
    auStack_78[1] = 3;
    uStack_20 = 0;
    uStack_24 = 10;
    auStack_78[0] = 1;
    uStack_60 = uRam001cffec;
    uStack_5c = uRam001cffe8;
    uStack_58 = in_r3 | 0xff;
    fStack_68 = fRam001cffe4;
    uStack_64 = uRam001cffe8;
    fVar2 = fRam001cffe4;
    uStack_6c = param_2;
    func_0016898C(*(int *)(param_1 + 0x4f8),auStack_78);
    iVar1 = *(int *)(*(int *)(param_1 + 0x4f8) + 0x14);
    if (*(float *)(iVar1 + 8) != fVar2) {
      *(float *)(iVar1 + 8) = fVar2;
      *(undefined1 *)(iVar1 + 0x26) = 1;
    }
    *(float *)(*(int *)(*(int *)(param_1 + 0x4f8) + 0x14) + 0x10) = fparam_0;
  }
  *(undefined1 *)(param_1 + 0x5de) = 0;
  return;
}


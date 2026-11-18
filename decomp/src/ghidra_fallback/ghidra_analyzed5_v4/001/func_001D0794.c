#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_004CF478(int param_1,int param_2);
extern float fRam001cffe4;
extern float fRam001d0848;
extern float fRam001d0850;
extern float fRam001d0854;
extern undefined4 uRam001cffe8;
extern undefined4 uRam001cffec;
extern undefined4 uRam001d0858;
extern undefined4 *puRam001d084c;

// USA 001D0794 <- EU 001D0794 (Ghidra, non-matching)
// GLOBAL UNK_001cffe4 float
// GLOBAL UNK_001cffe8 undefined4
// GLOBAL UNK_001cffec undefined4
// GLOBAL UNK_001d0848 float
// GLOBAL UNK_001d084c undefined4 *
// GLOBAL UNK_001d0850 float
// GLOBAL UNK_001d0854 float
// GLOBAL UNK_001d0858 undefined4

void func_001D0794(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint in_r3;
  uint in_fpscr;
  float fVar3;
  int iVar4;
  float fVar5;
  undefined8 in_d8;
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
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x64))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x68))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x6c))
  uStack_18 = (undefined4)in_d8;
  uStack_14 = (undefined4)((ulonglong)in_d8 >> 0x20);
  func_004CF478(*(int *)(param_1 + 0x4f4),1);
  func_00151148(*(int *)(param_1 + 0x574),1);
  fVar5 = fRam001d0848;
  uVar2 = func_00111A64((uint *)*puRam001d084c);
  uVar1 = uRam001d0858;
  fVar3 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
  iVar4 = VectorFloatToUnsigned(fRam001d0854 + fVar3 * fRam001d0850 * fVar5 * fRam001d0854,3);
  *(int *)(param_1 + 0x5a0) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0x5a4) = uVar1;
  }
  else {
    fVar3 = (float)VectorUnsignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x5a4) = fVar5 / fVar3;
  }
  *(undefined4 *)(param_1 + 0x59c) = 0;
  *(undefined4 *)(param_1 + 0x5c4) = uVar1;
  uStack_1c = uStack_18;
  uStack_18 = uStack_14;
  func_004CF478(*(int *)(param_1 + 0x4f4),1);
  func_00151148(*(int *)(param_1 + 0x574),1);
  if (*(char *)(param_1 + 0x5df) != '\x03') {
    puStack_70 = &uStack_6c;
    auStack_78[1] = 3;
    uStack_20 = 0;
    uStack_6c = 0;
    uStack_24 = 10;
    auStack_78[0] = 1;
    uStack_60 = uRam001cffec;
    uStack_5c = uRam001cffe8;
    uStack_58 = in_r3 | 0xff;
    fStack_68 = fRam001cffe4;
    uStack_64 = uRam001cffe8;
    fVar3 = fRam001cffe4;
    func_0016898C(*(int *)(param_1 + 0x4f8),auStack_78);
    iVar4 = *(int *)(*(int *)(param_1 + 0x4f8) + 0x14);
    if (*(float *)(iVar4 + 8) != fVar3) {
      *(float *)(iVar4 + 8) = fVar3;
      *(undefined1 *)(iVar4 + 0x26) = 1;
    }
    *(float *)(*(int *)(*(int *)(param_1 + 0x4f8) + 0x14) + 0x10) = fVar5;
  }
  *(undefined1 *)(param_1 + 0x5de) = 0;
  return;
}


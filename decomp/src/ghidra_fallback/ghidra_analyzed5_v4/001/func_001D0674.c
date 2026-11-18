#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_004CF478(int param_1,int param_2);
extern float fRam001cffe4;
extern float fRam001d0770;
extern float fRam001d0774;
extern float fRam001d0778;
extern float fRam001d077c;
extern float fRam001d0780;
extern float fRam001d0788;
extern float fRam001d078c;
extern float fRam001d0790;
extern undefined4 uRam001cffe8;
extern undefined4 uRam001cffec;
extern undefined4 uRam001d0784;
extern undefined4 *puRam001d076c;

// USA 001D0674 <- EU 001D0674 (Ghidra, non-matching)
// GLOBAL UNK_001cffe4 float
// GLOBAL UNK_001cffe8 undefined4
// GLOBAL UNK_001cffec undefined4
// GLOBAL UNK_001d076c undefined4 *
// GLOBAL UNK_001d0770 float
// GLOBAL UNK_001d0774 float
// GLOBAL UNK_001d0778 float
// GLOBAL UNK_001d077c float
// GLOBAL UNK_001d0780 float
// GLOBAL UNK_001d0784 undefined4
// GLOBAL UNK_001d0788 float
// GLOBAL UNK_001d078c float
// GLOBAL UNK_001d0790 float

void func_001D0674(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint in_r3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  undefined8 in_d8;
  undefined8 in_d9;
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
  #define uStack_20 (*(uint *)(albw_frame + 0x60))
  #define uStack_1c (*(uint *)(albw_frame + 0x64))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x68))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x6c))
  uStack_20 = (uint)in_d8;
  uStack_1c = (uint)((ulonglong)in_d8 >> 0x20);
  uStack_18 = (uint)in_d9;
  uStack_14 = (undefined4)((ulonglong)in_d9 >> 0x20);
  func_004CF478(*(int *)(param_1 + 0x4f4),1);
  func_00151148(*(int *)(param_1 + 0x574),1);
  puVar1 = puRam001d076c;
  fVar9 = fRam001d0770;
  uVar3 = func_00111A64((uint *)*puRam001d076c);
  fVar8 = fRam001d0774;
  fVar4 = (float)VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
  fVar4 = fRam001d077c + fVar4 * fRam001d0774 * fVar9 * fRam001d0778;
  iVar7 = VectorFloatToUnsigned(fVar4,3);
  if (iVar7 == 0) {
    fVar4 = fRam001d0780;
  }
  *(int *)(param_1 + 0x5a0) = iVar7;
  if (iVar7 == 0) {
    *(float *)(param_1 + 0x5a4) = fVar4;
  }
  else {
    fVar4 = (float)VectorUnsignedToFloat(iVar7,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x5a4) = fVar9 / fVar4;
  }
  uVar2 = uRam001d0784;
  *(undefined4 *)(param_1 + 0x59c) = 0;
  *(undefined4 *)(param_1 + 0x5c4) = uVar2;
  fVar4 = fRam001d0788;
  uVar3 = func_00111A64((uint *)*puVar1);
  uStack_18 = uStack_1c;
  fVar5 = (float)VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
  fVar6 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 1000),(byte)(in_fpscr >> 0x15) & 3);
  *(int *)(param_1 + 0x5b8) = (int)(fVar6 + (fVar5 * fVar8 * fVar4 + fRam001d078c) * fRam001d0790);
  uStack_1c = uStack_20;
  func_004CF478(*(int *)(param_1 + 0x4f4),1);
  func_00151148(*(int *)(param_1 + 0x574),1);
  if (*(char *)(param_1 + 0x5df) != '\x03') {
    puStack_70 = &uStack_6c;
    auStack_78[1] = 3;
    uStack_20 = uStack_20 & 0xffffff00;
    uStack_6c = 1;
    uStack_24 = 10;
    auStack_78[0] = 1;
    uStack_60 = uRam001cffec;
    uStack_5c = uRam001cffe8;
    uStack_58 = in_r3 | 0xff;
    fStack_68 = fRam001cffe4;
    uStack_64 = uRam001cffe8;
    fVar8 = fRam001cffe4;
    func_0016898C(*(int *)(param_1 + 0x4f8),auStack_78);
    iVar7 = *(int *)(*(int *)(param_1 + 0x4f8) + 0x14);
    if (*(float *)(iVar7 + 8) != fVar8) {
      *(float *)(iVar7 + 8) = fVar8;
      *(undefined1 *)(iVar7 + 0x26) = 1;
    }
    *(float *)(*(int *)(*(int *)(param_1 + 0x4f8) + 0x14) + 0x10) = fVar9;
  }
  *(undefined1 *)(param_1 + 0x5de) = 0;
  return;
}


#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern undefined4 DAT_001963e8;
extern float DAT_001963ec;
extern undefined4 DAT_001963f0;

// USA 00196328 <- EU 00196328 (Ghidra, non-matching)
// GLOBAL DAT_001963e8 undefined4
// GLOBAL DAT_001963ec float
// GLOBAL DAT_001963f0 undefined4

void func_00196328(int param_1)

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
  uStack_6c = 2;
  uStack_24 = 10;
  auStack_78[0] = 1;
  fStack_68 = DAT_001963ec;
  uStack_64 = DAT_001963e8;
  uStack_60 = DAT_001963f0;
  uStack_5c = DAT_001963e8;
  uStack_58 = in_r12 | 0xff;
  uVar2 = DAT_001963e8;
  fVar3 = DAT_001963ec;
  func_0016898C(*(int *)(param_1 + 0x410),auStack_78);
  iVar1 = *(int *)(*(int *)(param_1 + 0x410) + 0x14);
  if (*(float *)(iVar1 + 8) != fVar3) {
    *(float *)(iVar1 + 8) = fVar3;
    *(undefined1 *)(iVar1 + 0x26) = 1;
  }
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x410) + 0x14) + 0x10) = uVar2;
  return;
}


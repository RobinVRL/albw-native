#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern undefined4 DAT_002c5978;
extern undefined4 DAT_002c597c;
extern undefined4 DAT_002c5980;

// USA 002C58C0 <- EU 002C589C (Ghidra, non-matching)
// GLOBAL DAT_002c5978 undefined4
// GLOBAL DAT_002c597c undefined4
// GLOBAL DAT_002c5980 undefined4

void func_002C58C0(int param_1)

{
  int iVar1;
  uint unaff_r6;
  float fVar2;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define auStack_80 ((uint *)(albw_frame + 0x0))
  #define puStack_78 (*(undefined4 * *)(albw_frame + 0x8))
  #define uStack_74 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_70 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_6c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_68 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_64 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_60 (*(uint *)(albw_frame + 0x20))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x54))
  #define uStack_28 (*(undefined1 *)(albw_frame + 0x58))
  iVar1 = *(int *)(*(int *)(param_1 + 0x44c) + 0x14);
  puStack_78 = &uStack_74;
  fVar2 = *(float *)(iVar1 + 0x14) - *(float *)(iVar1 + 8);
  uStack_60 = unaff_r6 | 0xff;
  auStack_80[1] = 3;
  uStack_74 = 1;
  uStack_2c = 0;
  uStack_28 = 0;
  auStack_80[0] = 1;
  uStack_70 = DAT_002c597c;
  uStack_6c = DAT_002c5978;
  uStack_68 = DAT_002c5980;
  uStack_64 = DAT_002c5978;
  func_0016898C(*(int *)(param_1 + 0x44c),auStack_80);
  iVar1 = *(int *)(*(int *)(param_1 + 0x44c) + 0x14);
  if (*(float *)(iVar1 + 8) != fVar2) {
    *(float *)(iVar1 + 8) = fVar2;
    *(undefined1 *)(iVar1 + 0x26) = 1;
  }
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x44c) + 0x14) + 0x10) =
       *(undefined4 *)(param_1 + 0x478);
  return;
}


#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern undefined4 DAT_002c5978;
extern undefined4 DAT_002c597c;
extern undefined4 DAT_002c5980;

// USA 002C58C8 <- EU 002C58A4 (Ghidra, non-matching)
// GLOBAL DAT_002c5978 undefined4
// GLOBAL DAT_002c597c undefined4
// GLOBAL DAT_002c5980 undefined4

void func_002C58C8(int param_1,undefined4 param_2)

{
  int iVar1;
  uint unaff_r6;
  float fVar2;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_80 ((uint *)(albw_frame + 0x0))
  #define local_78 (*(undefined4 * *)(albw_frame + 0x8))
  #define local_74 (*(undefined4 *)(albw_frame + 0xc))
  #define local_70 (*(undefined4 *)(albw_frame + 0x10))
  #define local_6c (*(undefined4 *)(albw_frame + 0x14))
  #define local_68 (*(undefined4 *)(albw_frame + 0x18))
  #define local_64 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_60 (*(uint *)(albw_frame + 0x20))
  #define local_2c (*(undefined4 *)(albw_frame + 0x54))
  #define local_28 (*(undefined1 *)(albw_frame + 0x58))
  iVar1 = *(int *)(*(int *)(param_1 + 0x44c) + 0x14);
  local_78 = &local_74;
  fVar2 = *(float *)(iVar1 + 0x14) - *(float *)(iVar1 + 8);
  local_60 = unaff_r6 | 0xff;
  local_80[1] = 3;
  local_2c = 0;
  local_28 = 0;
  local_80[0] = 1;
  local_70 = DAT_002c597c;
  local_6c = DAT_002c5978;
  local_68 = DAT_002c5980;
  local_64 = DAT_002c5978;
  local_74 = param_2;
  func_0016898C(*(int *)(param_1 + 0x44c),local_80);
  iVar1 = *(int *)(*(int *)(param_1 + 0x44c) + 0x14);
  if (*(float *)(iVar1 + 8) != fVar2) {
    *(float *)(iVar1 + 8) = fVar2;
    *(undefined1 *)(iVar1 + 0x26) = 1;
  }
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x44c) + 0x14) + 0x10) =
       *(undefined4 *)(param_1 + 0x478);
  return;
}


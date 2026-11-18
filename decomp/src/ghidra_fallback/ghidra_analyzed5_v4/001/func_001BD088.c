#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern undefined4 DAT_001bd114;
extern undefined4 DAT_001bd118;
extern undefined4 DAT_001bd11c;

// USA 001BD088 <- EU 001BD088 (Ghidra, non-matching)
// GLOBAL DAT_001bd114 undefined4
// GLOBAL DAT_001bd118 undefined4
// GLOBAL DAT_001bd11c undefined4

void func_001BD088(int param_1)

{
  uint unaff_r5;
  undefined4 uVar1;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_70 ((uint *)(albw_frame + 0x0))
  #define local_68 (*(undefined4 * *)(albw_frame + 0x8))
  #define local_64 (*(undefined4 *)(albw_frame + 0xc))
  #define local_60 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_5c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_58 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_54 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_50 (*(uint *)(albw_frame + 0x20))
  #define local_1c (*(undefined4 *)(albw_frame + 0x54))
  #define local_18 (*(undefined1 *)(albw_frame + 0x58))
  local_70[1] = 3;
  local_68 = &local_64;
  local_1c = 0;
  local_18 = 0;
  local_64 = 0;
  local_70[0] = 1;
  local_50 = unaff_r5 | 0xff;
  local_60 = DAT_001bd118;
  uStack_5c = DAT_001bd114;
  uStack_58 = DAT_001bd11c;
  uStack_54 = DAT_001bd114;
  uVar1 = DAT_001bd114;
  func_0016898C(*(int *)(param_1 + 0x434),local_70);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x434) + 0x14) + 0x10) = uVar1;
  return;
}


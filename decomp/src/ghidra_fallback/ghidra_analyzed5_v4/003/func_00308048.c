#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern undefined4 DAT_003080dc;
extern undefined4 DAT_003080e0;
extern undefined4 DAT_003080e4;

// USA 00308048 <- EU 00308024 (Ghidra, non-matching)
// GLOBAL DAT_003080dc undefined4
// GLOBAL DAT_003080e0 undefined4
// GLOBAL DAT_003080e4 undefined4

void func_00308048(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint in_r12;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_68 ((uint *)(albw_frame + 0x8))
  #define local_60 (*(undefined4 * *)(albw_frame + 0x10))
  #define local_5c (*(undefined4 *)(albw_frame + 0x14))
  #define local_58 (*(undefined4 *)(albw_frame + 0x18))
  #define local_54 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_50 (*(undefined4 *)(albw_frame + 0x20))
  #define local_4c (*(undefined4 *)(albw_frame + 0x24))
  #define local_48 (*(uint *)(albw_frame + 0x28))
  #define local_14 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_10 (*(undefined1 *)(albw_frame + 0x60))
  local_68[1] = 3;
  local_60 = &local_5c;
  local_14 = 10;
  local_10 = 0;
  local_68[0] = 1;
  local_5c = 0;
  local_58 = DAT_003080e0;
  local_54 = DAT_003080dc;
  local_50 = DAT_003080e4;
  local_48 = in_r12 | 0xff;
  local_4c = DAT_003080dc;
  func_0016898C(*(int *)(param_1 + 0x450),local_68);
  uVar1 = 0;
  do {
    iVar4 = param_1 + uVar1 * 8;
    uVar2 = uVar1 + 1 & 0xffff;
    iVar3 = **(int **)(*(int *)(param_1 + 0x448) + 0x20) + 0x54 + uVar1 * 0x18;
    uVar5 = *(undefined4 *)(iVar3 + 0xa8);
    *(undefined4 *)(iVar4 + 0x438) = *(undefined4 *)(iVar3 + 0xa4);
    *(undefined4 *)(iVar4 + 0x43c) = uVar5;
    uVar1 = uVar2;
  } while (uVar2 < 2);
  return;
}


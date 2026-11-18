#include "ghidra_types.h"

extern int func_001696F8(int param_1,uint *param_2);
extern undefined4 DAT_0050c268;
extern undefined4 DAT_0050c26c;
extern undefined4 DAT_0050c270;

// USA 0050C204 <- EU 0050C1DC (Ghidra, non-matching)
// GLOBAL DAT_0050c268 undefined4
// GLOBAL DAT_0050c26c undefined4
// GLOBAL DAT_0050c270 undefined4

void func_0050C204(int param_1)

{
  uint unaff_r4;
  undefined4 uVar1;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_78 ((uint *)(albw_frame + 0x8))
  #define local_70 (*(undefined4 * *)(albw_frame + 0x10))
  #define local_6c (*(undefined4 *)(albw_frame + 0x14))
  #define local_68 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_64 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_60 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_5c (*(undefined4 *)(albw_frame + 0x24))
  #define local_58 (*(uint *)(albw_frame + 0x28))
  #define local_24 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_20 (*(undefined1 *)(albw_frame + 0x60))
  local_78[1] = 3;
  local_70 = &local_6c;
  local_78[0] = 1;
  local_6c = 1;
  local_24 = 10;
  local_20 = 0;
  local_58 = unaff_r4 | 0xff;
  local_68 = DAT_0050c26c;
  uStack_64 = DAT_0050c268;
  uStack_60 = DAT_0050c270;
  uStack_5c = DAT_0050c268;
  uVar1 = DAT_0050c268;
  func_001696F8(*(int *)(param_1 + 0x410),local_78);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x410) + 0x14) + 0x10) = uVar1;
  return;
}


#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern undefined4 DAT_0024e11c;
extern undefined4 DAT_0024e120;
extern undefined4 DAT_0024e124;

// USA 0024E050 <- EU 0024E050 (Ghidra, non-matching)
// GLOBAL DAT_0024e11c undefined4
// GLOBAL DAT_0024e120 undefined4
// GLOBAL DAT_0024e124 undefined4

undefined4 func_0024E050(int param_1,undefined4 param_2)

{
  uint in_r12;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_88 ((uint *)(albw_frame + 0x8))
  #define puStack_80 (*(undefined4 * *)(albw_frame + 0x10))
  #define local_7c (*(undefined4 *)(albw_frame + 0x14))
  #define local_78 (*(undefined4 *)(albw_frame + 0x18))
  #define local_74 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_70 (*(undefined4 *)(albw_frame + 0x20))
  #define local_6c (*(undefined4 *)(albw_frame + 0x24))
  #define local_68 (*(uint *)(albw_frame + 0x28))
  #define local_34 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_30 (*(undefined1 *)(albw_frame + 0x60))
  puStack_80 = &local_7c;
  local_88[1] = 3;
  local_34 = 10;
  local_30 = 0;
  local_88[0] = 1;
  local_68 = in_r12 | 0xff;
  local_78 = DAT_0024e120;
  local_74 = DAT_0024e11c;
  local_70 = DAT_0024e124;
  local_6c = DAT_0024e11c;
  uVar3 = DAT_0024e120;
  uVar1 = DAT_0024e11c;
  uVar2 = DAT_0024e124;
  local_7c = param_2;
  func_0016898C(*(int *)(param_1 + 0x410),local_88);
  puStack_80 = &local_7c;
  local_88[1] = 3;
  local_34 = 10;
  local_30 = 0;
  local_88[0] = 1;
  local_68 = in_r12 | 0xff;
  local_7c = param_2;
  local_78 = uVar3;
  local_74 = uVar1;
  local_70 = uVar2;
  local_6c = uVar1;
  return func_0016898C(*(int *)(param_1 + 0x414),local_88);
}


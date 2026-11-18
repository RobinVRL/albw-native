#include "ghidra_types.h"

extern int func_004A8D80(int param_1);
extern undefined4 DAT_004a8f0c;
extern undefined4 DAT_004a8f10;
extern undefined4 DAT_004a8f14;

// USA 004A8EB4 <- EU 004A8E8C (Ghidra, non-matching)
// GLOBAL DAT_004a8f0c undefined4
// GLOBAL DAT_004a8f10 undefined4
// GLOBAL DAT_004a8f14 undefined4

undefined4 * func_004A8EB4(int param_1)

{
  undefined4 *puVar1;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(undefined4 *)(albw_frame + 0x0))
  #define local_3c (*(undefined4 *)(albw_frame + 0x4))
  #define local_38 (*(undefined4 *)(albw_frame + 0x8))
  #define local_34 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x10))
  #define local_2c (*(undefined4 *)(albw_frame + 0x14))
  #define local_28 (*(undefined4 *)(albw_frame + 0x18))
  #define local_24 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x20))
  #define local_1c (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x28))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x2c))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x30))
  #define local_c (*(undefined1 *)(albw_frame + 0x34))
  #define local_b (*(undefined1 *)(albw_frame + 0x35))
  #define local_a (*(undefined1 *)(albw_frame + 0x36))
  #define local_9 (*(undefined1 *)(albw_frame + 0x37))
  #define local_8 (*(undefined1 *)(albw_frame + 0x38))
  local_38 = 0;
  local_40 = DAT_004a8f0c;
  local_34 = 0;
  uStack_30 = 0x20;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  uStack_18 = 0;
  uStack_14 = DAT_004a8f0c;
  uStack_10 = DAT_004a8f14;
  local_c = 7;
  local_b = 4;
  local_a = 0;
  local_9 = 0;
  local_8 = 0;
  local_3c = *(undefined4 *)(param_1 + 4);
  puVar1 = func_004A8D80((int)&local_40);
  return puVar1;
}


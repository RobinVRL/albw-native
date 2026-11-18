#include "ghidra_types.h"

extern int func_00504D48(int param_1,int param_2);
extern undefined4 DAT_001ff07c;
extern undefined4 DAT_001ff080;
extern undefined4 DAT_001ff084;
extern int *DAT_001ff088;

// USA 001FEFBC <- EU 001FEFBC (Ghidra, non-matching)
// GLOBAL DAT_001ff07c undefined4
// GLOBAL DAT_001ff080 undefined4
// GLOBAL DAT_001ff084 undefined4
// GLOBAL DAT_001ff088 int *

void func_001FEFBC(int param_1,int *param_2)

{
  undefined4 *puVar1;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_60 (*(undefined4 *)(albw_frame + 0x0))
  #define local_5c (*(undefined4 *)(albw_frame + 0x4))
  #define local_58 (*(undefined4 *)(albw_frame + 0x8))
  #define local_54 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_50 (*(undefined4 *)(albw_frame + 0x10))
  #define local_4c (*(undefined4 *)(albw_frame + 0x14))
  #define local_48 (*(undefined4 *)(albw_frame + 0x18))
  #define local_44 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x20))
  #define local_3c (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x28))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x2c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x30))
  #define local_2c (*(undefined1 *)(albw_frame + 0x34))
  #define local_2b (*(undefined1 *)(albw_frame + 0x35))
  #define local_2a (*(undefined1 *)(albw_frame + 0x36))
  #define local_29 (*(undefined1 *)(albw_frame + 0x37))
  #define local_28 (*(undefined1 *)(albw_frame + 0x38))
  #define local_24 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_20 (*(int *)(albw_frame + 0x40))
  #define local_1c (*(undefined4 *)(albw_frame + 0x44))
  #define local_18 (*(undefined4 *)(albw_frame + 0x48))
  #define local_14 (*(undefined1 *)(albw_frame + 0x4c))
  (**(code **)(*param_2 + 8))(param_2);
  local_5c = DAT_001ff080;
  local_58 = 0;
  local_60 = DAT_001ff07c;
  local_54 = 0;
  uStack_50 = 0x20;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  uStack_38 = 0;
  uStack_34 = DAT_001ff07c;
  uStack_30 = DAT_001ff084;
  local_2c = 7;
  local_2b = 4;
  local_2a = 0;
  local_24 = DAT_001ff07c;
  local_29 = 0;
  local_28 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 1;
  local_20 = param_2[1];
  puVar1 = func_00504D48(*DAT_001ff088,(int)&local_60);
  *(undefined4 **)(param_1 + 4) = puVar1;
  return;
}


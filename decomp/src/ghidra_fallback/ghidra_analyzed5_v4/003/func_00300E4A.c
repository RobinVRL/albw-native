#include "ghidra_types.h"

extern undefined8 func_0030036C(uint *param_1,uint *param_2);
extern int DAT_00300e48;

// GLOBAL DAT_00300e48 int
// USA 00300E4A <- EU 00300E26 (Ghidra, function missing from the decomp table)

undefined8 func_00300E4A(undefined4 param_1,undefined4 param_2,uint *param_3,undefined4 param_4)

{
  undefined8 uVar1;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define uStack_40 (*(uint *)(albw_frame + 0x0))
  #define local_3c (*(undefined4 *)(albw_frame + 0x4))
  #define local_38 (*(undefined4 *)(albw_frame + 0x8))
  #define local_34 (*(int *)(albw_frame + 0xc))
  #define local_30 (*(undefined4 *)(albw_frame + 0x10))
  #define local_2c (*(undefined4 *)(albw_frame + 0x14))
  local_2c = 1;
  local_34 = DAT_00300e48 + 0x300e38;
  local_3c = param_4;
  local_38 = param_2;
  local_30 = param_1;
  uVar1 = func_0030036C(&uStack_40,param_3);
  return uVar1;
}


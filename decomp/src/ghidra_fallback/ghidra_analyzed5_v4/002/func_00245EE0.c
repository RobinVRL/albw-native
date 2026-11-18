#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_001DDCC4(int param_1,undefined1 param_2);
extern int func_0051AA44(int param_1);
extern undefined4 DAT_00245fbc;
extern undefined4 DAT_00245fc0;
extern undefined4 DAT_00245fc4;
extern int *DAT_00245fc8;
extern int *DAT_00245fcc;

// USA 00245EE0 <- EU 00245EE0 (Ghidra, non-matching)
// GLOBAL DAT_00245fbc undefined4
// GLOBAL DAT_00245fc0 undefined4
// GLOBAL DAT_00245fc4 undefined4
// GLOBAL DAT_00245fc8 int *
// GLOBAL DAT_00245fcc int *

undefined4 func_00245EE0(int *param_1)

{
  uint in_r12;
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
  uVar1 = DAT_00245fbc;
  param_1[0xb8] = param_1[0xb8] | 8;
  local_78[1] = 3;
  local_70 = &local_6c;
  local_20 = 0;
  local_78[0] = 1;
  local_6c = 1;
  local_24 = 10;
  local_68 = DAT_00245fc0;
  uStack_64 = uVar1;
  uStack_60 = DAT_00245fc4;
  uStack_5c = uVar1;
  local_58 = in_r12 | 0xff;
  func_0016898C(param_1[0x1eb],local_78);
  *(undefined1 *)(*(int *)(param_1[0x1eb] + 0x14) + 0x1c) = 0;
  *(undefined4 *)(*(int *)(param_1[0x1eb] + 0x14) + 0x10) = uVar1;
  func_001DDCC4(*DAT_00245fc8,1);
  func_0051AA44(*DAT_00245fcc);
                    /* WARNING: Could not recover jumptable at 0x00245fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return (**(code **)(*param_1 + 0x98))(param_1);
}


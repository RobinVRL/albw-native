#include "ghidra_types.h"

extern int func_0010BB14(int param_1);
extern int func_00600660(int param_1);
extern undefined4 DAT_00499774;

// USA 00499738 <- EU 00499710 (Ghidra, non-matching)
// GLOBAL DAT_00499774 undefined4

undefined4 * func_00499738(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00499774;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[3] = 0;
  param_1[2] = param_2;
  *param_1 = uVar1;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  uVar1 = func_00600660(0x20000);
  param_1[3] = uVar1;
  uVar1 = func_00600660(0x30000);
  param_1[4] = uVar1;
  uVar1 = func_0010BB14(0x20000);
  param_1[5] = uVar1;
  uVar1 = func_0010BB14(0x30000);
  param_1[6] = uVar1;
  return param_1;
}


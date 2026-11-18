#include "ghidra_types.h"

extern int func_0058FB74(undefined4 *param_1,undefined4 *param_2);
extern undefined4 DAT_004fc754;
extern undefined4 DAT_004fc758;
extern undefined4 DAT_004fc75c;

// USA 004FC6FC <- EU 004FC6D4 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4
// PARAM param_6 Stack[0x4]:4 undefined4 *
// PARAM param_7 Stack[0x8]:4 undefined4
// GLOBAL DAT_004fc754 undefined4
// GLOBAL DAT_004fc758 undefined4
// GLOBAL DAT_004fc75c undefined4

undefined4 *
func_004FC6FC(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,
             undefined4 param_5,undefined4 *param_6,undefined4 param_7)

{
  *param_1 = param_2;
  param_1[1] = param_3 | 1;
  param_1[2] = param_4;
  param_1[3] = param_5;
  func_0058FB74(param_1 + 4,param_6);
  param_1[7] = param_1 + 9;
  param_1[8] = 0x20;
  *(undefined1 *)(param_1[7] + 0x1f) = 0;
  *(undefined1 *)param_1[7] = 0;
  param_1[6] = DAT_004fc75c;
  param_1[0x11] = param_7;
  return param_1;
}


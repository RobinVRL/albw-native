#include "ghidra_types.h"


// USA 004BCBA4 <- EU 004BCB7C (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:1 undefined1
// PARAM param_6 Stack[0x4]:1 undefined1
// PARAM param_7 Stack[0x8]:1 undefined1
// PARAM param_8 Stack[0xc]:2 undefined2
// PARAM param_9 Stack[0x10]:2 undefined2

undefined4 *
func_004BCBA4(undefined4 *param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4,
             undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined2 param_8,
             undefined2 param_9,float fparam_0,float fparam_1,float fparam_2,float fparam_3,
             float fparam_4,float fparam_5)

{
  *param_1 = ALBW_AS_U32(fparam_0);
  param_1[1] = ALBW_AS_U32(fparam_1);
  param_1[2] = ALBW_AS_U32(fparam_2);
  param_1[3] = ALBW_AS_U32(fparam_3);
  param_1[4] = ALBW_AS_U32(fparam_4);
  param_1[5] = ALBW_AS_U32(fparam_5);
  param_1[6] = param_2;
  *(undefined2 *)(param_1 + 7) = param_8;
  *(undefined2 *)((int)param_1 + 0x1e) = param_9;
  *(undefined1 *)(param_1 + 8) = param_3;
  *(undefined1 *)((int)param_1 + 0x21) = param_4;
  *(undefined1 *)((int)param_1 + 0x22) = param_5;
  *(undefined1 *)((int)param_1 + 0x23) = param_6;
  *(undefined1 *)(param_1 + 9) = param_7;
  return param_1;
}


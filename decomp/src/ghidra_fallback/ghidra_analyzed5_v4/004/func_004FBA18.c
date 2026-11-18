#include "ghidra_types.h"

extern int func_002B06B8(int param_1,undefined1 param_2,undefined1 param_3,int param_4,int param_5, undefined1 param_6,ushort param_7,float fparam_0,float fparam_1);

// USA 004FBA18 <- EU 004FB9F0 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// PARAM param_6 Stack[0x4]:1 undefined1
// PARAM param_7 Stack[0x8]:2 ushort

undefined4 func_004FBA18(int param_1,undefined1 param_2,undefined1 param_3,int param_4,int param_5,
                  undefined1 param_6,ushort param_7,float fparam_0,float fparam_1)

{
  return func_002B06B8(*(int *)(param_1 + 0x510),param_2,param_3,param_4,param_5,param_6,param_7,fparam_0,
                fparam_1);
}


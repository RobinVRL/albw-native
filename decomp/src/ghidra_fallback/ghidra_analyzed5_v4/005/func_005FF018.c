#include "ghidra_types.h"

extern int func_00601AF0(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6, int param_7,int param_8,int param_9,int param_10,int param_11,int param_12);
extern int DAT_005ff038;

// USA 005FF018 <- EU 005FEFF0 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// PARAM param_6 Stack[0x4]:4 int
// PARAM param_7 Stack[0x8]:4 int
// PARAM param_8 Stack[0xc]:4 int
// PARAM param_9 Stack[0x10]:4 int
// PARAM param_10 Stack[0x14]:4 int
// PARAM param_11 Stack[0x18]:4 int
// GLOBAL DAT_005ff038 int

undefined4 func_005FF018(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7,int param_8,int param_9,int param_10,int param_11)

{
  return func_00601AF0(*(int *)(DAT_005ff038 + 0x9c),param_1,param_2,param_3,param_4,param_5,param_6,
                param_7,param_8,param_9,param_10,param_11);
}


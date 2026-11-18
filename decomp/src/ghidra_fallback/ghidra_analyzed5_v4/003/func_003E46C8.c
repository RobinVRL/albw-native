// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00109038(undefined4 param_1,uint param_2,uint param_3,uint param_4,undefined4 param_5, undefined4 param_6,uint param_7,uint param_8);

// USA 003E46C8 <- EU 003E46A8 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 uint
// PARAM param_6 Stack[0x4]:4 uint

undefined4 func_003E46C8(undefined4 param_1,uint param_2,uint param_3,undefined4 param_4,uint param_5,
                  uint param_6)

{
  undefined4 in_stack_ffffffec;
  
  return func_00109038(param_1,5,param_2,param_3,param_4,in_stack_ffffffec,param_5,param_6);
}


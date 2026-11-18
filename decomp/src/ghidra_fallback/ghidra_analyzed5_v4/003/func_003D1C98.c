#include "ghidra_types.h"

extern int func_003D1700(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5);
extern int func_003D1BB4(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5);
extern int *DAT_003d1cb4;
extern int *DAT_003d1cb8;
extern uint DAT_003d1cbc;

// USA 003D1C98 <- EU 003D1C74 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// GLOBAL DAT_003d1cb4 int *
// GLOBAL DAT_003d1cb8 int *
// GLOBAL DAT_003d1cbc uint

uint func_003D1C98(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  
  if (*DAT_003d1cb4 != 0) {
    uVar1 = func_003D1BB4(param_1,param_2,param_3,param_4,param_5);
    return uVar1;
  }
  uVar1 = DAT_003d1cbc;
  if (*DAT_003d1cb8 != 0) {
    uVar1 = func_003D1700(param_1,param_2,param_3,param_4,param_5);
  }
  return uVar1;
}


#include "ghidra_types.h"

extern int func_003D165C(undefined4 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4, int param_5);
extern int func_003D1B10(undefined4 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4, int param_5);
extern int *DAT_003d1c2c;
extern int *DAT_003d1c30;
extern uint DAT_003d1c34;

// USA 003D1C10 <- EU 003D1BEC (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// GLOBAL DAT_003d1c2c int *
// GLOBAL DAT_003d1c30 int *
// GLOBAL DAT_003d1c34 uint

uint func_003D1C10(undefined4 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,
                  int param_5)

{
  uint uVar1;
  
  if (*DAT_003d1c2c != 0) {
    uVar1 = func_003D1B10(param_1,param_2,param_3,param_4,param_5);
    return uVar1;
  }
  uVar1 = DAT_003d1c34;
  if (*DAT_003d1c30 != 0) {
    uVar1 = func_003D165C(param_1,param_2,param_3,param_4,param_5);
  }
  return uVar1;
}


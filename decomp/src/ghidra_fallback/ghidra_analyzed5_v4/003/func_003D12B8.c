#include "ghidra_types.h"

extern int func_003D14E0(undefined4 param_1,undefined1 param_2,undefined4 param_3,int param_4, undefined4 param_5,int param_6,undefined4 param_7);
extern int func_003D1994(undefined4 param_1,undefined1 param_2,undefined4 param_3,int param_4, undefined4 param_5,int param_6,undefined4 param_7);
extern int *DAT_003d12f0;
extern int *DAT_003d12f4;
extern uint DAT_003d12f8;

// USA 003D12B8 <- EU 003D1294 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4
// PARAM param_6 Stack[0x4]:4 int
// PARAM param_7 Stack[0x8]:4 undefined4
// GLOBAL DAT_003d12f0 int *
// GLOBAL DAT_003d12f4 int *
// GLOBAL DAT_003d12f8 uint

uint func_003D12B8(undefined4 param_1,undefined1 param_2,undefined4 param_3,int param_4,
                  undefined4 param_5,int param_6,undefined4 param_7)

{
  uint uVar1;
  
  if (*DAT_003d12f0 == 0) {
    uVar1 = DAT_003d12f8;
    if (*DAT_003d12f4 != 0) {
      uVar1 = func_003D14E0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      return uVar1;
    }
  }
  else {
    uVar1 = func_003D1994(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  return uVar1;
}


#include "ghidra_types.h"

extern int func_003CE91C(int param_1,int param_2);
extern int func_003D12B8(undefined4 param_1,undefined1 param_2,undefined4 param_3,int param_4, undefined4 param_5,int param_6,undefined4 param_7);
extern int DAT_003d0ce8;
extern int DAT_003d0cec;

// USA 003D0C84 <- EU 003D0C60 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// PARAM param_6 Stack[0x4]:4 undefined4
// PARAM param_7 Stack[0x8]:4 int
// PARAM param_8 Stack[0xc]:4 undefined4
// GLOBAL DAT_003d0ce8 int
// GLOBAL DAT_003d0cec int

void func_003D0C84(undefined4 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,
                  int param_5,undefined4 param_6,int param_7,undefined4 param_8)

{
  int iVar1;
  
  iVar1 = func_003D12B8(param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if ((iVar1 < 0) && (iVar1 == DAT_003d0ce8)) {
    func_003CE91C(1,0);
    *(undefined1 *)(DAT_003d0cec + 1) = 1;
    func_003D12B8(param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  return;
}


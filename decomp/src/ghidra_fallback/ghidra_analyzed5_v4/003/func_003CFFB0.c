#include "ghidra_types.h"

extern int func_003CE91C(int param_1,int param_2);
extern int func_003D10C4(undefined4 param_1,undefined1 param_2,undefined4 param_3,int param_4, undefined4 *param_5,undefined4 param_6,int param_7);
extern int DAT_003d0014;
extern int DAT_003d0018;

// USA 003CFFB0 <- EU 003CFF8C (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// PARAM param_6 Stack[0x4]:4 undefined4 *
// PARAM param_7 Stack[0x8]:4 undefined4
// PARAM param_8 Stack[0xc]:4 int
// GLOBAL DAT_003d0014 int
// GLOBAL DAT_003d0018 int

void func_003CFFB0(undefined4 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,
                  int param_5,undefined4 *param_6,undefined4 param_7,int param_8)

{
  int iVar1;
  
  iVar1 = func_003D10C4(param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if ((iVar1 < 0) && (iVar1 == DAT_003d0014)) {
    func_003CE91C(1,0);
    *(undefined1 *)(DAT_003d0018 + 1) = 1;
    func_003D10C4(param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  return;
}


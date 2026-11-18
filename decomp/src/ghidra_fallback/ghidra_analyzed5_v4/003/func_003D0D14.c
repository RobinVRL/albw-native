#include "ghidra_types.h"

extern int func_003CE91C(int param_1,int param_2);
extern int func_003D1C10(undefined4 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4, int param_5);
extern int DAT_003d0d6c;
extern int DAT_003d0d70;

// USA 003D0D14 <- EU 003D0CF0 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4
// PARAM param_6 Stack[0x4]:4 int
// GLOBAL DAT_003d0d6c int
// GLOBAL DAT_003d0d70 int

void func_003D0D14(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                  undefined4 param_5,int param_6)

{
  int iVar1;
  
  iVar1 = func_003D1C10(param_2,param_3,param_4,param_5,param_6);
  if ((iVar1 < 0) && (iVar1 == DAT_003d0d6c)) {
    func_003CE91C(1,0);
    *(undefined1 *)(DAT_003d0d70 + 1) = 1;
    func_003D1C10(param_2,param_3,param_4,param_5,param_6);
  }
  return;
}


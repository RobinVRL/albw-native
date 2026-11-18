#include "ghidra_types.h"

extern int func_003CE91C(int param_1,int param_2);
extern int func_003D1C98(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5);
extern int DAT_00564118;
extern int DAT_0056411c;

// USA 005640C4 <- EU 0056409C (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4
// PARAM param_6 Stack[0x4]:4 int
// GLOBAL DAT_00564118 int
// GLOBAL DAT_0056411c int

void func_005640C4(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                  undefined4 param_5,int param_6)

{
  int iVar1;
  
  iVar1 = func_003D1C98(param_2,param_3,param_4,param_5,param_6);
  if ((iVar1 < 0) && (iVar1 == DAT_00564118)) {
    func_003CE91C(1,0);
    *(undefined1 *)(DAT_0056411c + 1) = 1;
    func_003D1C98(param_2,param_3,param_4,param_5,param_6);
  }
  return;
}


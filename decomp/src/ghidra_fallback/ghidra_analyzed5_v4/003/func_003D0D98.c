#include "ghidra_types.h"

extern int func_003CE91C(int param_1,int param_2);
extern int func_003D1C5C(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4);
extern int DAT_003d0de4;
extern int DAT_003d0de8;

// USA 003D0D98 <- EU 003D0D74 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4
// GLOBAL DAT_003d0de4 int
// GLOBAL DAT_003d0de8 int

void func_003D0D98(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                  undefined4 param_5)

{
  int iVar1;
  
  iVar1 = func_003D1C5C(param_2,param_3,param_4,param_5);
  if ((iVar1 < 0) && (iVar1 == DAT_003d0de4)) {
    func_003CE91C(1,0);
    *(undefined1 *)(DAT_003d0de8 + 1) = 1;
    func_003D1C5C(param_2,param_3,param_4,param_5);
  }
  return;
}


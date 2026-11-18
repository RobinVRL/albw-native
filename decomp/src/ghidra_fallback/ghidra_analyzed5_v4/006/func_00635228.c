#include "ghidra_types.h"

extern int func_004C07D8(int param_1);
extern int func_00547538(int param_1);
extern int func_00547B20(int param_1);
extern int func_00634834(int param_1,int param_2,undefined1 param_3);
extern undefined4 DAT_00635264;

// USA 00635228 <- EU 00635200 (Ghidra, non-matching)
// GLOBAL DAT_00635264 undefined4

void func_00635228(int param_1)

{
  bool bVar1;
  
  bVar1 = func_00547B20(param_1 + 4);
  if (((bVar1) && (bVar1 = func_00547538(param_1 + 4), !bVar1)) &&
     (*(char *)(param_1 + 0x85d) == '\0')) {
    *(undefined4 *)(param_1 + 0x3ac) = DAT_00635264;
    func_004C07D8(param_1);
    *(undefined1 *)(param_1 + 0x861) = 1;
    func_00634834(param_1,2,2);
  }
  return;
}


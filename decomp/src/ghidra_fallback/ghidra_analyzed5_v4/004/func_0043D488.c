#include "ghidra_types.h"

extern int func_0012C790(int param_1);
extern int func_00579F5C(int param_1);
extern int func_0066C424(undefined4 *param_1,undefined1 param_2);

// USA 0043D488 <- EU 0043D468 (Ghidra, non-matching)

undefined4 func_0043D488(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *(char *)(*(int *)(param_1 + 0x158) + 0xd0);
  if (cVar1 == '\x01' || cVar1 == '\x03') {
    iVar2 = *(int *)(param_1 + 0x148);
    if ((((iVar2 != 0) && (*(char *)(iVar2 + 0xd) == '\x03')) && (*(char *)(iVar2 + 0xe) == '\x03'))
       && (iVar2 = func_00579F5C(*(int *)(param_1 + 0x158)), iVar2 != 0)) {
      return func_0012C790(*(int *)(param_1 + 0x148));
    }
  }
  else {
    func_0066C424((undefined4 *)(param_1 + 0x98),7);
  }
  return 0;
}


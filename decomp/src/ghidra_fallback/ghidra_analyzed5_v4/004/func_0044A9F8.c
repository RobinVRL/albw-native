#include "ghidra_types.h"

extern int func_00446EAC(int param_1);
extern int func_00447E28(int param_1,int param_2,int *param_3,int param_4);
extern int func_0066CC58(undefined4 *param_1,undefined1 param_2);

// USA 0044A9F8 <- EU 0044A9D0 (Ghidra, non-matching)

undefined4 func_0044A9F8(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x15c);
  if (cVar1 == '\x02' || cVar1 == '\x01') {
    if (*(int *)(param_1 + 0x234) == 0) {
      func_00446EAC(param_1);
    }
    func_00447E28(param_1,1,*(int **)(param_1 + 0x23c),0);
    func_00447E28(param_1,0,*(int **)(param_1 + 0x240),0);
    *(undefined1 *)(param_1 + 0x294) = 1;
    return func_0066CC58((undefined4 *)(param_1 + 0x158),3);
  }
  if (cVar1 == '\x06') {
    func_0066CC58((undefined4 *)(param_1 + 0x158),7);
  }
  return 0;
}


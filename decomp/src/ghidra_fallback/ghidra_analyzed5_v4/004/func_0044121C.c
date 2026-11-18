#include "ghidra_types.h"

extern int func_001788DC(int param_1,undefined4 *param_2);
extern int func_0066C748(undefined4 *param_1,undefined1 param_2);

// USA 0044121C <- EU 004411FC (Ghidra, non-matching)

undefined4 func_0044121C(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((char)param_1[0x24] == '\x04') {
    uVar1 = func_001788DC(param_1[0x1d],param_2);
    *(char *)(param_1 + 0x21) = (char)uVar1;
    iVar2 = (**(code **)(*param_1 + 0x94))(param_1);
    if (iVar2 == 0) {
      return func_0066C748(param_1 + 0x23,1);
    }
    func_0066C748(param_1 + 0x23,5);
  }
  return 0;
}


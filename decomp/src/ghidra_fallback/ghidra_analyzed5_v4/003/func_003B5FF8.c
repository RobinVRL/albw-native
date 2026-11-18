#include "ghidra_types.h"

extern int func_006695DC(undefined4 *param_1,undefined1 param_2);

// USA 003B5FF8 <- EU 003B5FD4 (Ghidra, non-matching)

undefined4 func_003B5FF8(int *param_1)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_1[5] + 0x16);
  if ((char)param_1[0x51] == '\0') {
    if ((uVar1 & 4) != 0) {
LAB_003b6058:
                    /* WARNING: Could not recover jumptable at 0x003b6064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      return (**(code **)(*param_1 + 0x50))(param_1);
    }
    if ((uVar1 & 2) != 0) {
                    /* WARNING: Could not recover jumptable at 0x003b6044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      return (**(code **)(*param_1 + 0x48))(param_1);
    }
  }
  else if ((char)param_1[0x51] == '\x01') {
    if ((uVar1 & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x003b6074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      return (**(code **)(*param_1 + 0x4c))(param_1);
    }
    if ((uVar1 & 4) != 0) goto LAB_003b6058;
  }
  else if ((uVar1 & 4) == 0) {
    param_1[0x14] = param_1[7];
    *(undefined2 *)((int)param_1 + 0x4a) = 4;
    *(undefined2 *)(param_1 + 0x12) = 0;
    *(undefined1 *)(param_1 + 0x51) = 1;
    func_006695DC(param_1 + 8,1);
  }
  return 0;
}


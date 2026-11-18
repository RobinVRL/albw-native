#include "ghidra_types.h"

extern int func_0010C1B8(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern int func_003C8BD8(int *param_1);

// USA 003C7AB0 <- EU 003C7A8C (Ghidra, non-matching)

int func_003C7AB0(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0xfffffffe) != 0) {
                    /* WARNING: Subroutine does not return */
    if ((uVar1 & 1) != 0) {
      func_0010C1B8(uVar1,uVar1 & 0xfffffffe,param_3);
    }
    func_003C8BD8((int *)(*(uint *)(param_1 + 8) & 0xfffffffe));
    *(uint *)(param_1 + 8) = 0;
  }
  return param_1;
}


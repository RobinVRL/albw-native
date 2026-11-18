#include "ghidra_types.h"

extern int func_0010C1B8(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern int func_003C8BD8(int *param_1);
extern int func_00408B7C(int param_1);
extern int func_00413634(int param_1);

// USA 00410E38 <- EU 00410E18 (Ghidra, non-matching)

void * func_00410E38(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  void *pvVar2;
  
  if (*(char *)(param_1 + 400) != '\0') {
    uVar1 = *(uint *)(param_1 + 0x120);
    if ((uVar1 & 0xfffffffe) != 0) {
                    /* WARNING: Subroutine does not return */
      if ((uVar1 & 1) != 0) {
        func_0010C1B8(uVar1,uVar1 & 0xfffffffe,param_3);
      }
      func_003C8BD8((int *)(*(uint *)(param_1 + 0x120) & 0xfffffffe));
      *(undefined4 *)(param_1 + 0x120) = 0;
    }
    func_00413634(param_1 + 0x13c);
    *(undefined1 *)(param_1 + 400) = 0;
  }
  pvVar2 = func_00408B7C(param_1);
  return pvVar2;
}


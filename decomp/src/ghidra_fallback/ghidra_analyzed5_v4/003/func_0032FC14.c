#include "ghidra_types.h"

extern int func_0014D218(int param_1,undefined4 param_2,undefined1 param_3);
extern int func_0014D550(int param_1,uint *param_2);
extern int func_0014D68C(int param_1,uint param_2);
extern int *DAT_0032fc94;
extern int *DAT_0032fc98;

// USA 0032FC14 <- EU 0032FBF0 (Ghidra, non-matching)
// GLOBAL DAT_0032fc94 int *
// GLOBAL DAT_0032fc98 int *

void func_0032FC14(int param_1,undefined4 param_2)

{
  switch(param_2) {
  case 2:
    func_0014D68C(*(int *)(*DAT_0032fc94 + 300),(uint)(**(char **)(*DAT_0032fc98 + 0x51c) == '\0'));
    break;
  case 4:
    func_0014D218(*(int *)(*DAT_0032fc94 + 300),*(undefined4 *)(param_1 + 0x2fc),1);
    break;
  case 5:
    func_0014D550(*(int *)(*DAT_0032fc94 + 300),*(uint **)(param_1 + 0x304));
  }
  *(char *)(param_1 + 0x2f4) = (char)param_2;
  *(undefined4 *)(param_1 + 0x2f8) = 0;
  return;
}


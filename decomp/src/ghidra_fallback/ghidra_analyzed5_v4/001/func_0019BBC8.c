#include "ghidra_types.h"

extern int func_0014ABEC(int param_1);
extern int *DAT_0019bc60;

// USA 0019BBC8 <- EU 0019BBC8 (Ghidra, non-matching)
// GLOBAL DAT_0019bc60 int *

undefined4 func_0019BBC8(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((*(char *)(param_1 + 0x44e) == '\0') &&
     (((puVar1 = *(undefined4 **)(param_1 + 0x40c), puVar1 == (undefined4 *)0x0 ||
       (iVar2 = (**(code **)*puVar1)(puVar1,param_1), iVar2 == 0)) &&
      (*(char *)(param_1 + 0x420) == '\x04')))) {
    if (*(short *)(param_1 + 0x44) == -1) {
      func_0014ABEC(*DAT_0019bc60);
      return 1;
    }
    *(undefined1 *)(param_1 + 0x44d) = 1;
    *(char *)(param_1 + 0x458) = (char)*(undefined2 *)(param_1 + 0x42);
    *(int *)(param_1 + 0x45c) = (int)*(short *)(param_1 + 0x44);
    *(short *)(param_1 + 0x460) = *(short *)(param_1 + 0x2c);
    *(char *)(param_1 + 0x462) = (char)(*(short *)(param_1 + 0x2c) >> 7) + '\x01';
  }
  return 0;
}


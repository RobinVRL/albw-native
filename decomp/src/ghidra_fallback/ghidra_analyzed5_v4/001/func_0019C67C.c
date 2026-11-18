#include "ghidra_types.h"

extern int func_0014ABEC(int param_1);
extern int *DAT_0019c71c;

// USA 0019C67C <- EU 0019C67C (Ghidra, non-matching)
// GLOBAL DAT_0019c71c int *

undefined4 func_0019C67C(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (((*(char *)(param_1 + 0x452) == '\0') && (*(char *)(param_1 + 0x450) != '\0')) &&
     ((puVar1 = *(undefined4 **)(param_1 + 0x40c), puVar1 == (undefined4 *)0x0 ||
      (iVar2 = (**(code **)*puVar1)(puVar1,param_1), iVar2 == 0)))) {
    if (*(short *)(param_1 + 0x44) != -1) {
      *(undefined1 *)(param_1 + 0x451) = 1;
      *(char *)(param_1 + 0x454) = (char)*(undefined2 *)(param_1 + 0x42);
      *(int *)(param_1 + 0x458) = (int)*(short *)(param_1 + 0x44);
      *(short *)(param_1 + 0x45c) = *(short *)(param_1 + 0x2c);
      *(char *)(param_1 + 0x45e) = (char)(*(short *)(param_1 + 0x2c) >> 7) + '\x01';
      return 0;
    }
    func_0014ABEC(*DAT_0019c71c);
    return 1;
  }
  return 0;
}


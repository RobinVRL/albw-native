#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern int func_0010EEE0(int param_1);
extern int func_0010F0A8(int param_1,uint param_2);

// USA 0010CBE8 <- EU 0010CBE8 (Ghidra, non-matching)

undefined4 func_0010CBE8(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if ((*(uint *)(param_1 + 0x70) & 1) != 0) {
    func_0010C0B8(param_1 + 0x54);
    iVar2 = param_1 + 0x54;
  }
  if (*(char *)(param_1 + 0x50) == '\x01') {
    puVar1 = (undefined4 *)(param_1 + 0x98);
  }
  else {
    puVar1 = *(undefined4 **)(param_1 + 0x1c);
  }
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
  }
  puVar1[2] = *(int *)(param_1 + 0x20) + -0xa8;
  func_0010F0A8(param_1,(uint)puVar1);
  if (iVar2 == 0) {
    return 0;
  }
  return func_0010EEE0(iVar2);
}


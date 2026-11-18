#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern int func_0010EEE0(int param_1);
extern int func_0049B044(int param_1,undefined4 *param_2,undefined4 *param_3);

// USA 004A0DC8 <- EU 004A0DA0 (Ghidra, non-matching)

undefined4 func_004A0DC8(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if ((*(uint *)(param_1 + 0x70) & 1) != 0) {
    func_0010C0B8(param_1 + 0x54);
    iVar2 = param_1 + 0x54;
  }
  func_0049B044(param_1,(undefined4 *)0x0,(undefined4 *)0x0);
  iVar1 = *(int *)(param_1 + 0x1c);
  if (*(char *)(param_1 + 0x50) == '\x01') {
    iVar1 = iVar1 + 0x7c;
  }
  *(int *)(param_1 + 0x74) = iVar1;
  if (*(char *)(param_1 + 0x50) == '\x01') {
    iVar1 = *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x20);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x20) + -0x7c + *(int *)(param_1 + 0x1c);
  }
  *(int *)(param_1 + 0x78) = iVar1;
  if (iVar2 == 0) {
    return 0;
  }
  return func_0010EEE0(iVar2);
}


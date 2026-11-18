#include "ghidra_types.h"

extern int func_002313DC(int param_1);
extern int func_004493C4(int param_1);
extern int func_0066C424(undefined4 *param_1,undefined1 param_2);

// USA 0043DAF0 <- EU 0043DAD0 (Ghidra, non-matching)

void func_0043DAF0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x154);
  if (((iVar1 != 0) && (*(char *)(iVar1 + 0xd) == '\x03')) && (*(char *)(iVar1 + 0xe) == '\x03')) {
    func_004493C4(iVar1);
  }
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0xbe) = 0x12;
  *(undefined2 *)(param_1 + 0xbc) = 0;
  func_002313DC(param_1 + 0xbc);
  if (*(char *)(param_1 + 0x78) == '\x01' || *(char *)(param_1 + 0x78) == '\x02') {
    func_0066C424((undefined4 *)(param_1 + 0x98),9);
  }
  return;
}


#include "ghidra_types.h"

extern int func_002313DC(int param_1);
extern int func_004A4574(int param_1,uint param_2);

// USA 003A0908 <- EU 003A08E4 (Ghidra, non-matching)

void func_003A0908(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0x3e) = 1;
  *(undefined2 *)(param_1 + 0x3c) = 0;
  func_002313DC(param_1 + 0x3c);
  iVar1 = 0;
  *(undefined4 *)(param_1 + 0x39c) = 0;
  do {
    func_004A4574(param_1 + 0x54 + iVar1 * 0x88,*(uint *)(param_1 + 0x39c));
    iVar1 = iVar1 + 1;
  } while (iVar1 != 6);
  return;
}


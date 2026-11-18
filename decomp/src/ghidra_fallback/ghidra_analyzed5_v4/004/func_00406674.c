#include "ghidra_types.h"

extern int func_00406660(undefined4 param_1,uint *param_2);

// USA 00406674 <- EU 00406654 (Ghidra, non-matching)

void func_00406674(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  func_00406660(param_1,(uint *)(param_1 + 0x74));
  func_00406660(param_1,(uint *)(param_1 + 0x78));
  *(char *)(param_1 + 0x9e) = (char)uVar1;
  *(undefined4 *)(param_1 + 0x7c) = uVar1;
  *(char *)(param_1 + 0x80) = (char)uVar1;
  return;
}


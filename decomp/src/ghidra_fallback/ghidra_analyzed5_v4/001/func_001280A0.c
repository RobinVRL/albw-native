#include "ghidra_types.h"

extern int func_004F87F8(int param_1,int param_2);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FC570();
extern int func_004FD038(int param_1,undefined1 param_2);

// USA 001280A0 <- EU 001280A0 (Ghidra, non-matching)

void func_001280A0(int param_1)

{
  if (*(char *)(param_1 + 0x90c) == '\0') {
    func_004FABDC(param_1,0,0,0);
    *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x24;
    func_004FD038(param_1 + 0x5a8,1);
    func_004FC570((int *)param_1);
    *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x80;
  }
  else {
    func_004FABDC(param_1,0,0xffffffff,0);
  }
  func_004F87F8(param_1,2);
  *(undefined4 *)(param_1 + 0x8ec) = 0;
  *(undefined1 *)(param_1 + 0x928) = 0;
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x10;
  return;
}


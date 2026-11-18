#include "ghidra_types.h"

extern int func_0036B758(int param_1);
extern int func_0036BE78();
extern void func_0065E398();

// USA 0021FD94 <- EU 0021FD94 (Ghidra, non-matching)

void func_0021FD94(int param_1)

{
  int iVar1;
  float in_s0;
  
  iVar1 = param_1 + 0x8e8;
  func_0036BE78(iVar1);
  if (*(uint *)(param_1 + 0xa68) < *(uint *)(param_1 + 0xa6c)) {
    *(uint *)(param_1 + 0xa68) = *(uint *)(param_1 + 0xa68) + 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x8e4) = 2;
    *(undefined1 *)(param_1 + 0xaff) = 0;
    func_0036B758(iVar1);
    func_0036BE78(iVar1);
    func_0065E398((undefined4 *)(param_1 + 0x8c0),5,in_s0);
  }
  return;
}


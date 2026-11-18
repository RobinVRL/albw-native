#include "ghidra_types.h"

extern int func_00588BF0(int param_1,int param_2);
extern int func_00658228(undefined4 *param_1,undefined1 param_2);

// USA 0015A29C <- EU 0015A2A0 (Ghidra, non-matching)

void func_0015A29C(int param_1)

{
  bool bVar1;
  
  bVar1 = func_00588BF0(param_1,0);
  if (bVar1) {
    func_00658228((undefined4 *)(param_1 + 0x8bc),2);
  }
  return;
}


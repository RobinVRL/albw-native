#include "ghidra_types.h"

extern int func_002FCC34(int param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int func_00588C14(int param_1,int param_2,uint param_3);
extern int func_00658B14(undefined4 *param_1,undefined1 param_2);

// USA 00173ED4 <- EU 00173ED4 (Ghidra, non-matching)

void func_00173ED4(int param_1)

{
  bool bVar1;
  
  if (*(uint *)(param_1 + 0x440) < *(uint *)(param_1 + 0x444)) {
    *(uint *)(param_1 + 0x440) = *(uint *)(param_1 + 0x440) + 1;
  }
  else {
    func_002FCC34(*(int *)(param_1 + 0x43c));
    bVar1 = func_00588BF0(param_1,0);
    if (bVar1) {
      func_00588C14(param_1,1,1);
    }
    else {
      func_00588C14(param_1,0,1);
    }
    func_00658B14((undefined4 *)(param_1 + 0x418),2);
  }
  return;
}


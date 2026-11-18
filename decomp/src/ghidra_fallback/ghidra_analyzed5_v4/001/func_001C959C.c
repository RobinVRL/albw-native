#include "ghidra_types.h"

extern int func_00588BF0(int param_1,int param_2);
extern int func_0065C1CC(undefined4 *param_1,undefined1 param_2);

// USA 001C959C <- EU 001C959C (Ghidra, non-matching)

void func_001C959C(int param_1)

{
  bool bVar1;
  
  if (((*(short *)(param_1 + 0x36) == 0) ||
      ((*(char *)(param_1 + 0x4b0) == '\0' && (bVar1 = func_00588BF0(param_1,0), bVar1)))) ||
     ((*(char *)(param_1 + 0x4b0) == '\x01' && (bVar1 = func_00588BF0(param_1,0), !bVar1)))) {
    func_0065C1CC((undefined4 *)(param_1 + 0x40c),1);
  }
  return;
}


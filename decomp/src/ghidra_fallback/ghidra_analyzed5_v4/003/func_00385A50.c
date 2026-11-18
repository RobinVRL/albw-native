#include "ghidra_types.h"

extern int func_004A9120(undefined4 param_1,int param_2);
extern undefined4 *DAT_00385a68;

// USA 00385A50 <- EU 00385A2C (Ghidra, non-matching)
// GLOBAL DAT_00385a68 undefined4 *

void func_00385A50(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_00385a68;
  if (*(char *)(param_1 + 0x34) != '\0') {
    *(undefined1 *)(param_1 + 0x34) = 0;
    func_004A9120(*puVar1,param_1 + 0xb4);
  }
  *(undefined2 *)(param_1 + 0x70) = 0;
  return;
}


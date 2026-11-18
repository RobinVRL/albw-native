#include "ghidra_types.h"

extern int func_0037D414(int param_1);
extern int DAT_001d6fa4;

// USA 001D6F84 <- EU 001D6F84 (Ghidra, non-matching)
// GLOBAL DAT_001d6fa4 int

void * func_001D6F84(int param_1)

{
  void *pvVar1;
  
  *(undefined2 *)(DAT_001d6fa4 + param_1) = 2;
  *(undefined1 *)(param_1 + 0x425) = 1;
  *(undefined1 *)(param_1 + 0x426) = 0;
  pvVar1 = (void *)func_0037D414(param_1);
  return pvVar1;
}


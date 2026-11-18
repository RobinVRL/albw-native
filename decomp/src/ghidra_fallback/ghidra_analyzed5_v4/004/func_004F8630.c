#include "ghidra_types.h"

extern int func_004F8660(int *param_1,int param_2,int param_3,int param_4);

// USA 004F8630 <- EU 004F8608 (Ghidra, non-matching)

undefined4 func_004F8630(int param_1)

{
  *(undefined1 *)(param_1 + 0x780) = 0xff;
  return func_004F8660((int *)param_1,0,0,0);
}


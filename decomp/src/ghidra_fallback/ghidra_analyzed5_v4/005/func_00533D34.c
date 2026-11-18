#include "ghidra_types.h"

extern int func_00522C70(int param_1,uint param_2);
extern int func_00522D28(int param_1,uint param_2);
extern int *DAT_00533d48;

// USA 00533D34 <- EU 00533D0C (Ghidra, non-matching)
// GLOBAL DAT_00533d48 int *

undefined4 func_00533D34(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (uint)*(short *)(param_1 + 0x56);
  if ((int)uVar1 < 0) {
    uVar1 = (uint)*(short *)(param_1 + 0x54);
  }
  if (*(int *)(param_2 + 0x50) == *(int *)(*(int *)(*(int *)(param_1 + 0x634) + 8) + 0x50)) {
    return func_00522D28(*DAT_00533d48,uVar1);
  }
  return func_00522C70(*DAT_00533d48,uVar1);
}


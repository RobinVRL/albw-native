#include "ghidra_types.h"

extern int func_0010AA9C(void);
extern int DAT_003df7ac;

// USA 003DF770 <- EU 003DF750 (Ghidra, non-matching)
// GLOBAL DAT_003df7ac int

bool func_003DF770(int param_1,int param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = func_0010AA9C();
  if (iVar1 != 0) {
    puVar2 = *(uint **)(param_1 + (*(ushort *)(DAT_003df7ac + param_1) & 1) * 0x60 + param_2 * 4 +
                       0x10b0);
    *(undefined2 *)(puVar2 + 0xf) = param_3;
    *(undefined2 *)((int)puVar2 + 0x3e) = param_4;
    *puVar2 = *puVar2 | 0x800000;
  }
  return iVar1 != 0;
}


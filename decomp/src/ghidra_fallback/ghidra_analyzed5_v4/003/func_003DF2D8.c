#include "ghidra_types.h"

extern int func_0010AA9C(void);
extern int DAT_003df308;

// USA 003DF2D8 <- EU 003DF2B8 (Ghidra, non-matching)
// GLOBAL DAT_003df308 int

void func_003DF2D8(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = func_0010AA9C();
  if (iVar1 != 0) {
    puVar2 = *(uint **)(param_1 + (*(ushort *)(DAT_003df308 + param_1) & 1) * 0x60 + param_2 * 4 +
                       0x10b0);
    *(undefined1 *)(puVar2 + 0x28) = 1;
    *puVar2 = *puVar2 | 0x10000;
  }
  return;
}


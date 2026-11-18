#include "ghidra_types.h"

extern int func_0010AA9C(void);
extern int DAT_003dea08;

// USA 003DE9C4 <- EU 003DE9A4 (Ghidra, non-matching)
// GLOBAL DAT_003dea08 int

undefined4 func_003DE9C4(int param_1,int param_2,int param_3,undefined1 param_4)

{
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  
  iVar1 = func_0010AA9C();
  uVar3 = 0;
  if (iVar1 != 0) {
    puVar2 = *(uint **)(param_1 + (*(ushort *)(DAT_003dea08 + param_1) & 1) * 0x60 + param_2 * 4 +
                       0x10b0);
    *(char *)(puVar2 + 0xe) = (char)param_3;
    if (param_3 == 0) {
      *(undefined1 *)((int)puVar2 + 0x39) = param_4;
    }
    *puVar2 = *puVar2 | 0x20000;
    uVar3 = 1;
  }
  return uVar3;
}


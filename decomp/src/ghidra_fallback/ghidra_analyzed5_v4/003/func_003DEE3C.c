#include "ghidra_types.h"

extern int func_0010AA9C(void);
extern int DAT_003dee74;

// USA 003DEE3C <- EU 003DEE1C (Ghidra, non-matching)
// GLOBAL DAT_003dee74 int

bool func_003DEE3C(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = func_0010AA9C();
  if (iVar1 != 0) {
    puVar2 = *(uint **)(param_1 + (*(ushort *)(DAT_003dee74 + param_1) & 1) * 0x60 + param_2 * 4 +
                       0x10b0);
    *(ushort *)(puVar2 + 0x28) = (ushort)puVar2[0x28] & 0xff00;
    *puVar2 = *puVar2 | 0x10000;
  }
  return iVar1 != 0;
}


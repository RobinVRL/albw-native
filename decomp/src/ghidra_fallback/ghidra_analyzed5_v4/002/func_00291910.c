#include "ghidra_types.h"

extern int func_0031EFC4(int param_1);
extern int DAT_0029196c;

// USA 00291910 <- EU 00291938 (Ghidra, non-matching)
// GLOBAL DAT_0029196c int

uint func_00291910(int param_1)

{
  bool bVar1;
  int iVar2;
  
  if ((*(char *)(DAT_0029196c + *(short *)(*(int *)(param_1 + 0x14) + 0x42) * 0x10) == '\x02') &&
     (iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 0x48), iVar2 != 0)) {
    bVar1 = func_0031EFC4(iVar2);
    return (uint)bVar1;
  }
  return 0;
}


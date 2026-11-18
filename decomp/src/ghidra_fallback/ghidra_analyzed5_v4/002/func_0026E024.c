#include "ghidra_types.h"

extern int func_0014B1D4(int param_1,int param_2,int param_3);
extern int *DAT_0026e0ac;

// USA 0026E024 <- EU 0026E04C (Ghidra, non-matching)
// GLOBAL DAT_0026e0ac int *

void func_0026E024(int param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = *(int *)(param_1 + 0x1434);
  cVar1 = *(char *)(*(int *)(iVar2 + 0x74) + 0x50);
  bVar3 = cVar1 == '\x02';
  if (bVar3) {
    cVar1 = *(char *)(iVar2 + 0x8c);
  }
  if (bVar3 && cVar1 == '\0') {
    func_0014B1D4(*DAT_0026e0ac,1,0);
    *(uint *)(iVar2 + 0x18) = *(uint *)(iVar2 + 0x18) & 0xfffffffb;
    *(char *)(iVar2 + 0x8c) = *(char *)(iVar2 + 0x8c) + '\x01';
  }
  return;
}


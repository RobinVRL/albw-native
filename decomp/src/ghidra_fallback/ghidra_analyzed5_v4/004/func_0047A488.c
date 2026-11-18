#include "ghidra_types.h"

extern undefined4 DAT_0047a4a8;

// USA 0047A488 <- EU 0047A460 (Ghidra, non-matching)
// GLOBAL DAT_0047a4a8 undefined4

void func_0047A488(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  
  uVar2 = DAT_0047a4a8;
  iVar3 = *(int *)(param_1 + 0x158);
  cVar1 = *(char *)(iVar3 + 0xd0);
  bVar4 = cVar1 == '\x03';
  if (bVar4) {
    cVar1 = *(char *)(iVar3 + 0xf4);
  }
  if ((bVar4 && cVar1 == '\x0f') &&
     (iVar3 = *(int *)(iVar3 + 0x208), *(char *)(iVar3 + 0x24) == '\x06')) {
    *(float *)(iVar3 + 0x70) = *(float *)(iVar3 + 100) + *(float *)(iVar3 + 0x68);
    *(undefined4 *)(iVar3 + 0x74) = uVar2;
  }
  return;
}


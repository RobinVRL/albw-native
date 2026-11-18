#include "ghidra_types.h"

extern int *DAT_0051b598;

// USA 0051B524 <- EU 0051B4FC (Ghidra, non-matching)
// GLOBAL DAT_0051b598 int *

void func_0051B524(int param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  if (*(int *)(param_1 + 0x80) == 0) {
    return;
  }
  bVar3 = *(char *)(*(int *)(param_1 + 0x80) + 0x16c) == '\0';
  iVar2 = 0;
  if (!bVar3) {
    iVar2 = *(int *)(param_1 + 0xd4);
  }
  if (bVar3 || iVar2 == 0) {
    return;
  }
  cVar1 = *(char *)(iVar2 + 0xd);
  bVar3 = cVar1 != '\0';
  if (!bVar3) {
    cVar1 = *(char *)(iVar2 + 0xe);
  }
  if (bVar3 || cVar1 != '\0') {
    return;
  }
  cVar1 = *(char *)(*DAT_0051b598 + 0x18);
  if (cVar1 != '\n') {
    if (cVar1 < '\v') {
      if ((cVar1 != '\0' && cVar1 != '\x02') && (cVar1 != '\x04' && cVar1 != '\t'))
      goto LAB_0051b58c;
    }
    else if ((cVar1 != '\v' && cVar1 != '\f') && (cVar1 != '\x12' && cVar1 != '\x16'))
    goto LAB_0051b58c;
  }
  *(undefined1 *)(iVar2 + 0xe) = 1;
  *(undefined1 *)(*(int *)(param_1 + 0xd4) + 0x8c) = 1;
LAB_0051b58c:
  *(undefined1 *)(*(int *)(param_1 + 0xd4) + 0x94) = 1;
  return;
}


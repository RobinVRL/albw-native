#include "ghidra_types.h"


// USA 0044F2BC <- EU 0044F294 (Ghidra, non-matching)

void * func_0044F2BC(int param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  
  cVar1 = *(char *)(param_1 + 0xd);
  bVar6 = cVar1 == '\0';
  if (bVar6) {
    cVar1 = *(char *)(param_1 + 0xe);
  }
  if (bVar6 && cVar1 == '\0') {
    iVar5 = *(int *)(param_1 + 0x1c);
    iVar3 = 0;
    do {
      iVar4 = *(int *)(param_1 + 0x74 + iVar3 * 4);
      if (iVar4 != 0) {
        bVar2 = *(byte *)(iVar4 + 0x44);
        bVar7 = iVar3 == param_2;
        bVar6 = (bool)(bVar2 & 1);
        if ((bVar2 & 1) != 0) {
          bVar6 = true;
        }
        if ((bVar6 != bVar7) && (*(byte *)(iVar4 + 0x44) = bVar2 & 0xfe | bVar7, bVar7)) {
          *(byte *)(iVar5 + 0x70) = *(byte *)(iVar5 + 0x70) | 2;
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != 5);
    *(undefined1 *)(param_1 + 0xe) = 1;
    return (void *)param_1;
  }
  return (void *)param_1;
}


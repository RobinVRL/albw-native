#include "ghidra_types.h"


// USA 0011E770 <- EU 0011E770 (Ghidra, non-matching)

int func_0011E770(int param_1,int param_2)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  
  piVar1 = (int *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x10) * 0x10);
  if (*(int *)(param_1 + 0x10) != -1) {
    iVar3 = *piVar1;
    pcVar2 = (char *)(param_2 * 0x10 + 0x10 + iVar3);
    if ((pcVar2 != (char *)0x0) && (*pcVar2 == '\x02')) {
      return (uint)*(ushort *)(pcVar2 + 0xe) * 2 + 0x10 + iVar3 + (uint)*(ushort *)*piVar1 * 0x10;
    }
  }
  return 0;
}


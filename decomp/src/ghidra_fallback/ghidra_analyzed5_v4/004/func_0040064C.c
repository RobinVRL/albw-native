#include "ghidra_types.h"


// USA 0040064C <- EU 0040062C (Ghidra, non-matching)

int func_0040064C(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    cVar1 = *(char *)(param_1 + 0x80 + iVar2);
    if (cVar1 != *(char *)(param_2 + iVar2)) {
      return 0;
    }
    if (cVar1 == '\0') break;
    iVar2 = iVar2 + 1;
    if (0x17 < iVar2) {
      return param_1;
    }
  }
  return param_1;
}


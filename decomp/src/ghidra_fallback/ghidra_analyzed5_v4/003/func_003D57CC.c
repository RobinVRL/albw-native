#include "ghidra_types.h"


// USA 003D57CC <- EU 003D57AC (Ghidra, non-matching)

int * func_003D57CC(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  do {
    iVar2 = *(int *)(iVar1 + 0xc);
    while( true ) {
      if (iVar2 == iVar1 + 8) {
        return param_1;
      }
      if ((*(char *)(iVar2 + 0xc) == '\x04') && ((param_2 & 1 << *(sbyte *)(iVar2 + 0xe)) != 0))
      break;
      iVar2 = *(int *)(iVar2 + 4);
    }
    iVar1 = *(int *)(iVar2 + 8);
    *param_1 = iVar1;
  } while( true );
}


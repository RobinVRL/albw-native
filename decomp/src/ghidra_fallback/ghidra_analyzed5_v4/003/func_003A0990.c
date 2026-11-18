#include "ghidra_types.h"


// USA 003A0990 <- EU 003A096C (Ghidra, non-matching)

int func_003A0990(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = iVar2 * 0x88;
    iVar2 = iVar2 + 1;
  } while (iVar2 != 6);
  return param_1 + 0x54 + iVar1;
}


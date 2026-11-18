#include "ghidra_types.h"

extern undefined *DAT_0011a76c;
extern int DAT_0011a770;

// USA 0011A758 <- EU 0011A758 (Ghidra, non-matching)
// GLOBAL DAT_0011a76c undefined *
// GLOBAL DAT_0011a770 int

int func_0011A758(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011a770;
  pcVar1 = DAT_0011a76c;
  iVar3 = DAT_0011a770 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}


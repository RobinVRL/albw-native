#include "ghidra_types.h"

extern undefined *DAT_0011a130;
extern int DAT_0011a134;

// USA 0011A11C <- EU 0011A11C (Ghidra, non-matching)
// GLOBAL DAT_0011a130 undefined *
// GLOBAL DAT_0011a134 int

int func_0011A11C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011a134;
  pcVar1 = DAT_0011a130;
  iVar3 = DAT_0011a134 + 0x108;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}


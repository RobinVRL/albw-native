#include "ghidra_types.h"

extern undefined *DAT_0011bbfc;
extern int DAT_0011bc00;

// USA 0011BBE8 <- EU 0011BBE8 (Ghidra, non-matching)
// GLOBAL DAT_0011bbfc undefined *
// GLOBAL DAT_0011bc00 int

int func_0011BBE8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011bc00;
  pcVar1 = DAT_0011bbfc;
  iVar3 = DAT_0011bc00 + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}


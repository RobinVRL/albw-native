#include "ghidra_types.h"

extern undefined *DAT_0011d850;
extern int DAT_0011d854;

// USA 0011D83C <- EU 0011D83C (Ghidra, non-matching)
// GLOBAL DAT_0011d850 undefined *
// GLOBAL DAT_0011d854 int

int func_0011D83C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011d854;
  pcVar1 = DAT_0011d850;
  iVar3 = DAT_0011d854 + 0x28;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}


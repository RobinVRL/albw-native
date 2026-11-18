#include "ghidra_types.h"

extern undefined *DAT_0011dc40;
extern int DAT_0011dc44;

// USA 0011DC2C <- EU 0011DC2C (Ghidra, non-matching)
// GLOBAL DAT_0011dc40 undefined *
// GLOBAL DAT_0011dc44 int

int func_0011DC2C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011dc44;
  pcVar1 = DAT_0011dc40;
  iVar3 = DAT_0011dc44 + 0x30;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}


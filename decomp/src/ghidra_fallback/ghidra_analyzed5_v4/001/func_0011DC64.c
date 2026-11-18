#include "ghidra_types.h"

extern undefined *DAT_0011dc78;
extern int DAT_0011dc7c;

// USA 0011DC64 <- EU 0011DC64 (Ghidra, non-matching)
// GLOBAL DAT_0011dc78 undefined *
// GLOBAL DAT_0011dc7c int

int func_0011DC64(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011dc7c;
  pcVar1 = DAT_0011dc78;
  iVar3 = DAT_0011dc7c + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}


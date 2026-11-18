#include "ghidra_types.h"

extern undefined *DAT_0011bb1c;
extern int DAT_0011bb20;

// USA 0011BB08 <- EU 0011BB08 (Ghidra, non-matching)
// GLOBAL DAT_0011bb1c undefined *
// GLOBAL DAT_0011bb20 int

int func_0011BB08(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011bb20;
  pcVar1 = DAT_0011bb1c;
  iVar3 = DAT_0011bb20 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}


#include "ghidra_types.h"

extern undefined *DAT_0011c104;
extern int DAT_0011c108;

// USA 0011C0F0 <- EU 0011C0F0 (Ghidra, non-matching)
// GLOBAL DAT_0011c104 undefined *
// GLOBAL DAT_0011c108 int

int func_0011C0F0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011c108;
  pcVar1 = DAT_0011c104;
  iVar3 = DAT_0011c108 + 0xb4;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}


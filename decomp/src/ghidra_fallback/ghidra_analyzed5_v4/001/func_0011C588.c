#include "ghidra_types.h"

extern undefined *DAT_0011c59c;
extern int DAT_0011c5a0;

// USA 0011C588 <- EU 0011C588 (Ghidra, non-matching)
// GLOBAL DAT_0011c59c undefined *
// GLOBAL DAT_0011c5a0 int

int func_0011C588(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011c5a0;
  pcVar1 = DAT_0011c59c;
  iVar3 = DAT_0011c5a0 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}


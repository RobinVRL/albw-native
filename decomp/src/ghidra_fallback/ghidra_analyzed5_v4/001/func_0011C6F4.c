#include "ghidra_types.h"

extern undefined *DAT_0011c708;
extern int DAT_0011c70c;

// USA 0011C6F4 <- EU 0011C6F4 (Ghidra, non-matching)
// GLOBAL DAT_0011c708 undefined *
// GLOBAL DAT_0011c70c int

int func_0011C6F4(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011c70c;
  pcVar1 = DAT_0011c708;
  iVar3 = DAT_0011c70c + 0x108;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}


#include "ghidra_types.h"

extern undefined *DAT_0011c67c;
extern int DAT_0011c680;

// USA 0011C668 <- EU 0011C668 (Ghidra, non-matching)
// GLOBAL DAT_0011c67c undefined *
// GLOBAL DAT_0011c680 int

int func_0011C668(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011c680;
  pcVar1 = DAT_0011c67c;
  iVar3 = DAT_0011c680 + 0x30;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}


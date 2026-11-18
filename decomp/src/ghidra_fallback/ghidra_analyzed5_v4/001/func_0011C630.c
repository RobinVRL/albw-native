#include "ghidra_types.h"

extern undefined *DAT_0011c644;
extern int DAT_0011c648;

// USA 0011C630 <- EU 0011C630 (Ghidra, non-matching)
// GLOBAL DAT_0011c644 undefined *
// GLOBAL DAT_0011c648 int

int func_0011C630(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011c648;
  pcVar1 = DAT_0011c644;
  iVar3 = DAT_0011c648 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}


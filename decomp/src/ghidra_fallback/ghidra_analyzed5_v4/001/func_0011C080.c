#include "ghidra_types.h"

extern undefined *DAT_0011c094;
extern int DAT_0011c098;

// USA 0011C080 <- EU 0011C080 (Ghidra, non-matching)
// GLOBAL DAT_0011c094 undefined *
// GLOBAL DAT_0011c098 int

int func_0011C080(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011c098;
  pcVar1 = DAT_0011c094;
  iVar3 = DAT_0011c098 + 0x48;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}


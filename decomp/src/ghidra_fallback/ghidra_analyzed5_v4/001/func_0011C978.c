#include "ghidra_types.h"

extern undefined *DAT_0011c98c;
extern int DAT_0011c990;

// USA 0011C978 <- EU 0011C978 (Ghidra, non-matching)
// GLOBAL DAT_0011c98c undefined *
// GLOBAL DAT_0011c990 int

int func_0011C978(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011c990;
  pcVar1 = DAT_0011c98c;
  iVar3 = DAT_0011c990 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}


#include "ghidra_types.h"

extern undefined *DAT_0011db7c;
extern int DAT_0011db80;

// USA 0011DB68 <- EU 0011DB68 (Ghidra, non-matching)
// GLOBAL DAT_0011db7c undefined *
// GLOBAL DAT_0011db80 int

int func_0011DB68(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011db80;
  pcVar1 = DAT_0011db7c;
  iVar3 = DAT_0011db80 + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}


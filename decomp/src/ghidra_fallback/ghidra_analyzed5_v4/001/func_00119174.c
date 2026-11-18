#include "ghidra_types.h"

extern undefined *DAT_00119188;
extern int DAT_0011918c;

// USA 00119174 <- EU 00119174 (Ghidra, non-matching)
// GLOBAL DAT_00119188 undefined *
// GLOBAL DAT_0011918c int

int func_00119174(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011918c;
  pcVar1 = DAT_00119188;
  iVar3 = DAT_0011918c + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}


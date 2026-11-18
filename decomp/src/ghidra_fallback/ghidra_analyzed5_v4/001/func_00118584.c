#include "ghidra_types.h"

extern undefined *DAT_00118598;
extern int DAT_0011859c;

// USA 00118584 <- EU 00118584 (Ghidra, non-matching)
// GLOBAL DAT_00118598 undefined *
// GLOBAL DAT_0011859c int

int func_00118584(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011859c;
  pcVar1 = DAT_00118598;
  iVar3 = DAT_0011859c + 0x98;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}


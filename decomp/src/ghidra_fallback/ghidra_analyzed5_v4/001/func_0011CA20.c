#include "ghidra_types.h"

extern undefined *DAT_0011ca34;
extern int DAT_0011ca38;

// USA 0011CA20 <- EU 0011CA20 (Ghidra, non-matching)
// GLOBAL DAT_0011ca34 undefined *
// GLOBAL DAT_0011ca38 int

int func_0011CA20(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011ca38;
  pcVar1 = DAT_0011ca34;
  iVar3 = DAT_0011ca38 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}


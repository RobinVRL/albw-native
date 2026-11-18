#include "ghidra_types.h"

extern undefined *DAT_0011cadc;
extern int DAT_0011cae0;

// USA 0011CAC8 <- EU 0011CAC8 (Ghidra, non-matching)
// GLOBAL DAT_0011cadc undefined *
// GLOBAL DAT_0011cae0 int

int func_0011CAC8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011cae0;
  pcVar1 = DAT_0011cadc;
  iVar3 = DAT_0011cae0 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}


#include "ghidra_types.h"

extern undefined *DAT_00118e78;
extern int DAT_00118e7c;

// USA 00118E64 <- EU 00118E64 (Ghidra, non-matching)
// GLOBAL DAT_00118e78 undefined *
// GLOBAL DAT_00118e7c int

int func_00118E64(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118e7c;
  pcVar1 = DAT_00118e78;
  iVar3 = DAT_00118e7c + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}


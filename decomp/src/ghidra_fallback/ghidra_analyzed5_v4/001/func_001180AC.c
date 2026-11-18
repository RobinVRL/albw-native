#include "ghidra_types.h"

extern undefined *DAT_001180c0;
extern int DAT_001180c4;

// USA 001180AC <- EU 001180AC (Ghidra, non-matching)
// GLOBAL DAT_001180c0 undefined *
// GLOBAL DAT_001180c4 int

int func_001180AC(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001180c4;
  pcVar1 = DAT_001180c0;
  iVar3 = DAT_001180c4 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}


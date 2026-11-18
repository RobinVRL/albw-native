#include "ghidra_types.h"

extern undefined *DAT_00116974;
extern int DAT_00116978;

// USA 00116960 <- EU 00116960 (Ghidra, non-matching)
// GLOBAL DAT_00116974 undefined *
// GLOBAL DAT_00116978 int

int func_00116960(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00116978;
  pcVar1 = DAT_00116974;
  iVar3 = DAT_00116978 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}


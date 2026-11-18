#include "ghidra_types.h"

extern undefined *DAT_00116584;
extern int DAT_00116588;

// USA 00116570 <- EU 00116570 (Ghidra, non-matching)
// GLOBAL DAT_00116584 undefined *
// GLOBAL DAT_00116588 int

int func_00116570(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00116588;
  pcVar1 = DAT_00116584;
  iVar3 = DAT_00116588 + 0x40;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}


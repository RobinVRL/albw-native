#include "ghidra_types.h"

extern undefined *DAT_00118e5c;
extern int DAT_00118e60;

// USA 00118E48 <- EU 00118E48 (Ghidra, non-matching)
// GLOBAL DAT_00118e5c undefined *
// GLOBAL DAT_00118e60 int

int func_00118E48(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118e60;
  pcVar1 = DAT_00118e5c;
  iVar3 = DAT_00118e60 + 0x100;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}


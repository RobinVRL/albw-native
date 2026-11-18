#include "ghidra_types.h"

extern undefined *DAT_00117314;
extern int DAT_00117318;

// USA 00117300 <- EU 00117300 (Ghidra, non-matching)
// GLOBAL DAT_00117314 undefined *
// GLOBAL DAT_00117318 int

int func_00117300(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117318;
  pcVar1 = DAT_00117314;
  iVar3 = DAT_00117318 + 0x78;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}


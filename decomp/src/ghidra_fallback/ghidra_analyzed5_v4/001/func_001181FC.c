#include "ghidra_types.h"

extern undefined *DAT_00118210;
extern int DAT_00118214;

// USA 001181FC <- EU 001181FC (Ghidra, non-matching)
// GLOBAL DAT_00118210 undefined *
// GLOBAL DAT_00118214 int

int func_001181FC(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118214;
  pcVar1 = DAT_00118210;
  iVar3 = DAT_00118214 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}


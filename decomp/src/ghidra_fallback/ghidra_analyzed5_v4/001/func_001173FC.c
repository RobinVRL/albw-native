#include "ghidra_types.h"

extern undefined *DAT_00117410;
extern int DAT_00117414;

// USA 001173FC <- EU 001173FC (Ghidra, non-matching)
// GLOBAL DAT_00117410 undefined *
// GLOBAL DAT_00117414 int

int func_001173FC(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117414;
  pcVar1 = DAT_00117410;
  iVar3 = DAT_00117414 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}


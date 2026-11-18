#include "ghidra_types.h"

extern undefined *DAT_00117ad8;
extern int DAT_00117adc;

// USA 00117AC4 <- EU 00117AC4 (Ghidra, non-matching)
// GLOBAL DAT_00117ad8 undefined *
// GLOBAL DAT_00117adc int

int func_00117AC4(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117adc;
  pcVar1 = DAT_00117ad8;
  iVar3 = DAT_00117adc + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}


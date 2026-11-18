#include "ghidra_types.h"

extern undefined *DAT_00117464;
extern int DAT_00117468;

// USA 00117450 <- EU 00117450 (Ghidra, non-matching)
// GLOBAL DAT_00117464 undefined *
// GLOBAL DAT_00117468 int

int func_00117450(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117468;
  pcVar1 = DAT_00117464;
  iVar3 = DAT_00117468 + 0x28;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}


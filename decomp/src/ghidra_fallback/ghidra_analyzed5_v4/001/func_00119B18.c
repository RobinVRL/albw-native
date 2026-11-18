#include "ghidra_types.h"

extern undefined *DAT_00119b2c;
extern int DAT_00119b30;

// USA 00119B18 <- EU 00119B18 (Ghidra, non-matching)
// GLOBAL DAT_00119b2c undefined *
// GLOBAL DAT_00119b30 int

int func_00119B18(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00119b30;
  pcVar1 = DAT_00119b2c;
  iVar3 = DAT_00119b30 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}


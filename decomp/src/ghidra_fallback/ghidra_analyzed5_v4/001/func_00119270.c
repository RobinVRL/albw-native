#include "ghidra_types.h"

extern undefined *DAT_00119284;
extern int DAT_00119288;

// USA 00119270 <- EU 00119270 (Ghidra, non-matching)
// GLOBAL DAT_00119284 undefined *
// GLOBAL DAT_00119288 int

int func_00119270(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00119288;
  pcVar1 = DAT_00119284;
  iVar3 = DAT_00119288 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}


#include "ghidra_types.h"

extern undefined *DAT_00119cec;
extern int DAT_00119cf0;

// USA 00119CD8 <- EU 00119CD8 (Ghidra, non-matching)
// GLOBAL DAT_00119cec undefined *
// GLOBAL DAT_00119cf0 int

int func_00119CD8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00119cf0;
  pcVar1 = DAT_00119cec;
  iVar3 = DAT_00119cf0 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}


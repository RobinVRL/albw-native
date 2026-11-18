#include "ghidra_types.h"

extern undefined *DAT_00119460;
extern int DAT_00119464;

// USA 0011944C <- EU 0011944C (Ghidra, non-matching)
// GLOBAL DAT_00119460 undefined *
// GLOBAL DAT_00119464 int

int func_0011944C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00119464;
  pcVar1 = DAT_00119460;
  iVar3 = DAT_00119464 + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}


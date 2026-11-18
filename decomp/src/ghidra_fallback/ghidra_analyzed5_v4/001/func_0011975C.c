#include "ghidra_types.h"

extern undefined *DAT_00119770;
extern int DAT_00119774;

// USA 0011975C <- EU 0011975C (Ghidra, non-matching)
// GLOBAL DAT_00119770 undefined *
// GLOBAL DAT_00119774 int

int func_0011975C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00119774;
  pcVar1 = DAT_00119770;
  iVar3 = DAT_00119774 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}


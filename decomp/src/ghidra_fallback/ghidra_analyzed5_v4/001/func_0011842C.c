#include "ghidra_types.h"

extern undefined *DAT_00118440;
extern int DAT_00118444;

// USA 0011842C <- EU 0011842C (Ghidra, non-matching)
// GLOBAL DAT_00118440 undefined *
// GLOBAL DAT_00118444 int

int func_0011842C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118444;
  pcVar1 = DAT_00118440;
  iVar3 = DAT_00118444 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}


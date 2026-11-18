#include "ghidra_types.h"

extern undefined *DAT_00118820;
extern int DAT_00118824;

// USA 0011880C <- EU 0011880C (Ghidra, non-matching)
// GLOBAL DAT_00118820 undefined *
// GLOBAL DAT_00118824 int

int func_0011880C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118824;
  pcVar1 = DAT_00118820;
  iVar3 = DAT_00118824 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}


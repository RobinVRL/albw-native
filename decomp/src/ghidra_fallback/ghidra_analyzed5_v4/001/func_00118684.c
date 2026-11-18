#include "ghidra_types.h"

extern undefined *DAT_00118698;
extern int DAT_0011869c;

// USA 00118684 <- EU 00118684 (Ghidra, non-matching)
// GLOBAL DAT_00118698 undefined *
// GLOBAL DAT_0011869c int

int func_00118684(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011869c;
  pcVar1 = DAT_00118698;
  iVar3 = DAT_0011869c + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}


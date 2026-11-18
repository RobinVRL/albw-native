#include "ghidra_types.h"

extern undefined *DAT_00118890;
extern int DAT_00118894;

// USA 0011887C <- EU 0011887C (Ghidra, non-matching)
// GLOBAL DAT_00118890 undefined *
// GLOBAL DAT_00118894 int

int func_0011887C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118894;
  pcVar1 = DAT_00118890;
  iVar3 = DAT_00118894 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}


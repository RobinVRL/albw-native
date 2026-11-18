#include "ghidra_types.h"

extern undefined *DAT_00117170;
extern int DAT_00117174;

// USA 0011715C <- EU 0011715C (Ghidra, non-matching)
// GLOBAL DAT_00117170 undefined *
// GLOBAL DAT_00117174 int

int func_0011715C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117174;
  pcVar1 = DAT_00117170;
  iVar3 = DAT_00117174 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}


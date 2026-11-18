#include "ghidra_types.h"

extern undefined *DAT_00119850;
extern int DAT_00119854;

// USA 0011983C <- EU 0011983C (Ghidra, non-matching)
// GLOBAL DAT_00119850 undefined *
// GLOBAL DAT_00119854 int

int func_0011983C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00119854;
  pcVar1 = DAT_00119850;
  iVar3 = DAT_00119854 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}


#include "ghidra_types.h"

extern undefined *DAT_00118970;
extern int DAT_00118974;

// USA 0011895C <- EU 0011895C (Ghidra, non-matching)
// GLOBAL DAT_00118970 undefined *
// GLOBAL DAT_00118974 int

int func_0011895C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118974;
  pcVar1 = DAT_00118970;
  iVar3 = DAT_00118974 + 0x3c;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}


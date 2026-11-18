#include "ghidra_types.h"

extern undefined *DAT_00119f54;
extern int DAT_00119f58;

// USA 00119F40 <- EU 00119F40 (Ghidra, non-matching)
// GLOBAL DAT_00119f54 undefined *
// GLOBAL DAT_00119f58 int

int func_00119F40(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00119f58;
  pcVar1 = DAT_00119f54;
  iVar3 = DAT_00119f58 + 0x68;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}


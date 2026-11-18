#include "ghidra_types.h"

extern undefined *DAT_00119f1c;
extern int DAT_00119f20;

// USA 00119F08 <- EU 00119F08 (Ghidra, non-matching)
// GLOBAL DAT_00119f1c undefined *
// GLOBAL DAT_00119f20 int

int func_00119F08(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00119f20;
  pcVar1 = DAT_00119f1c;
  iVar3 = DAT_00119f20 + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}


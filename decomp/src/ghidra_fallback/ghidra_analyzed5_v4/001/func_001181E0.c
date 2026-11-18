#include "ghidra_types.h"

extern undefined *DAT_001181f4;
extern int DAT_001181f8;

// USA 001181E0 <- EU 001181E0 (Ghidra, non-matching)
// GLOBAL DAT_001181f4 undefined *
// GLOBAL DAT_001181f8 int

int func_001181E0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001181f8;
  pcVar1 = DAT_001181f4;
  iVar3 = DAT_001181f8 + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}


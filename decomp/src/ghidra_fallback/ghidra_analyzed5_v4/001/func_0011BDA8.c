#include "ghidra_types.h"

extern undefined *DAT_0011bdbc;
extern int DAT_0011bdc0;

// USA 0011BDA8 <- EU 0011BDA8 (Ghidra, non-matching)
// GLOBAL DAT_0011bdbc undefined *
// GLOBAL DAT_0011bdc0 int

int func_0011BDA8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011bdc0;
  pcVar1 = DAT_0011bdbc;
  iVar3 = DAT_0011bdc0 + 0x28;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}


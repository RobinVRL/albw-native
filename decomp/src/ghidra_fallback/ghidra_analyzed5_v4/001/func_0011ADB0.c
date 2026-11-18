#include "ghidra_types.h"

extern undefined *DAT_0011adc4;
extern int DAT_0011adc8;

// USA 0011ADB0 <- EU 0011ADB0 (Ghidra, non-matching)
// GLOBAL DAT_0011adc4 undefined *
// GLOBAL DAT_0011adc8 int

int func_0011ADB0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011adc8;
  pcVar1 = DAT_0011adc4;
  iVar3 = DAT_0011adc8 + 0x28;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}


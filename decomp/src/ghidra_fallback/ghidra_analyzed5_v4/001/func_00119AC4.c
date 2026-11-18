#include "ghidra_types.h"

extern undefined *DAT_00119ad8;
extern int DAT_00119adc;

// USA 00119AC4 <- EU 00119AC4 (Ghidra, non-matching)
// GLOBAL DAT_00119ad8 undefined *
// GLOBAL DAT_00119adc int

int func_00119AC4(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00119adc;
  pcVar1 = DAT_00119ad8;
  iVar3 = DAT_00119adc + 0x100;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}


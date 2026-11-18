#include "ghidra_types.h"

extern undefined *DAT_00119380;
extern int DAT_00119384;

// USA 0011936C <- EU 0011936C (Ghidra, non-matching)
// GLOBAL DAT_00119380 undefined *
// GLOBAL DAT_00119384 int

int func_0011936C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00119384;
  pcVar1 = DAT_00119380;
  iVar3 = DAT_00119384 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}


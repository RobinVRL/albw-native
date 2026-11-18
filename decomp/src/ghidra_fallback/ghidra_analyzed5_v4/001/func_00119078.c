#include "ghidra_types.h"

extern undefined *DAT_0011908c;
extern int DAT_00119090;

// USA 00119078 <- EU 00119078 (Ghidra, non-matching)
// GLOBAL DAT_0011908c undefined *
// GLOBAL DAT_00119090 int

int func_00119078(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00119090;
  pcVar1 = DAT_0011908c;
  iVar3 = DAT_00119090 + 0x18;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}


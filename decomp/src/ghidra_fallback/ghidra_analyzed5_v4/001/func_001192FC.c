#include "ghidra_types.h"

extern undefined *DAT_00119310;
extern int DAT_00119314;

// USA 001192FC <- EU 001192FC (Ghidra, non-matching)
// GLOBAL DAT_00119310 undefined *
// GLOBAL DAT_00119314 int

int func_001192FC(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00119314;
  pcVar1 = DAT_00119310;
  iVar3 = DAT_00119314 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}


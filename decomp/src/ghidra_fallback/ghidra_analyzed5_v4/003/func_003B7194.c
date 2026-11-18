#include "ghidra_types.h"

extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern int DAT_003b71d0;
extern int *DAT_003b71d4;
extern int *DAT_003b71d8;

// USA 003B7194 <- EU 003B7170 (Ghidra, non-matching)
// GLOBAL DAT_003b71d0 int
// GLOBAL DAT_003b71d4 int *
// GLOBAL DAT_003b71d8 int *

undefined4 func_003B7194(int *param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (0x7f < param_2) {
    param_2 = 0;
  }
  iVar2 = 0;
  do {
    iVar3 = iVar2;
    if (*(uint *)(DAT_003b71d0 + iVar2 * 0x10) == param_2) break;
    iVar2 = iVar2 + 1;
    iVar3 = 0;
  } while (iVar2 < 0x1d);
  uVar1 = func_005826A4(*DAT_003b71d8,param_1,DAT_003b71d4,(int *)(DAT_003b71d0 + iVar3 * 0x10 + 4))
  ;
  return uVar1;
}


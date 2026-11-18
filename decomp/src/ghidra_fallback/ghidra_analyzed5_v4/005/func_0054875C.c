#include "ghidra_types.h"

extern int func_005486C4(int param_1);
extern int DAT_0054876c;

// USA 0054875C <- EU 00548734 (Ghidra, non-matching)
// GLOBAL DAT_0054876c int

int func_0054875C(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = func_005486C4(param_1);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (int)*(short *)((int)puVar1 + DAT_0054876c);
  }
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (0x50 < iVar2) {
    iVar2 = 0x50;
  }
  return iVar2;
}


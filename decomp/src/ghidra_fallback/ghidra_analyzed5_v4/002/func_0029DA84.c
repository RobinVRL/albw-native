#include "ghidra_types.h"

extern int func_0029E40C(int param_1);
extern int func_004C403C(int param_1,undefined1 param_2);
extern int *DAT_0029da9c;
extern undefined4 DAT_0029daa0;
extern int *DAT_0029daa4;

// USA 0029DA84 <- EU 0029DA60 (Ghidra, non-matching)
// GLOBAL DAT_0029da9c int *
// GLOBAL DAT_0029daa0 undefined4
// GLOBAL DAT_0029daa4 int *

void func_0029DA84(void)

{
  int *piVar1;
  int iVar2;
  
  func_0029E40C(*DAT_0029da9c);
  piVar1 = DAT_0029daa4;
  do {
    iVar2 = func_004C403C(*piVar1,1);
  } while (iVar2 == 0);
  return;
}


#include "ghidra_types.h"

extern int func_0010D370(undefined4 *param_1);
extern int DAT_0010cadc;

// USA 0010CAAC <- EU 0010CAAC (Ghidra, non-matching)
// GLOBAL DAT_0010cadc int

undefined4 * func_0010CAAC(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = func_0010D370(param_1);
  iVar1 = DAT_0010cadc;
  piVar2[0x88] = 0;
  *piVar2 = iVar1;
  piVar2[3] = iVar1 + 0x20;
  piVar2[0x89] = 0;
  piVar2[0x8a] = 0;
  *(undefined1 *)(piVar2 + 0x8b) = 0;
  return piVar2;
}


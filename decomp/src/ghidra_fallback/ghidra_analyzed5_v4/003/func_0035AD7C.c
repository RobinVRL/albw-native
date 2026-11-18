#include "ghidra_types.h"

extern int func_0052FD7C(int param_1,undefined *param_2,undefined4 param_3);
extern int DAT_0035ad8c;
extern int *DAT_0035ad90;
extern undefined *DAT_0035ad94;

// USA 0035AD7C <- EU 0035AD58 (Ghidra, non-matching)
// GLOBAL DAT_0035ad8c int
// GLOBAL DAT_0035ad90 int *
// GLOBAL DAT_0035ad94 undefined *

int func_0035AD7C(void)

{
  int iVar1;
  undefined *puVar2;
  
  puVar2 = DAT_0035ad94;
  iVar1 = DAT_0035ad8c;
  *(undefined1 *)(DAT_0035ad8c + 1) = 0;
  func_0052FD7C(*DAT_0035ad90 + 0x3dbbc,puVar2,0);
  return (int)*(char *)(iVar1 + 1);
}


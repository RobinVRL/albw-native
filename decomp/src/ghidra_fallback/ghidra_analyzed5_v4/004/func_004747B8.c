#include "ghidra_types.h"

extern int func_004B9A10(undefined4 *param_1,undefined1 param_2);
extern int DAT_004747e8;
extern int DAT_004747ec;

// USA 004747B8 <- EU 00474790 (Ghidra, non-matching)
// GLOBAL DAT_004747e8 int
// GLOBAL DAT_004747ec int

int * func_004747B8(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = func_004B9A10(param_1,0);
  iVar2 = DAT_004747ec;
  iVar1 = DAT_004747e8;
  piVar3[0xe] = DAT_004747e8 + 0x58;
  *piVar3 = iVar1;
  *(undefined2 *)(piVar3 + 0x1d) = 0;
  *(undefined2 *)((int)piVar3 + 0x76) = 0xffff;
  piVar3[0x1e] = iVar2;
  piVar3[0x1f] = 0;
  piVar3[0x20] = iVar2;
  piVar3[0x21] = iVar2;
  piVar3[0x22] = -1;
  *(undefined1 *)(piVar3 + 0x23) = 0;
  piVar3[0x24] = 0;
  return piVar3;
}


#include "ghidra_types.h"

extern int func_0010C428(undefined4 *param_1);
extern int DAT_0010c4dc;
extern int DAT_0010c4e0;

// USA 0010C484 <- EU 0010C484 (Ghidra, non-matching)
// GLOBAL DAT_0010c4dc int
// GLOBAL DAT_0010c4e0 int

undefined4 func_0010C484(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)func_0010C428(param_1);
  iVar2 = DAT_0010c4e0;
  iVar1 = DAT_0010c4dc;
  *piVar3 = DAT_0010c4dc;
  piVar3[0x17] = 0;
  piVar3[0x16] = iVar1 + 0x24;
  piVar3[0x18] = 0;
  piVar3[0x19] = 0;
  piVar3[0x1a] = iVar2;
  piVar3[0x1b] = iVar2;
  piVar3[0x1c] = iVar2;
  piVar3[0x1d] = iVar2;
  piVar3[0x1e] = iVar2;
  piVar3[0x1f] = iVar2;
  *(undefined1 *)(piVar3 + 0x20) = 1;
  *(undefined1 *)((int)piVar3 + 0x81) = 0;
  *(undefined1 *)((int)piVar3 + 0x82) = 1;
  return (undefined4)param_1;
}


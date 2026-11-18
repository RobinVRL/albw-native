#include "ghidra_types.h"

extern int func_003A55A0(undefined4 *param_1);
extern int DAT_0030e0c8;

// USA 0030E0A0 <- EU 0030E07C (Ghidra, non-matching)
// GLOBAL DAT_0030e0c8 int

undefined4 * func_0030E0A0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = func_003A55A0(param_1);
  iVar1 = DAT_0030e0c8;
  piVar2[3] = DAT_0030e0c8 + 0x58;
  *piVar2 = iVar1;
  *(undefined1 *)((int)piVar2 + 0x147) = 0;
  piVar3 = piVar2 + 0x52;
  piVar2[0x53] = (int)piVar3;
  piVar2[0x54] = 0;
  piVar2[0x55] = -1;
  *piVar3 = (int)piVar3;
  *(undefined1 *)(piVar2 + 0x56) = 0;
  piVar2[0x55] = 4;
  return piVar2;
}


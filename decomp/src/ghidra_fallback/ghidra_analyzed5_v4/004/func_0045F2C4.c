#include "ghidra_types.h"

extern int func_004412DC(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern int *DAT_0045f2cc;

// USA 0045F2C4 <- EU 0045F29C (Ghidra, non-matching)
// GLOBAL DAT_0045f2cc int *

undefined4 func_0045F2C4(int param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *(ushort *)(*DAT_0045f2cc + 0x33e);
  iVar2 = *DAT_0045f2cc;
  uVar3 = uVar1 & 0xffffffed;
  *(undefined2 *)(iVar2 + 0x33e) = (short)uVar3;
  return func_004412DC(param_1,(undefined2 *)(iVar2 + 0x33e),uVar3,uVar1 & 0xfffffffd);
}


#include "ghidra_types.h"

extern int func_00324A30(undefined4 *param_1,uint *param_2);
extern int func_0036D6F4(undefined4 *param_1,int param_2);
extern int func_00503324(undefined4 *param_1);
extern int DAT_001e6d44;
extern int DAT_001e6d48;

// USA 001E6CEC <- EU 001E6CEC (Ghidra, non-matching)
// GLOBAL DAT_001e6d44 int
// GLOBAL DAT_001e6d48 int

undefined4 * func_001E6CEC(undefined4 *param_1,uint *param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  piVar1 = (int *)func_00324A30(param_1,param_2);
  iVar3 = DAT_001e6d44 + 0x98;
  *piVar1 = DAT_001e6d44;
  piVar1[200] = iVar3;
  *(undefined1 *)((int)piVar1 + 0x475) = (undefined1)param_3;
  *(undefined1 *)((int)piVar1 + 0x476) = 0;
  iVar3 = func_00503324(piVar1 + 0x11e);
  puVar2 = func_0036D6F4((undefined4 *)(iVar3 + 0x2e4),iVar3 + -0x478);
  *(undefined2 *)(DAT_001e6d48 + (int)(puVar2 + -0x1d7)) = 0;
  return puVar2 + -0x1d7;
}


#include "ghidra_types.h"

extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int func_001B6E04(undefined4 *param_1);
extern int DAT_004b9a6c;

// USA 004B9A10 <- EU 004B99E8 (Ghidra, non-matching)
// GLOBAL DAT_004b9a6c int

undefined4 * func_004B9A10(undefined4 *param_1,undefined1 param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  puVar1 = func_001B6E04(param_1);
  piVar2 = func_0010DA7C(puVar1 + 0xe,0,3);
  iVar4 = DAT_004b9a6c + 0x54;
  piVar2[-0xe] = DAT_004b9a6c;
  piVar3 = piVar2 + 4;
  *piVar2 = iVar4;
  piVar2[5] = (int)piVar3;
  piVar2[6] = 0;
  *piVar3 = (int)piVar3;
  piVar2[9] = (int)(piVar2 + 8);
  piVar2[10] = 0;
  piVar2[8] = (int)(piVar2 + 8);
  piVar2[0xc] = 2;
  piVar2[0xd] = 0;
  *(undefined1 *)(piVar2 + 0xe) = param_2;
  piVar2[7] = 4;
  piVar2[0xb] = 0x18;
  piVar2[-10] = (int)(piVar2 + -0xe);
  piVar2[-8] = piVar2[-8] | 0x180;
  return piVar2 + -0xe;
}


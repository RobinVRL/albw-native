#include "ghidra_types.h"

extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern undefined4 DAT_003638d4;
extern undefined4 DAT_003638d8;
extern int *DAT_003638dc;

// USA 00363888 <- EU 00363864 (Ghidra, non-matching)
// GLOBAL DAT_003638d4 undefined4
// GLOBAL DAT_003638d8 undefined4
// GLOBAL DAT_003638dc int *

undefined4 func_00363888(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar3 = func_0010DA7C(param_1,0,3);
  uVar1 = DAT_003638d4;
  puVar3[5] = 0;
  *puVar3 = uVar1;
  puVar3[4] = param_2;
  puVar3[6] = 0;
  puVar3[7] = 0;
  piVar2 = DAT_003638dc;
  uVar1 = DAT_003638d8;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = uVar1;
  puVar3[0xb] = param_3;
  iVar4 = *(int *)(*(int *)(*piVar2 + 0x10) + 0x3d4);
  puVar3[0xd] = 0;
  puVar3[0xc] = iVar4 + param_3 * 0xec;
  return (undefined4)param_1;
}


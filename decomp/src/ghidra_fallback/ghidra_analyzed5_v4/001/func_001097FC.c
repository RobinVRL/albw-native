#include "ghidra_types.h"

extern int func_0010B880(undefined4 *param_1,byte *param_2);
extern int func_0010DA24(int param_1,undefined4 param_2);
extern undefined4 DAT_00109834;
extern int *DAT_00109838;

// USA 001097FC <- EU 001097FC (Ghidra, non-matching)
// GLOBAL DAT_00109834 undefined4
// GLOBAL DAT_00109838 int *

undefined4 * func_001097FC(undefined4 *param_1,byte *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar3 = func_0010B880(param_1,param_2);
  uVar1 = DAT_00109834;
  *puVar3 = DAT_00109834;
  puVar3[0x52] = 0;
  puVar3[0x53] = 0;
  iVar4 = func_0010DA24((int)(puVar3 + 0x54),uVar1);
  piVar2 = DAT_00109838;
  *(undefined1 *)(iVar4 + 8) = 0;
  *piVar2 = iVar4 + -0x150;
  return (undefined4 *)(iVar4 + -0x150);
}


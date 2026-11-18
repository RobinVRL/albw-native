#include "ghidra_types.h"

extern float DAT_0056c554;
extern float DAT_0056c558;
extern int DAT_0056c55c;

// USA 0056C524 <- EU 0056C4FC (Ghidra, non-matching)
// GLOBAL DAT_0056c554 float
// GLOBAL DAT_0056c558 float
// GLOBAL DAT_0056c55c int

void func_0056C524(undefined4 param_1,undefined4 param_2,undefined4 *param_3,float fparam_0)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = (int)((DAT_0056c554 - fparam_0) * fparam_0 * DAT_0056c558);
  if (iVar2 < 0x5d) {
    if (iVar2 < 0) {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 0x5c;
  }
  puVar1 = (undefined4 *)(DAT_0056c55c + iVar2 * 10);
  *param_3 = *puVar1;
  param_3[1] = puVar1[1];
  *(undefined2 *)(param_3 + 2) = *(undefined2 *)(puVar1 + 2);
  return;
}


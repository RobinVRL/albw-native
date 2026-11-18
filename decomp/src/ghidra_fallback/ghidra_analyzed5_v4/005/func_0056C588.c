#include "ghidra_types.h"

extern float DAT_0056c5b8;
extern float DAT_0056c5bc;
extern int DAT_0056c5c0;

// USA 0056C588 <- EU 0056C560 (Ghidra, non-matching)
// GLOBAL DAT_0056c5b8 float
// GLOBAL DAT_0056c5bc float
// GLOBAL DAT_0056c5c0 int

void func_0056C588(undefined4 param_1,undefined4 param_2,undefined4 *param_3,float fparam_0)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = (int)((DAT_0056c5b8 - fparam_0) * fparam_0 * DAT_0056c5bc);
  if (iVar2 < 0x5d) {
    if (iVar2 < 0) {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 0x5c;
  }
  puVar1 = (undefined4 *)(DAT_0056c5c0 + iVar2 * 10);
  *param_3 = *puVar1;
  param_3[1] = puVar1[1];
  *(undefined2 *)(param_3 + 2) = *(undefined2 *)(puVar1 + 2);
  return;
}


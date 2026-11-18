#include "ghidra_types.h"

extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int func_00588BE4(int param_1);
extern int *DAT_0029f24c;
extern undefined4 *DAT_0029f250;
extern int *DAT_0029f254;
extern int DAT_0029f258;

// USA 0029F1F0 <- EU 0029F1CC (Ghidra, non-matching)
// GLOBAL DAT_0029f24c int *
// GLOBAL DAT_0029f250 undefined4 *
// GLOBAL DAT_0029f254 int *
// GLOBAL DAT_0029f258 int

void func_0029F1F0(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  
  uVar4 = 0xffffffff;
  iVar1 = func_00588BE4(param_1);
  if (iVar1 == *DAT_0029f24c) {
    uVar4 = *DAT_0029f250;
  }
  iVar1 = *DAT_0029f254;
  piVar3 = *(int **)(DAT_0029f258 + iVar1);
  piVar2 = (int *)func_005841A8(iVar1,uVar4,*(int **)(DAT_0029f258 + -8 + iVar1));
  if (piVar2 != piVar3) {
    while (*(short *)(*piVar2 + 0x54) != *(short *)(param_1 + 0x54)) {
      if (piVar2 == piVar3) {
        return;
      }
    }
    *(undefined4 *)(param_1 + 0x44c) = *(undefined4 *)(*piVar2 + 0x2cc);
  }
  return;
}


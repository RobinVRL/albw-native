#include "ghidra_types.h"

extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int *DAT_0013b474;
extern undefined4 DAT_0013b478;

// USA 0013B418 <- EU 0013B418 (Ghidra, non-matching)
// GLOBAL DAT_0013b474 int *
// GLOBAL DAT_0013b478 undefined4

int func_0013B418(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  piVar1 = DAT_0013b474;
  if (*DAT_0013b474 == 0) {
    puVar2 = (undefined4 *)func_0010CEE0(0x18,param_1,4);
    if (puVar2 == (undefined4 *)0x0) {
      piVar1[1] = 0;
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar3 = func_0010DA7C(puVar2,param_1,3);
      *puVar3 = DAT_0013b478;
      piVar1[1] = (int)puVar3;
    }
    *piVar1 = (int)puVar2;
  }
  return *piVar1;
}


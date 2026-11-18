#include "ghidra_types.h"

extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int func_004AF18C(int param_1);
extern int *DAT_004ae114;
extern undefined4 DAT_004ae118;

// USA 004AE0E0 <- EU 004AE0B8 (Ghidra, non-matching)
// GLOBAL DAT_004ae114 int *
// GLOBAL DAT_004ae118 undefined4

void func_004AE0E0(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  piVar1 = DAT_004ae114;
  if (*DAT_004ae114 == 0) {
    puVar2 = (undefined4 *)func_0010CEE0(0x68,param_1,4);
    if (puVar2 == (undefined4 *)0x0) {
      piVar1[1] = 0;
      iVar4 = 0;
    }
    else {
      puVar3 = func_0010DA7C(puVar2,param_1,3);
      *puVar3 = DAT_004ae118;
      piVar1[1] = (int)puVar3;
      iVar4 = func_004AF18C((int)puVar2);
    }
    *piVar1 = iVar4;
  }
  return;
}


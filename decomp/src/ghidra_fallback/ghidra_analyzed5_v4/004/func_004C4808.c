#include "ghidra_types.h"

extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int func_004C5B2C(int param_1);
extern int *DAT_004c483c;
extern undefined4 DAT_004c4840;
extern undefined4 DAT_004c4844;

// USA 004C4808 <- EU 004C47E0 (Ghidra, non-matching)
// GLOBAL DAT_004c483c int *
// GLOBAL DAT_004c4840 undefined4
// GLOBAL DAT_004c4844 undefined4

void func_004C4808(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  piVar1 = DAT_004c483c;
  if (*DAT_004c483c == 0) {
    puVar2 = (undefined4 *)func_0010CEE0(DAT_004c4840,param_1,4);
    if (puVar2 == (undefined4 *)0x0) {
      piVar1[1] = 0;
      iVar4 = 0;
    }
    else {
      puVar3 = func_0010DA7C(puVar2,param_1,3);
      *puVar3 = DAT_004c4844;
      piVar1[1] = (int)puVar3;
      iVar4 = func_004C5B2C((int)puVar2);
    }
    *piVar1 = iVar4;
  }
  return;
}


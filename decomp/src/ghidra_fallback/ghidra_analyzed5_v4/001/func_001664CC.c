#include "ghidra_types.h"

extern int func_0010B3EC(undefined4 *param_1,int param_2,int param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int *DAT_00166564;
extern undefined4 DAT_00166568;
extern undefined4 *DAT_0016656c;

// USA 001664CC <- EU 001664D0 (Ghidra, non-matching)
// GLOBAL DAT_00166564 int *
// GLOBAL DAT_00166568 undefined4
// GLOBAL DAT_0016656c undefined4 *

int func_001664CC(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  piVar1 = DAT_00166564;
  if (*DAT_00166564 == 0) {
    puVar3 = (undefined4 *)func_0010CEE0(0xa8,param_1,4);
    if (puVar3 == (undefined4 *)0x0) {
      piVar1[1] = 0;
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar4 = func_0010DA7C(puVar3,param_1,3);
      *puVar4 = DAT_00166568;
      puVar2 = DAT_0016656c;
      piVar1[1] = (int)puVar4;
      uVar5 = puVar2[1];
      puVar3[4] = *puVar2;
      puVar3[5] = uVar5;
      puVar3[6] = 0;
      puVar3[7] = 0;
      puVar3[8] = 0;
      func_0010B3EC(puVar3 + 6,0x20,(int)(puVar3 + 9));
      *(undefined1 *)(puVar3 + 0x29) = 1;
      *(undefined1 *)((int)puVar3 + 0xa5) = 0;
    }
    *piVar1 = (int)puVar3;
  }
  return *piVar1;
}


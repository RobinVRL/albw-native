#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int func_00346538(undefined4 *param_1);
extern int *DAT_00518420;
extern undefined4 DAT_00518424;
extern undefined4 DAT_00518428;

// USA 005183CC <- EU 005183A4 (Ghidra, non-matching)
// GLOBAL DAT_00518420 int *
// GLOBAL DAT_00518424 undefined4
// GLOBAL DAT_00518428 undefined4

int func_005183CC(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  piVar1 = DAT_00518420;
  if (*DAT_00518420 == 0) {
    puVar2 = (undefined4 *)func_0010CEE0(0x18,param_1,4);
    if (puVar2 == (undefined4 *)0x0) {
      piVar1[1] = 0;
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar3 = func_0010DA7C(puVar2,param_1,3);
      *puVar3 = DAT_00518424;
      piVar1[1] = (int)puVar3;
      puVar4 = (undefined4 *)func_0010BAB4(DAT_00518428);
      puVar3 = (undefined4 *)0x0;
      if (puVar4 != (undefined4 *)0x0) {
        puVar3 = func_00346538(puVar4);
      }
      puVar2[4] = puVar3;
      puVar2[5] = 0;
    }
    *piVar1 = (int)puVar2;
  }
  return *piVar1;
}


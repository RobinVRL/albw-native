#include "ghidra_types.h"

extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int *DAT_00361528;
extern undefined4 DAT_0036152c;

// USA 003614CC <- EU 003614A8 (Ghidra, non-matching)
// GLOBAL DAT_00361528 int *
// GLOBAL DAT_0036152c undefined4

int func_003614CC(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  piVar1 = DAT_00361528;
  if (*DAT_00361528 == 0) {
    puVar2 = (undefined4 *)func_0010CEE0(0x30,param_1,4);
    if (puVar2 == (undefined4 *)0x0) {
      piVar1[1] = 0;
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar3 = func_0010DA7C(puVar2,param_1,3);
      *puVar3 = DAT_0036152c;
      piVar1[1] = (int)puVar3;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[8] = 0;
      puVar2[9] = 0;
      puVar2[10] = 0;
      puVar2[0xb] = 0;
    }
    *piVar1 = (int)puVar2;
  }
  return *piVar1;
}


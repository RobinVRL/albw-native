#include "ghidra_types.h"

extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int *DAT_002dfbfc;
extern undefined4 DAT_002dfc00;
extern undefined4 DAT_002dfc04;

// USA 002DFB9C <- EU 002DFB78 (Ghidra, non-matching)
// GLOBAL DAT_002dfbfc int *
// GLOBAL DAT_002dfc00 undefined4
// GLOBAL DAT_002dfc04 undefined4

int func_002DFB9C(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  piVar1 = DAT_002dfbfc;
  if (*DAT_002dfbfc == 0) {
    puVar3 = (undefined4 *)func_0010CEE0(0x30,param_1,4);
    puVar4 = (undefined4 *)0x0;
    if (puVar3 + 1 != (undefined4 *)0x0) {
      puVar4 = func_0010DA7C(puVar3 + 1,param_1,3);
      *puVar4 = DAT_002dfc00;
    }
    piVar1[1] = (int)puVar4;
    uVar2 = DAT_002dfc04;
    if (puVar3 != (undefined4 *)0x0) {
      puVar3[5] = 0;
      puVar3[7] = 0;
      *puVar3 = uVar2;
      puVar3[8] = 0;
      puVar3[9] = 0;
      puVar3[10] = 0;
      puVar3[0xb] = 0;
    }
    *piVar1 = (int)puVar3;
  }
  return *piVar1;
}


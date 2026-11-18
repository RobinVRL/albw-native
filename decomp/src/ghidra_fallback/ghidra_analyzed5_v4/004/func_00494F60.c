#include "ghidra_types.h"

extern int func_0010CE7C(undefined4 *param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern int *DAT_00494fc4;
extern undefined4 DAT_00494fc8;
extern undefined4 DAT_00494fcc;
extern undefined4 *DAT_00494fd0;

// USA 00494F60 <- EU 00494F38 (Ghidra, non-matching)
// GLOBAL DAT_00494fc4 int *
// GLOBAL DAT_00494fc8 undefined4
// GLOBAL DAT_00494fcc undefined4
// GLOBAL DAT_00494fd0 undefined4 *

void func_00494F60(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  piVar1 = DAT_00494fc4;
  if (*DAT_00494fc4 == 0) {
    puVar2 = (undefined4 *)func_0010CEE0(0x54,param_1,4);
    puVar3 = (undefined4 *)0x0;
    if (puVar2 + 4 != (undefined4 *)0x0) {
      puVar3 = func_0010DA7C(puVar2 + 4,param_1,3);
      *puVar3 = DAT_00494fc8;
    }
    piVar1[1] = (int)puVar3;
    if (puVar2 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = func_0010CE7C(puVar2);
      *puVar3 = DAT_00494fcc;
      puVar3[8] = 0;
      func_001119F4(puVar3 + 9,DAT_00494fd0);
    }
    *piVar1 = (int)puVar3;
  }
  return;
}


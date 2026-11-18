#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int func_003303D4(undefined4 *param_1);
extern int *DAT_004ab518;
extern undefined4 DAT_004ab51c;

// USA 004AB4D0 <- EU 004AB4A8 (Ghidra, non-matching)
// GLOBAL DAT_004ab518 int *
// GLOBAL DAT_004ab51c undefined4

int func_004AB4D0(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  piVar1 = DAT_004ab518;
  if (*DAT_004ab518 == 0) {
    puVar2 = (undefined4 *)func_0010CEE0(0x14,param_1,4);
    if (puVar2 == (undefined4 *)0x0) {
      piVar1[1] = 0;
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar3 = func_0010DA7C(puVar2,param_1,3);
      *puVar3 = DAT_004ab51c;
      piVar1[1] = (int)puVar3;
      puVar4 = (undefined4 *)func_0010BAB4(500);
      puVar3 = (undefined4 *)0x0;
      if (puVar4 != (undefined4 *)0x0) {
        puVar3 = func_003303D4(puVar4);
      }
      puVar2[4] = puVar3;
    }
    *piVar1 = (int)puVar2;
  }
  return *piVar1;
}


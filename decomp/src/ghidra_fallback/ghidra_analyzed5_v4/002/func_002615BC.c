#include "ghidra_types.h"

extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int func_0019CE50(undefined4 *param_1);
extern int *DAT_00261674;
extern undefined4 DAT_00261678;
extern undefined4 DAT_0026167c;
extern undefined4 DAT_00261680;
extern undefined4 DAT_00261684;

// USA 002615BC <- EU 002615E4 (Ghidra, non-matching)
// GLOBAL DAT_00261674 int *
// GLOBAL DAT_00261678 undefined4
// GLOBAL DAT_0026167c undefined4
// GLOBAL DAT_00261680 undefined4
// GLOBAL DAT_00261684 undefined4

void func_002615BC(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  piVar1 = DAT_00261674;
  if (*DAT_00261674 == 0) {
    puVar2 = (undefined4 *)func_0010CEE0(0x514,param_1,4);
    puVar3 = (undefined4 *)0x0;
    if (puVar2 + 0x141 != (undefined4 *)0x0) {
      puVar3 = func_0010DA7C(puVar2 + 0x141,param_1,3);
      *puVar3 = DAT_00261678;
    }
    piVar1[1] = (int)puVar3;
    if (puVar2 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = (undefined4 *)func_0019CE50(puVar2);
      *puVar3 = DAT_00261684;
    }
    *piVar1 = (int)puVar3;
  }
  return;
}


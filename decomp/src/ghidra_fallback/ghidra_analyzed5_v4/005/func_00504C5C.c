#include "ghidra_types.h"

extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int func_0050547C(int param_1);
extern int DAT_00504c90;
extern undefined4 DAT_00504c94;

// USA 00504C5C <- EU 00504C34 (Ghidra, non-matching)
// GLOBAL DAT_00504c90 int
// GLOBAL DAT_00504c94 undefined4

void func_00504C5C(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = DAT_00504c90;
  if (*(int *)(DAT_00504c90 + 8) == 0) {
    puVar2 = (undefined4 *)func_0010CEE0(0x118,param_1,4);
    if (puVar2 == (undefined4 *)0x0) {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar3 = func_0010DA7C(puVar2,param_1,3);
      *puVar3 = DAT_00504c94;
      *(undefined4 **)(iVar1 + 0xc) = puVar3;
      puVar2 = func_0050547C((int)puVar2);
    }
    *(undefined4 **)(iVar1 + 8) = puVar2;
  }
  return;
}


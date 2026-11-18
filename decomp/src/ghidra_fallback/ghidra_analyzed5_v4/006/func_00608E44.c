#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00374AC4(int param_1);
extern int func_004BE114(int * param_1,int param_2,int param_3,int param_4,undefined4 param_5);
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern int func_006540C8(undefined4 *param_1,uint *param_2,undefined1 param_3);
extern undefined4 DAT_00608ea4;
extern int DAT_00608ea8;
extern undefined4 DAT_00608eac;
extern undefined4 DAT_00608eb0;
extern undefined4 DAT_00608eb4;
extern undefined4 *DAT_00608eb8;

// USA 00608E44 <- EU 00608E1C (Ghidra, non-matching)
// GLOBAL DAT_00608ea4 undefined4
// GLOBAL DAT_00608ea8 int
// GLOBAL DAT_00608eac undefined4
// GLOBAL DAT_00608eb0 undefined4
// GLOBAL DAT_00608eb4 undefined4
// GLOBAL DAT_00608eb8 undefined4 *

int * func_00608E44(uint *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00608ea4);
  piVar2 = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = (int *)func_006540C8(puVar1,param_1,2);
    iVar3 = DAT_00608ea8 + 0xbc;
    *piVar2 = DAT_00608ea8;
    piVar2[200] = iVar3;
    func_004BE114(piVar2,3,0,0,DAT_00608eb4);
    func_00374AC4((int)piVar2);
    func_004C03B8((int)piVar2,DAT_00608eb8);
  }
  return piVar2;
}


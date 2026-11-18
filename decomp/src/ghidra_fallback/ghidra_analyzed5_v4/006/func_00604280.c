#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00339CC4(undefined4 *param_1,uint *param_2,int param_3,undefined4 param_4, undefined1 param_5);
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern undefined4 DAT_006042ac;
extern undefined4 DAT_006042b0;
extern int DAT_006042b4;
extern undefined4 *DAT_006042b8;

// USA 00604280 <- EU 00604258 (Ghidra, non-matching)
// GLOBAL DAT_006042ac undefined4
// GLOBAL DAT_006042b0 undefined4
// GLOBAL DAT_006042b4 int
// GLOBAL DAT_006042b8 undefined4 *

int * func_00604280(uint *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_006042ac);
  piVar2 = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = func_00339CC4(puVar1,param_1,4,DAT_006042b0,0xff);
    iVar3 = DAT_006042b4 + 0xb8;
    *piVar2 = DAT_006042b4;
    puVar1 = DAT_006042b8;
    piVar2[200] = iVar3;
    func_004C03B8((int)piVar2,puVar1);
  }
  return piVar2;
}


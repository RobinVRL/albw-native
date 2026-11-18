#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00339CC4(undefined4 *param_1,uint *param_2,int param_3,undefined4 param_4, undefined1 param_5);
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern undefined4 DAT_00604310;
extern undefined4 DAT_00604314;
extern int DAT_00604318;
extern undefined4 *DAT_0060431c;

// USA 006042E4 <- EU 006042BC (Ghidra, non-matching)
// GLOBAL DAT_00604310 undefined4
// GLOBAL DAT_00604314 undefined4
// GLOBAL DAT_00604318 int
// GLOBAL DAT_0060431c undefined4 *

int * func_006042E4(uint *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00604310);
  piVar2 = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = func_00339CC4(puVar1,param_1,3,DAT_00604314,0xff);
    iVar3 = DAT_00604318 + 0xb8;
    *piVar2 = DAT_00604318;
    puVar1 = DAT_0060431c;
    piVar2[200] = iVar3;
    func_004C03B8((int)piVar2,puVar1);
  }
  return piVar2;
}


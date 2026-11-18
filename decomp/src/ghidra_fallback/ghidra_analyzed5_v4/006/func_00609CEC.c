#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00374AC4(int param_1);
extern int func_004BE114(int * param_1,int param_2,int param_3,int param_4,undefined4 param_5);
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern int func_006540C8(undefined4 *param_1,uint *param_2,undefined1 param_3);
extern undefined4 DAT_00609d4c;
extern int DAT_00609d50;
extern undefined4 DAT_00609d54;
extern undefined4 DAT_00609d58;
extern undefined4 DAT_00609d5c;
extern undefined4 *DAT_00609d60;

// USA 00609CEC <- EU 00609CC4 (Ghidra, non-matching)
// GLOBAL DAT_00609d4c undefined4
// GLOBAL DAT_00609d50 int
// GLOBAL DAT_00609d54 undefined4
// GLOBAL DAT_00609d58 undefined4
// GLOBAL DAT_00609d5c undefined4
// GLOBAL DAT_00609d60 undefined4 *

int * func_00609CEC(uint *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00609d4c);
  piVar2 = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = (int *)func_006540C8(puVar1,param_1,2);
    iVar3 = DAT_00609d50 + 0xbc;
    *piVar2 = DAT_00609d50;
    piVar2[200] = iVar3;
    func_004BE114(piVar2,3,0,0,DAT_00609d5c);
    func_00374AC4((int)piVar2);
    func_004C03B8((int)piVar2,DAT_00609d60);
  }
  return piVar2;
}


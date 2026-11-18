#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00339CC4(undefined4 *param_1,uint *param_2,int param_3,undefined4 param_4, undefined1 param_5);
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern undefined4 DAT_006053d0;
extern undefined4 DAT_006053d4;
extern int DAT_006053d8;
extern undefined4 *DAT_006053dc;

// USA 006053A4 <- EU 0060537C (Ghidra, non-matching)
// GLOBAL DAT_006053d0 undefined4
// GLOBAL DAT_006053d4 undefined4
// GLOBAL DAT_006053d8 int
// GLOBAL DAT_006053dc undefined4 *

int * func_006053A4(uint *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_006053d0);
  piVar2 = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = func_00339CC4(puVar1,param_1,4,DAT_006053d4,0xff);
    iVar3 = DAT_006053d8 + 0xb8;
    *piVar2 = DAT_006053d8;
    puVar1 = DAT_006053dc;
    piVar2[200] = iVar3;
    func_004C03B8((int)piVar2,puVar1);
  }
  return piVar2;
}


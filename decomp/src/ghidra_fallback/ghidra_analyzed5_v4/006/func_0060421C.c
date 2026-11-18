#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00339CC4(undefined4 *param_1,uint *param_2,int param_3,undefined4 param_4, undefined1 param_5);
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern undefined4 DAT_00604248;
extern undefined4 DAT_0060424c;
extern int DAT_00604250;
extern undefined4 *DAT_00604254;

// USA 0060421C <- EU 006041F4 (Ghidra, non-matching)
// GLOBAL DAT_00604248 undefined4
// GLOBAL DAT_0060424c undefined4
// GLOBAL DAT_00604250 int
// GLOBAL DAT_00604254 undefined4 *

int * func_0060421C(uint *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00604248);
  piVar2 = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = func_00339CC4(puVar1,param_1,4,DAT_0060424c,0xff);
    iVar3 = DAT_00604250 + 0xb8;
    *piVar2 = DAT_00604250;
    puVar1 = DAT_00604254;
    piVar2[200] = iVar3;
    func_004C03B8((int)piVar2,puVar1);
  }
  return piVar2;
}


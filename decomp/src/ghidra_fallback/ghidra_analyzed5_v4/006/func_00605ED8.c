#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00339CC4(undefined4 *param_1,uint *param_2,int param_3,undefined4 param_4, undefined1 param_5);
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern undefined4 DAT_00605f0c;
extern undefined4 DAT_00605f10;
extern int DAT_00605f14;
extern undefined4 *DAT_00605f18;

// USA 00605ED8 <- EU 00605EB0 (Ghidra, non-matching)
// GLOBAL DAT_00605f0c undefined4
// GLOBAL DAT_00605f10 undefined4
// GLOBAL DAT_00605f14 int
// GLOBAL DAT_00605f18 undefined4 *

int * func_00605ED8(uint *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  puVar2 = (undefined4 *)func_0010BAB4(DAT_00605f0c);
  piVar3 = (int *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    piVar3 = func_00339CC4(puVar2,param_1,4,DAT_00605f10,0xff);
    iVar1 = DAT_00605f14;
    *(undefined1 *)((int)piVar3 + 0x911) = 3;
    piVar3[200] = iVar1 + 0xb8;
    puVar2 = DAT_00605f18;
    *piVar3 = iVar1;
    func_004C03B8((int)piVar3,puVar2);
  }
  return piVar3;
}


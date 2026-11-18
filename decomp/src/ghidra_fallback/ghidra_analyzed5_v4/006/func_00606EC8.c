#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00339CC4(undefined4 *param_1,uint *param_2,int param_3,undefined4 param_4, undefined1 param_5);
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern undefined4 DAT_00606f24;
extern undefined4 DAT_00606f28;
extern int DAT_00606f2c;
extern undefined4 *DAT_00606f30;
extern int DAT_00606f34;
extern int DAT_00606f38;
extern int DAT_00606f3c;

// USA 00606EC8 <- EU 00606EA0 (Ghidra, non-matching)
// GLOBAL DAT_00606f24 undefined4
// GLOBAL DAT_00606f28 undefined4
// GLOBAL DAT_00606f2c int
// GLOBAL DAT_00606f30 undefined4 *
// GLOBAL DAT_00606f34 int
// GLOBAL DAT_00606f38 int
// GLOBAL DAT_00606f3c int

int * func_00606EC8(uint *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  
  puVar3 = (undefined4 *)func_0010BAB4(DAT_00606f24);
  piVar4 = (int *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    piVar4 = func_00339CC4(puVar3,param_1,4,DAT_00606f28,0xff);
    iVar1 = DAT_00606f2c;
    *(undefined1 *)((int)piVar4 + 0x911) = 3;
    piVar4[200] = iVar1 + 0xb8;
    puVar3 = DAT_00606f30;
    *piVar4 = iVar1;
    func_004C03B8((int)piVar4,puVar3);
    iVar2 = DAT_00606f3c;
    iVar1 = DAT_00606f38;
    piVar4[0x22b] = piVar4[0x22b] | 0x20;
    iVar5 = iVar1 - DAT_00606f34;
    piVar4[0x24e] = DAT_00606f34;
    piVar4[0x24f] = iVar1;
    piVar4[0x250] = iVar2;
    piVar4[0x251] = iVar5;
  }
  return piVar4;
}


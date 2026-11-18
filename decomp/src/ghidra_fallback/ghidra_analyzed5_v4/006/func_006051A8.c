#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00339CC4(undefined4 *param_1,uint *param_2,int param_3,undefined4 param_4, undefined1 param_5);
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern undefined4 DAT_006051f8;
extern undefined4 DAT_006051fc;
extern int DAT_00605200;
extern undefined4 *DAT_00605204;
extern int DAT_00605208;
extern int DAT_0060520c;

// USA 006051A8 <- EU 00605180 (Ghidra, non-matching)
// GLOBAL DAT_006051f8 undefined4
// GLOBAL DAT_006051fc undefined4
// GLOBAL DAT_00605200 int
// GLOBAL DAT_00605204 undefined4 *
// GLOBAL DAT_00605208 int
// GLOBAL DAT_0060520c int

int * func_006051A8(uint *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  
  puVar3 = (undefined4 *)func_0010BAB4(DAT_006051f8);
  piVar4 = (int *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    piVar4 = func_00339CC4(puVar3,param_1,4,DAT_006051fc,0xff);
    iVar1 = DAT_00605200;
    *(undefined1 *)((int)piVar4 + 0x911) = 3;
    piVar4[200] = iVar1 + 0xb8;
    puVar3 = DAT_00605204;
    *piVar4 = iVar1;
    func_004C03B8((int)piVar4,puVar3);
    iVar2 = DAT_0060520c;
    iVar1 = DAT_00605208 << 2;
    iVar5 = DAT_00605208 - DAT_0060520c;
    piVar4[0x24e] = DAT_00605208;
    piVar4[0x24f] = iVar1;
    piVar4[0x250] = iVar2;
    piVar4[0x251] = iVar5;
  }
  return piVar4;
}


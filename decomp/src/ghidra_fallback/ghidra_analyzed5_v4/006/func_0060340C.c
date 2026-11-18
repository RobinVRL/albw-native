#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00339CC4(undefined4 *param_1,uint *param_2,int param_3,undefined4 param_4, undefined1 param_5);
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern undefined4 DAT_00603468;
extern undefined4 DAT_0060346c;
extern int DAT_00603470;
extern undefined4 *DAT_00603474;
extern uint DAT_00603478;
extern int DAT_0060347c;

// USA 0060340C <- EU 006033E4 (Ghidra, non-matching)
// GLOBAL DAT_00603468 undefined4
// GLOBAL DAT_0060346c undefined4
// GLOBAL DAT_00603470 int
// GLOBAL DAT_00603474 undefined4 *
// GLOBAL DAT_00603478 uint
// GLOBAL DAT_0060347c int

int * func_0060340C(uint *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  
  puVar2 = (undefined4 *)func_0010BAB4(DAT_00603468);
  piVar3 = (int *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    piVar3 = func_00339CC4(puVar2,param_1,4,DAT_0060346c,0xff);
    iVar1 = DAT_00603470;
    *(undefined1 *)((int)piVar3 + 0x911) = 3;
    piVar3[200] = iVar1 + 0xb8;
    puVar2 = DAT_00603474;
    *piVar3 = iVar1;
    func_004C03B8((int)piVar3,puVar2);
    iVar1 = DAT_0060347c;
    piVar3[0x22b] = piVar3[0x22b] | 0x20;
    iVar5 = iVar1 + DAT_00603478;
    uVar4 = DAT_00603478 | DAT_00603478 << 1;
    piVar3[0x24e] = DAT_00603478;
    piVar3[0x24f] = uVar4;
    piVar3[0x250] = iVar1;
    piVar3[0x251] = iVar5;
  }
  return piVar3;
}


#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern undefined4 *DAT_005ec6d8;
extern undefined4 *DAT_005ec6dc;
extern undefined4 *DAT_005ec6e0;
extern undefined4 DAT_005ec6e4;
extern undefined4 DAT_005ec6e8;
extern undefined4 DAT_005ec6ec;
extern uint DAT_005ec6f0;
extern uint DAT_005ec6f4;

// USA 005EC6A4 <- EU 005EC67C (Ghidra, non-matching)
// GLOBAL DAT_005ec6d8 undefined4 *
// GLOBAL DAT_005ec6dc undefined4 *
// GLOBAL DAT_005ec6e0 undefined4 *
// GLOBAL DAT_005ec6e4 undefined4
// GLOBAL DAT_005ec6e8 undefined4
// GLOBAL DAT_005ec6ec undefined4
// GLOBAL DAT_005ec6f0 uint
// GLOBAL DAT_005ec6f4 uint

void func_005EC6A4(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  puVar1 = DAT_005ec6d8;
  DAT_005ec6d8[2] = 0xffffffff;
  puVar1[3] = 0xffffffff;
  uVar3 = DAT_005ec6e4;
  puVar1 = DAT_005ec6dc;
  *DAT_005ec6dc = 0;
  puVar1[1] = 0;
  uVar5 = DAT_005ec6ec;
  uVar4 = DAT_005ec6e8;
  puVar2 = DAT_005ec6e0;
  puVar1 = DAT_005ec6d8;
  *DAT_005ec6e0 = uVar3;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  uVar6 = func_00114608(DAT_005ec6f0,0);
  *puVar1 = (int)uVar6;
  uVar6 = func_00114608(DAT_005ec6f4,(uint)((ulonglong)uVar6 >> 0x20));
  puVar1[1] = (int)uVar6;
  return;
}


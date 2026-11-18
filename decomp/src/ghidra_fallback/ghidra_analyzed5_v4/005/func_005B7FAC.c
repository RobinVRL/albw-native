#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int DAT_005b7fe4;
extern undefined4 *DAT_005b7fe8;
extern uint DAT_005b7fec;
extern undefined4 *DAT_005b7ff0;
extern undefined4 *DAT_005b7ff4;
extern undefined4 *DAT_005b7ff8;
extern undefined4 *DAT_005b7ffc;

// USA 005B7FAC <- EU 005B7F84 (Ghidra, non-matching)
// GLOBAL DAT_005b7fe4 int
// GLOBAL DAT_005b7fe8 undefined4 *
// GLOBAL DAT_005b7fec uint
// GLOBAL DAT_005b7ff0 undefined4 *
// GLOBAL DAT_005b7ff4 undefined4 *
// GLOBAL DAT_005b7ff8 undefined4 *
// GLOBAL DAT_005b7ffc undefined4 *

void func_005B7FAC(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  
  iVar1 = DAT_005b7fe4;
  *(undefined4 *)(DAT_005b7fe4 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005b7fe8;
  puVar4 = DAT_005b7fe8 + -4;
  *DAT_005b7fe8 = 0;
  puVar2[1] = 0;
  uVar5 = func_00114608(DAT_005b7fec,0);
  puVar3 = DAT_005b7ff4;
  *puVar4 = (int)uVar5;
  puVar2 = DAT_005b7ff0;
  *DAT_005b7ff0 = *puVar3;
  puVar2[1] = *DAT_005b7ff8;
  puVar2[2] = *DAT_005b7ffc;
  return;
}


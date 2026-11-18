#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_004F8638(int *param_1,undefined1 param_2);
extern int *DAT_0022e53c;
extern uint *DAT_0022e540;
extern undefined4 DAT_0022e544;
extern undefined4 *DAT_0022e548;

// USA 0022E458 <- EU 0022E458 (Ghidra, non-matching)
// GLOBAL DAT_0022e53c int *
// GLOBAL DAT_0022e540 uint *
// GLOBAL DAT_0022e544 undefined4
// GLOBAL DAT_0022e548 undefined4 *

void func_0022E458(int *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  func_004F8638(param_1,0xff);
  param_1[0x167] = param_1[0x167] & 0xffffff7f;
  uVar2 = DAT_0022e544;
  puVar1 = DAT_0022e540;
  if (*(short *)((int)param_1 + 0x2e) == 1) {
    puVar6 = *(undefined4 **)(*DAT_0022e53c + 0x3dbc8);
    for (puVar4 = *(undefined4 **)(*DAT_0022e53c + 0x3dbc0); puVar4 != puVar6; puVar4 = puVar4 + 1)
    {
      puVar5 = (undefined4 *)*puVar4;
      if (((*puVar1 & 1) == 0) && (iVar3 = func_00100174((int *)DAT_0022e540), iVar3 != 0)) {
        *DAT_0022e548 = uVar2;
      }
      if ((puVar5 == (undefined4 *)0x0) ||
         (iVar3 = (**(code **)*puVar5)(puVar5,DAT_0022e548), iVar3 == 0)) {
        puVar5 = (undefined4 *)0x0;
      }
      if (puVar5 != (undefined4 *)0x0) {
        puVar5[200] = param_1[0xf4];
        puVar5[0xc9] = param_1[0xf5];
        puVar5[0xca] = param_1[0xf6];
      }
    }
  }
  return;
}


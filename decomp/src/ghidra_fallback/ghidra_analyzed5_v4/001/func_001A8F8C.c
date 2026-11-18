#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_004F8638(int *param_1,undefined1 param_2);
extern int DAT_001a9084;
extern int *DAT_001a9088;
extern uint *DAT_001a908c;
extern undefined4 DAT_001a9090;
extern undefined4 *DAT_001a9094;

// USA 001A8F8C <- EU 001A8F8C (Ghidra, non-matching)
// GLOBAL DAT_001a9084 int
// GLOBAL DAT_001a9088 int *
// GLOBAL DAT_001a908c uint *
// GLOBAL DAT_001a9090 undefined4
// GLOBAL DAT_001a9094 undefined4 *

void func_001A8F8C(int *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  func_004F8638(param_1,0xff);
  iVar3 = DAT_001a9084;
  param_1[0x167] = param_1[0x167] & 0xffffff7f;
  param_1[0xf7] = iVar3;
  param_1[0xf8] = iVar3;
  param_1[0xf9] = iVar3;
  uVar2 = DAT_001a9090;
  puVar1 = DAT_001a908c;
  if (*(short *)((int)param_1 + 0x2e) == 1) {
    puVar6 = *(undefined4 **)(*DAT_001a9088 + 0x3dbc8);
    for (puVar4 = *(undefined4 **)(*DAT_001a9088 + 0x3dbc0); puVar4 != puVar6; puVar4 = puVar4 + 1)
    {
      puVar5 = (undefined4 *)*puVar4;
      if (((*puVar1 & 1) == 0) && (iVar3 = func_00100174((int *)DAT_001a908c), iVar3 != 0)) {
        *DAT_001a9094 = uVar2;
      }
      if ((puVar5 == (undefined4 *)0x0) ||
         (iVar3 = (**(code **)*puVar5)(puVar5,DAT_001a9094), iVar3 == 0)) {
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


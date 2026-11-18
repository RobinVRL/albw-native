#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0036E490(byte *param_1,uint param_2,undefined4 param_3);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_0032ce44;
extern uint *DAT_0032ce48;
extern undefined4 DAT_0032ce4c;
extern undefined4 *DAT_0032ce50;

// USA 0032CD88 <- EU 0032CD64 (Ghidra, non-matching)
// GLOBAL DAT_0032ce44 int *
// GLOBAL DAT_0032ce48 uint *
// GLOBAL DAT_0032ce4c undefined4
// GLOBAL DAT_0032ce50 undefined4 *

void func_0032CD88(undefined4 *param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  
  uVar3 = DAT_0032ce4c;
  puVar2 = DAT_0032ce48;
  piVar1 = DAT_0032ce44;
  uVar8 = 0;
  do {
    puVar4 = param_1 + 10;
    if (uVar8 < 3) {
      puVar4 = puVar4 + uVar8;
    }
    puVar5 = (undefined4 *)func_0052FBA0(*piVar1 + 0x3dbbc,*puVar4);
    if (((*puVar2 & 1) == 0) && (iVar6 = func_00100174((int *)DAT_0032ce48), iVar6 != 0)) {
      *DAT_0032ce50 = uVar3;
    }
    if ((puVar5 == (undefined4 *)0x0) ||
       (iVar6 = (**(code **)*puVar5)(puVar5,DAT_0032ce50), iVar6 == 0)) {
      puVar5 = (undefined4 *)0x0;
    }
    if (puVar5 != (undefined4 *)0x0) {
      puVar7 = param_1 + 10;
      if (uVar8 < 3) {
        puVar7 = puVar7 + uVar8;
      }
      *(undefined1 *)((int)puVar5 + 0x2d7) = 1;
      *puVar7 = 0;
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 < 3);
  param_1[0x34] = 0;
  func_0036E490((byte *)(param_1 + 0xd),0,*param_1);
  *(undefined1 *)((int)param_1 + 0x9f) = 0;
  return;
}


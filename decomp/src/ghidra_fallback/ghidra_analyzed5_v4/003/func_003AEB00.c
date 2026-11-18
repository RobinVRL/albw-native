#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_003aebc4;
extern uint *DAT_003aebc8;
extern undefined4 DAT_003aebcc;
extern undefined4 *DAT_003aebd0;

// USA 003AEB00 <- EU 003AEADC (Ghidra, non-matching)
// GLOBAL DAT_003aebc4 int *
// GLOBAL DAT_003aebc8 uint *
// GLOBAL DAT_003aebcc undefined4
// GLOBAL DAT_003aebd0 undefined4 *

void func_003AEB00(int param_1)

{
  uint *puVar1;
  int *piVar2;
  uint *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  
  uVar4 = DAT_003aebcc;
  puVar3 = DAT_003aebc8;
  piVar2 = DAT_003aebc4;
  iVar8 = 0;
  uVar5 = *(uint *)(param_1 + 0x324);
  while (puVar1 = (uint *)(uVar5 - 8), puVar1 != (uint *)(param_1 + 0x318)) {
    if (((char)puVar1[1] == '\0') &&
       (puVar6 = (undefined4 *)func_0052FBA0(*piVar2 + 0x3dbbc,*puVar1), puVar6 != (undefined4 *)0x0
       )) {
      if (((*puVar3 & 1) == 0) && (iVar7 = func_00100174((int *)DAT_003aebc8), iVar7 != 0)) {
        *DAT_003aebd0 = uVar4;
      }
      iVar7 = (**(code **)*puVar6)(puVar6,DAT_003aebd0);
      if (iVar7 == 0) {
        puVar6 = (undefined4 *)0x0;
      }
      if ((puVar6 != (undefined4 *)0x0) && (*(char *)((int)puVar6 + 0x496) != '\0')) {
        iVar8 = iVar8 + 1;
        *(undefined1 *)(puVar1 + 1) = 1;
      }
    }
    uVar5 = puVar1[3];
  }
  if ((int)(uint)*(byte *)(param_1 + 0x93c) <= iVar8) {
    *(undefined1 *)(param_1 + 0x93b) = 1;
  }
  return;
}


#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_00379c80;
extern uint *DAT_00379c84;
extern undefined4 DAT_00379c88;
extern undefined4 *DAT_00379c8c;

// USA 00379BC4 <- EU 00379BA0 (Ghidra, non-matching)
// GLOBAL DAT_00379c80 int *
// GLOBAL DAT_00379c84 uint *
// GLOBAL DAT_00379c88 undefined4
// GLOBAL DAT_00379c8c undefined4 *

void func_00379BC4(int param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  uVar3 = DAT_00379c88;
  puVar2 = DAT_00379c84;
  piVar1 = DAT_00379c80;
  puVar6 = *(undefined4 **)(param_1 + 0x414);
  puVar7 = puVar6 + *(int *)(param_1 + 0x40c);
  for (; puVar6 != puVar7; puVar6 = puVar6 + 1) {
    piVar4 = (int *)func_0052FBA0(*piVar1 + 0x3dbbc,*(uint *)*puVar6);
    if (piVar4 != (int *)0x0) {
      if (((*puVar2 & 1) == 0) && (iVar5 = func_00100174((int *)DAT_00379c84), iVar5 != 0)) {
        *DAT_00379c8c = uVar3;
      }
      iVar5 = (**(code **)*piVar4)(piVar4,DAT_00379c8c);
      if (iVar5 == 0) {
        piVar4 = (int *)0x0;
      }
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 0x70))(piVar4);
      }
    }
  }
  if (*(int *)(param_1 + 0x14) == 0x3f800000) {
    *(undefined1 *)(param_1 + 0x2d7) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x4a4) = 1;
    *(undefined4 *)(param_1 + 0x4bc) = 0;
    *(undefined1 *)(param_1 + 0x4ec) = 1;
  }
  return;
}


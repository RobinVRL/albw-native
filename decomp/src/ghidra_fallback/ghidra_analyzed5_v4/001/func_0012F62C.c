#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_0012f74c;
extern uint *DAT_0012f750;
extern undefined4 DAT_0012f754;
extern undefined4 *DAT_0012f758;

// USA 0012F62C <- EU 0012F62C (Ghidra, non-matching)
// GLOBAL DAT_0012f74c int *
// GLOBAL DAT_0012f750 uint *
// GLOBAL DAT_0012f754 undefined4
// GLOBAL DAT_0012f758 undefined4 *

void func_0012F62C(int param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  uint *puVar9;
  int iVar10;
  
  uVar4 = 0;
  do {
    puVar8 = (undefined4 *)(param_1 + 0x2c20);
    if (uVar4 < 2) {
      puVar8 = (undefined4 *)(param_1 + 0x2c20) + uVar4;
    }
    uVar4 = uVar4 + 1;
    *puVar8 = 0;
  } while ((int)uVar4 < 2);
  (**(code **)(**(int **)(param_1 + 0x2c28) + 0x10))(*(int **)(param_1 + 0x2c28));
  piVar1 = DAT_0012f74c;
  *(undefined4 *)(param_1 + 0x2c28) = 0;
  uVar3 = DAT_0012f754;
  puVar2 = DAT_0012f750;
  iVar5 = *piVar1;
  if (iVar5 != 0) {
    iVar10 = *(int *)(param_1 + 0x54);
    if (iVar10 != param_1 + 0x50) {
      do {
        iVar6 = *(int *)(iVar10 + 8);
        iVar7 = 0;
        if (iVar6 != 0) {
          iVar7 = *(int *)(iVar6 + 0x54);
        }
        if ((iVar6 != 0 && iVar7 != 0) &&
           (puVar8 = (undefined4 *)func_0052FBA0(iVar5 + 0x3dbbc,*(uint *)(iVar7 + 4)),
           puVar8 != (undefined4 *)0x0)) {
          if (((*puVar2 & 1) == 0) && (iVar7 = func_00100174((int *)DAT_0012f750), iVar7 != 0)) {
            *DAT_0012f758 = uVar3;
          }
          iVar7 = (**(code **)*puVar8)(puVar8,DAT_0012f758);
          if (iVar7 == 0) {
            puVar8 = (undefined4 *)0x0;
          }
          if (puVar8 != (undefined4 *)0x0) {
            puVar9 = (uint *)(*(int *)(iVar10 + 8) + 0x164);
            *puVar9 = *puVar9 & 0xfffffffe;
          }
        }
        iVar10 = *(int *)(iVar10 + 4);
      } while (iVar10 != param_1 + 0x50);
    }
  }
  return;
}


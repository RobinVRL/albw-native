#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_00304ab8;
extern uint *DAT_00304abc;
extern undefined4 DAT_00304ac0;
extern undefined4 *DAT_00304ac4;

// USA 00304A18 <- EU 003049F4 (Ghidra, non-matching)
// GLOBAL DAT_00304ab8 int *
// GLOBAL DAT_00304abc uint *
// GLOBAL DAT_00304ac0 undefined4
// GLOBAL DAT_00304ac4 undefined4 *

void func_00304A18(int param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  uVar3 = DAT_00304ac0;
  puVar2 = DAT_00304abc;
  piVar1 = DAT_00304ab8;
  if (*(char *)(param_1 + 0x4bc) != '\0') {
    return;
  }
  iVar7 = 0;
  do {
    uVar6 = *(uint *)(param_1 + 0x4f4 + iVar7 * 4);
    if (uVar6 != 0) {
      puVar4 = (undefined4 *)func_0052FBA0(*piVar1 + 0x3dbbc,uVar6);
      if (((*puVar2 & 1) == 0) && (iVar5 = func_00100174((int *)DAT_00304abc), iVar5 != 0)) {
        *DAT_00304ac4 = uVar3;
      }
      if ((puVar4 == (undefined4 *)0x0) ||
         (iVar5 = (**(code **)*puVar4)(puVar4,DAT_00304ac4), iVar5 == 0)) {
        puVar4 = (undefined4 *)0x0;
      }
      if (puVar4 == (undefined4 *)0x0) {
        return;
      }
      *(undefined1 *)(puVar4 + 0x12f) = 1;
    }
    iVar7 = iVar7 + 1;
    if (iVar7 == 4) {
      return;
    }
  } while( true );
}


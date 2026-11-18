#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_00332bc8;
extern uint *DAT_00332bcc;
extern undefined4 DAT_00332bd0;
extern undefined4 *DAT_00332bd4;

// USA 00332B3C <- EU 00332B18 (Ghidra, non-matching)
// GLOBAL DAT_00332bc8 int *
// GLOBAL DAT_00332bcc uint *
// GLOBAL DAT_00332bd0 undefined4
// GLOBAL DAT_00332bd4 undefined4 *

void func_00332B3C(int param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  uVar3 = DAT_00332bd0;
  puVar2 = DAT_00332bcc;
  piVar1 = DAT_00332bc8;
  iVar7 = 0;
  do {
    uVar6 = *(uint *)(param_1 + 0x4fc + iVar7 * 4);
    if (uVar6 != 0) {
      puVar4 = (undefined4 *)func_0052FBA0(*piVar1 + 0x3dbbc,uVar6);
      if (((*puVar2 & 1) == 0) && (iVar5 = func_00100174((int *)DAT_00332bcc), iVar5 != 0)) {
        *DAT_00332bd4 = uVar3;
      }
      if ((puVar4 == (undefined4 *)0x0) ||
         (iVar5 = (**(code **)*puVar4)(puVar4,DAT_00332bd4), iVar5 == 0)) {
        puVar4 = (undefined4 *)0x0;
      }
      *(undefined1 *)((int)puVar4 + 0x4bd) = 1;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 != 4);
  return;
}


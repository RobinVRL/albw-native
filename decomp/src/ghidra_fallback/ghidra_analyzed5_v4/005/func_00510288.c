#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_00510350;
extern uint *DAT_00510354;
extern undefined4 DAT_00510358;
extern undefined4 *DAT_0051035c;

// USA 00510288 <- EU 00510260 (Ghidra, non-matching)
// GLOBAL DAT_00510350 int *
// GLOBAL DAT_00510354 uint *
// GLOBAL DAT_00510358 undefined4
// GLOBAL DAT_0051035c undefined4 *

undefined4 func_00510288(int param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  uVar3 = DAT_00510358;
  puVar2 = DAT_00510354;
  piVar1 = DAT_00510350;
  if (*(char *)(param_1 + 0x420) == '\0') {
    iVar7 = 0;
    do {
      uVar6 = *(uint *)(param_1 + 0x478 + iVar7 * 4);
      if (uVar6 != 0) {
        puVar4 = (undefined4 *)func_0052FBA0(*piVar1 + 0x3dbbc,uVar6);
        if (((*puVar2 & 1) == 0) && (iVar5 = func_00100174((int *)DAT_00510354), iVar5 != 0)) {
          *DAT_0051035c = uVar3;
        }
        if ((puVar4 == (undefined4 *)0x0) ||
           (iVar5 = (**(code **)*puVar4)(puVar4,DAT_0051035c), iVar5 == 0)) {
          puVar4 = (undefined4 *)0x0;
        }
        if (puVar4 != (undefined4 *)0x0) {
          *(undefined1 *)((int)puVar4 + 0x2d7) = 1;
          *(undefined4 *)(param_1 + iVar7 * 4 + 0x478) = 0;
        }
      }
      iVar7 = iVar7 + 1;
      if (*(char *)(param_1 + 0x477) == '\0') {
        iVar5 = 1;
      }
      else {
        iVar5 = 4;
      }
    } while (iVar7 < iVar5);
    uVar3 = 1;
    *(undefined1 *)(param_1 + 0x2d7) = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


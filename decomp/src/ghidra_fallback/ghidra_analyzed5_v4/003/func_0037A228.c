#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_0037a320;
extern int *DAT_0037a324;
extern uint *DAT_0037a328;
extern undefined4 DAT_0037a32c;
extern undefined4 *DAT_0037a330;

// USA 0037A228 <- EU 0037A204 (Ghidra, non-matching)
// GLOBAL DAT_0037a320 int *
// GLOBAL DAT_0037a324 int *
// GLOBAL DAT_0037a328 uint *
// GLOBAL DAT_0037a32c undefined4
// GLOBAL DAT_0037a330 undefined4 *

undefined4 func_0037A228(int param_1)

{
  bool bVar1;
  int *piVar2;
  uint *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  uVar4 = DAT_0037a32c;
  puVar3 = DAT_0037a328;
  piVar2 = DAT_0037a324;
  if ((*(int *)(*DAT_0037a320 + 0x44) != 0) &&
     (*(int *)(*DAT_0037a320 + 0x44) == *(int *)(param_1 + 0x4a8))) {
    puVar7 = *(undefined4 **)(param_1 + 0x414);
    bVar1 = true;
    puVar8 = puVar7 + *(int *)(param_1 + 0x40c);
    for (; puVar7 != puVar8; puVar7 = puVar7 + 1) {
      puVar5 = (undefined4 *)func_0052FBA0(*piVar2 + 0x3dbbc,*(uint *)*puVar7);
      if (puVar5 != (undefined4 *)0x0) {
        if (((*puVar3 & 1) == 0) && (iVar6 = func_00100174((int *)DAT_0037a328), iVar6 != 0)) {
          *DAT_0037a330 = uVar4;
        }
        iVar6 = (**(code **)*puVar5)(puVar5,DAT_0037a330);
        if (iVar6 == 0) {
          puVar5 = (undefined4 *)0x0;
        }
        if ((puVar5 != (undefined4 *)0x0) && (*(char *)((int)puVar5 + 0x829) != '\0')) {
          bVar1 = false;
          break;
        }
      }
    }
    if (0 < *(int *)(param_1 + 0x4bc)) {
      *(int *)(param_1 + 0x4bc) = *(int *)(param_1 + 0x4bc) + -1;
    }
    if ((bVar1) && (*(int *)(param_1 + 0x4bc) == 0)) {
      return 1;
    }
  }
  return 0;
}


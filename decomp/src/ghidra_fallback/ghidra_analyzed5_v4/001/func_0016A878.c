#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0016A65C(uint *param_1);
extern undefined *DAT_0016a904;
extern int DAT_0016a908;
extern undefined *DAT_0016a90c;

// USA 0016A878 <- EU 0016A878 (Ghidra, non-matching)
// GLOBAL DAT_0016a904 undefined *
// GLOBAL DAT_0016a908 int
// GLOBAL DAT_0016a90c undefined *

uint * func_0016A878(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  
  puVar2 = (uint *)func_00100118(param_1,DAT_0016a904,8,4);
  iVar1 = DAT_0016a908;
  puVar7 = puVar2 + 8;
  iVar6 = 0;
  do {
    uVar5 = *(uint *)(iVar1 + iVar6 * 4);
    if (uVar5 * 4 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (int)puVar7 + 3U & 0xfffffffc;
      puVar7 = (uint *)(uVar3 + uVar5 * 4);
    }
    uVar4 = 0;
    if (uVar3 != 0) {
      uVar4 = func_00100118(uVar3,DAT_0016a90c,4,uVar5);
    }
    if ((0 < (int)uVar5) && (uVar4 != 0)) {
      (puVar2 + iVar6 * 2)[1] = uVar4;
      puVar2[iVar6 * 2] = uVar5;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 4);
  func_0016A65C(puVar2);
  return puVar2;
}


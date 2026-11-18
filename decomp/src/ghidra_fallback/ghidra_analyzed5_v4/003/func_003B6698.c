#include "ghidra_types.h"

extern int func_0031B7D0(int param_1);
extern int func_0055696C(int param_1,int param_2);
extern int *DAT_003b6704;

// USA 003B6698 <- EU 003B6674 (Ghidra, non-matching)
// GLOBAL DAT_003b6704 int *

void func_003B6698(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  iVar4 = 1;
  *param_1 = 0;
  iVar1 = 1;
  do {
    param_1[iVar4] = 0;
    iVar1 = iVar1 + 2;
    param_1[iVar4 + 1] = 0;
    iVar4 = iVar4 + 2;
  } while (iVar1 < 0x2d);
  iVar1 = *DAT_003b6704;
  if (iVar1 != 0) {
    uVar5 = 0;
    do {
      uVar2 = func_0031B7D0(uVar5);
      if (uVar2 != 0x20) {
        puVar6 = param_1;
        if (uVar2 < 0x2d) {
          puVar6 = param_1 + uVar2;
        }
        uVar3 = func_0055696C(iVar1,uVar5);
        *puVar6 = uVar3;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0x2d);
  }
  return;
}


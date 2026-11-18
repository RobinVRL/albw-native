#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int *DAT_001e5574;

// USA 001E5518 <- EU 001E5518 (Ghidra, non-matching)
// GLOBAL DAT_001e5574 int *

void func_001E5518(int param_1,int param_2,uint *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar5;
  int iVar6;
  int *piVar7;
  uint *puVar4;
  
  piVar1 = DAT_001e5574;
  piVar5 = *(int **)(param_1 + 0x480);
  iVar2 = *(int *)(param_1 + 0x478);
  piVar7 = piVar5 + iVar2;
  if (piVar5 != piVar7) {
    do {
      if (param_3 == (uint *)0x0) {
        iVar2 = *piVar1;
      }
      iVar6 = *piVar5;
      puVar4 = param_3;
      if (param_3 == (uint *)0x0) {
        puVar4 = (uint *)(iVar2 + 0x660);
      }
      uVar3 = func_00111A64(puVar4);
      piVar5 = piVar5 + 1;
      iVar2 = (int)((ulonglong)(uint)(param_2 * 2) * (ulonglong)uVar3 >> 0x20) - param_2;
      *(int *)(iVar6 + 0x20) = iVar2;
    } while (piVar5 != piVar7);
  }
  return;
}


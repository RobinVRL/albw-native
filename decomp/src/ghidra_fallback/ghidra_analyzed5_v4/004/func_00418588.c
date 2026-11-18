#include "ghidra_types.h"

extern int DAT_00418620;
extern undefined4 DAT_00418624;

// USA 00418588 <- EU 00418568 (Ghidra, non-matching)
// GLOBAL DAT_00418620 int
// GLOBAL DAT_00418624 undefined4

void func_00418588(uint param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  int extraout_r1;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined4 uVar7;
  
  uVar6 = param_3 & 0xff;
  software_interrupt(0x28);
  iVar3 = uVar6 * 3;
  cVar1 = *(char *)(DAT_00418620 + 1);
  iVar2 = DAT_00418620 + uVar6 * 0xc;
  piVar5 = *(int **)(iVar2 + 0x58);
  if (cVar1 == '\x02') {
    uVar7 = 4;
  }
  else {
    uVar7 = 2;
  }
  if (piVar5 != (int *)(iVar2 + 0x58)) {
    do {
      (**(code **)(piVar5[-1] + 0x10))(piVar5 + -1,uVar7,param_1,param_2,2,cVar1);
      piVar5 = (int *)*piVar5;
      iVar3 = extraout_r1;
    } while (piVar5 != (int *)(iVar2 + 0x58));
  }
  software_interrupt(0x28);
  iVar4 = DAT_00418620 + uVar6 * 8;
  *(uint *)(iVar4 + 0x280) = (iVar2 + 0x58U) - param_1;
  *(uint *)(iVar4 + 0x284) = iVar3 - (param_2 + (uint)(iVar2 + 0x58U < param_1));
  return;
}


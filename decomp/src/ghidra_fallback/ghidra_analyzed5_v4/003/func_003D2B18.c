#include "ghidra_types.h"

extern int func_003D2EDC(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
extern uint DAT_003d2b84;
extern int DAT_003d2b88;

// USA 003D2B18 <- EU 003D2AF4 (Ghidra, non-matching)
// GLOBAL DAT_003d2b84 uint
// GLOBAL DAT_003d2b88 int

uint func_003D2B18(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  iVar1 = DAT_003d2b88;
  puVar4 = *(uint **)(DAT_003d2b88 + 8);
  uVar3 = DAT_003d2b84;
  if (puVar4 != (uint *)0x0) {
    uVar2 = 1 << (param_2 + param_3 & 0xffU);
    uVar3 = *(uint *)(DAT_003d2b88 + 0xc) & uVar2;
    if (param_1 == 0) {
      if (uVar3 == 0) {
        return DAT_003d2b84;
      }
      uVar3 = func_003D2EDC(puVar4,0,param_2,param_3);
      uVar2 = *(uint *)(iVar1 + 0xc) & ~uVar2;
    }
    else {
      if (uVar3 != 0) {
        return DAT_003d2b84;
      }
      uVar3 = func_003D2EDC(puVar4,param_1,param_2,param_3);
      uVar2 = *(uint *)(iVar1 + 0xc) | uVar2;
    }
    *(uint *)(iVar1 + 0xc) = uVar2;
  }
  return uVar3;
}


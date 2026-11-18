#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_003F6A8C(int param_1);
extern undefined4 *DAT_003f6e60;

// USA 003F6E04 <- EU 003F6DE4 (Ghidra, non-matching)
// GLOBAL DAT_003f6e60 undefined4 *

void func_003F6E04(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  
  func_003F6A8C(param_1);
  puVar1 = DAT_003f6e60;
  DAT_003f6e60[1] = 0;
  puVar4 = (uint *)*puVar1;
  iVar2 = *(int *)(param_1 + 0x144) + 0x23c;
  if (puVar4 != (uint *)0x0) {
    puVar3 = *(uint **)(iVar2 + puVar1[6] * 4);
    iVar2 = *(int *)(iVar2 + puVar1[6] * 4 + 8);
    if (iVar2 != 0 && puVar3 != (uint *)0x0) {
      func_0010E3C4(puVar4,puVar3,iVar2 << 2);
      puVar4 = puVar4 + iVar2;
    }
  }
  *puVar1 = puVar4;
  puVar1[2] = puVar1[2] + 1;
  return;
}


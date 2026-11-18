#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_003F6A8C(int param_1);
extern int *DAT_003f6a64;
extern int *DAT_003f6a68;

// USA 003F6A10 <- EU 003F69F0 (Ghidra, non-matching)
// GLOBAL DAT_003f6a64 int *
// GLOBAL DAT_003f6a68 int *

void func_003F6A10(int param_1)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  
  func_003F6A8C(param_1);
  piVar1 = DAT_003f6a64;
  iVar2 = DAT_003f6a64[1];
  DAT_003f6a64[1] = iVar2 + 1;
  if (iVar2 + 1 == 8) {
    puVar3 = (uint *)*piVar1;
    iVar2 = *DAT_003f6a68;
    func_0010E3C4(puVar3,*(uint **)(iVar2 + 0x1c),*(int *)(iVar2 + 0x20) << 2);
    *piVar1 = (int)(puVar3 + *(int *)(iVar2 + 0x20));
    iVar2 = piVar1[1];
    piVar1[1] = 0;
    piVar1[2] = piVar1[2] + iVar2;
  }
  return;
}


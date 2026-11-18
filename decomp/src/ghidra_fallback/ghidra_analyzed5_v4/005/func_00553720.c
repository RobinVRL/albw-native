#include "ghidra_types.h"

extern int func_0052E620(int param_1,int param_2);
extern int func_0052E83C(int param_1);
extern int func_00552FC0(uint param_1);
extern int DAT_005537f4;

// USA 00553720 <- EU 005536F8 (Ghidra, non-matching)
// GLOBAL DAT_005537f4 int

uint func_00553720(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  if (param_2 != 0) {
    if (param_2 == 8) {
      bVar4 = func_0052E620(*(int *)(param_1 + 0x28),0);
      return (uint)bVar4;
    }
    if (param_2 == 9) {
      uVar2 = func_0052E83C(*(int *)(param_1 + 0x28));
      return uVar2;
    }
    iVar3 = DAT_005537f4 + param_2 * 0xc;
    uVar2 = *(uint *)(iVar3 + 8);
    bVar4 = *(int *)(*(int *)(param_1 + 0x28) + 0x5b0) != 0x3f800000;
    if ((uVar2 & 1) == 0) {
      if (((uVar2 & 2) == 0) && (bVar4)) {
        return 0;
      }
    }
    else if (!bVar4) {
      return 0;
    }
    uVar2 = func_00552FC0(*(uint *)(param_1 + 0x50));
    uVar1 = *(uint *)(iVar3 + 8);
    if ((uVar1 & 4) == 0) {
      if (((uVar1 & 8) == 0) && ((uVar2 ^ 1) != 0)) {
        return 0;
      }
    }
    else if ((uVar2 ^ 1) == 0) {
      return 0;
    }
    bVar4 = **(int **)(param_1 + 0x44) != 0;
    if ((uVar1 & 0x10) == 0) {
      if ((uVar1 & 0x20) != 0) {
        return 1;
      }
      if (!bVar4) {
        return 1;
      }
    }
    else if (bVar4) {
      return 1;
    }
  }
  return 0;
}


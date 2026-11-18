#include "ghidra_types.h"

extern int func_00230610(int param_1,undefined4 param_2);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_003049f0;

// USA 003049A8 <- EU 00304984 (Ghidra, non-matching)
// GLOBAL DAT_003049f0 int *

void func_003049A8(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = DAT_003049f0;
  if (*(char *)(param_1 + 0x4bc) == '\0') {
    iVar4 = param_1 + 0x4f4;
    iVar3 = 0;
    do {
      uVar2 = *(uint *)(iVar4 + iVar3 * 4);
      if (uVar2 != 0) {
        func_0052FBA0(*piVar1 + 0x3dbbc,uVar2);
        func_00230610(*(int *)(param_1 + 0x488),*(undefined4 *)(iVar4 + iVar3 * 4));
        func_00230610(*(int *)(param_1 + 0x508),*(undefined4 *)(iVar4 + iVar3 * 4));
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != 4);
  }
  return;
}


#include "ghidra_types.h"

extern int func_00230610(int param_1,undefined4 param_2);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_00332b14;

// USA 00332AB8 <- EU 00332A94 (Ghidra, non-matching)
// GLOBAL DAT_00332b14 int *

void func_00332AB8(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  piVar1 = DAT_00332b14;
  if (*(char *)(param_1 + 0x4bc) == '\0') {
    iVar4 = 0;
    do {
      uVar3 = *(uint *)(param_1 + 0x4fc + iVar4 * 4);
      if (uVar3 != 0) {
        iVar2 = func_0052FBA0(*piVar1 + 0x3dbbc,uVar3);
        func_00230610(*(int *)(param_1 + 0x488),*(undefined4 *)(param_1 + 0x4fc + iVar4 * 4));
        if (*(short *)(iVar2 + 0x2c) == 1) {
          *(undefined1 *)(param_1 + 0x519) = 1;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 4);
    if (*(short *)(param_1 + 0x2c) == 1) {
      *(undefined1 *)(param_1 + 0x519) = 1;
    }
  }
  return;
}


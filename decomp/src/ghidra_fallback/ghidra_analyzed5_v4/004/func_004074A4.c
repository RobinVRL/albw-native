#include "ghidra_types.h"

extern int func_0040411C(undefined4 param_1);
extern int func_00404138(undefined4 param_1,undefined1 param_2);

// USA 004074A4 <- EU 00407484 (Ghidra, non-matching)

void func_004074A4(byte *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (*param_1 < param_2) {
    if (*(int *)(param_1 + 4) != 0) {
      func_0040411C(*(int *)(param_1 + 4));
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      *param_1 = 0;
      param_1[1] = 0;
    }
    iVar1 = func_00404138(param_2 << 5,4);
    iVar3 = 0;
    if ((iVar1 != 0) && (uVar2 = 0, iVar3 = iVar1, param_2 * 4 != 0)) {
      do {
        uVar2 = uVar2 + 1;
      } while (uVar2 < param_2 * 4);
    }
    *(int *)(param_1 + 4) = iVar3;
    if (iVar3 != 0) {
      *param_1 = (byte)param_2;
    }
  }
  return;
}


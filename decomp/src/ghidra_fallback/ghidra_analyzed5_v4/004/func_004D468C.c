#include "ghidra_types.h"


// USA 004D468C <- EU 004D4664 (Ghidra, non-matching)

undefined4 func_004D468C(int param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  float fVar6;
  
  iVar2 = 0;
  uVar1 = 0;
  if (*(int *)(param_1 + 0x620) != 0) {
    do {
      if (*(char *)(*(int *)(param_1 + 0x624) + iVar2 * 0x118) == '\0') {
        if (uVar1 < *(uint *)(param_1 + 0x478)) {
          iVar3 = *(int *)(*(int *)(param_1 + 0x480) + uVar1 * 4);
        }
        else {
          iVar3 = 0;
        }
        fVar6 = *(float *)(iVar3 + 4);
        bVar4 = *param_2 == fVar6;
        bVar5 = fVar6 <= *param_2;
        if (!bVar5 || bVar4) {
          bVar4 = fVar6 == param_2[3];
          bVar5 = param_2[3] <= fVar6;
        }
        if ((((!bVar5 || bVar4) && (param_2[1] <= *(float *)(iVar3 + 8))) &&
            (*(float *)(iVar3 + 8) <= param_2[4])) &&
           ((param_2[2] <= *(float *)(iVar3 + 0xc) && (*(float *)(iVar3 + 0xc) <= param_2[5])))) {
          return 1;
        }
      }
      iVar2 = iVar2 + 1;
      uVar1 = uVar1 + 1;
    } while (iVar2 != *(int *)(param_1 + 0x620));
  }
  return 0;
}


#include "ghidra_types.h"


// USA 004A6B8C <- EU 004A6B64 (Ghidra, non-matching)

int func_004A6B8C(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = 0;
  iVar5 = 0;
  iVar6 = *(int *)(*param_1 + 0xc);
  if (0 < iVar6) {
    do {
      iVar2 = param_1[2] + iVar5 * 0xc;
      iVar7 = (int)*(short *)(iVar2 + 10);
      iVar2 = (int)*(short *)(iVar2 + 8);
      if (iVar2 <= iVar7) {
        do {
          iVar3 = iVar2 + 1;
          pcVar4 = (char *)(*(int *)(param_1[4] + iVar2 * 0x44 + 0x3c) + *(int *)(*param_1 + 0x1c));
          if (*pcVar4 != '\0' && pcVar4 != (char *)0x0) {
            iVar1 = iVar1 + 1;
          }
          iVar2 = iVar3;
        } while (iVar3 <= iVar7);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar6);
  }
  return iVar1;
}


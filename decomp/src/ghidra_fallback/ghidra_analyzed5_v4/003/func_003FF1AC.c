#include "ghidra_types.h"

extern int func_003FD9B4(int *param_1,uint *param_2);

// USA 003FF1AC <- EU 003FF18C (Ghidra, non-matching)

undefined4 func_003FF1AC(int param_1,uint *param_2,char *param_3)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  iVar1 = func_003FD9B4((int *)(param_1 + 4),param_2);
  uVar4 = 0;
  if (iVar1 != 0) {
    uVar5 = 0;
    *(uint **)(param_1 + 0x20) = param_2;
    pcVar2 = (char *)(param_1 + 0x3c);
    do {
      uVar5 = uVar5 + 1;
      pcVar3 = pcVar2 + 1;
      *pcVar2 = *param_3;
      param_3 = param_3 + 1;
      bVar7 = *param_3 == '\0';
      uVar6 = 0;
      if (!bVar7) {
        uVar6 = 0x3f;
      }
      pcVar2 = pcVar3;
    } while ((bVar7 || uVar5 <= uVar6) && (!bVar7 && uVar6 != uVar5));
    *pcVar3 = '\0';
    uVar4 = 1;
  }
  return uVar4;
}


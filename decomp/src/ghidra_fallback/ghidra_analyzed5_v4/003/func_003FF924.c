#include "ghidra_types.h"


// USA 003FF924 <- EU 003FF904 (Ghidra, non-matching)

void func_003FF924(int param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  uVar3 = 0;
  pcVar1 = (char *)(param_1 + 0x99);
  do {
    uVar3 = uVar3 + 1;
    pcVar2 = pcVar1 + 1;
    *pcVar1 = *param_2;
    param_2 = param_2 + 1;
    bVar5 = *param_2 == '\0';
    uVar4 = 0;
    if (!bVar5) {
      uVar4 = 8;
    }
    pcVar1 = pcVar2;
  } while ((bVar5 || uVar3 <= uVar4) && (!bVar5 && uVar4 != uVar3));
  *pcVar2 = '\0';
  return;
}


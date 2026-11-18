#include "ghidra_types.h"

extern int func_00103CBC(char *param_1);

// USA 00408974 <- EU 00408954 (Ghidra, non-matching)

void func_00408974(int param_1,char *param_2)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = func_00103CBC(param_2);
  pcVar4 = (char *)(param_1 + 0xc);
  uVar6 = 0;
  if ((0xfe < uVar1) || (uVar1 != 0)) {
    pcVar2 = param_2;
    pcVar5 = pcVar4;
    do {
      uVar6 = uVar6 + 1;
      pcVar4 = pcVar5 + 1;
      *pcVar5 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      if (*pcVar2 == '\0') break;
      uVar7 = uVar1;
      if (0xfe < uVar1) {
        uVar7 = 0xff;
      }
      pcVar5 = pcVar4;
    } while (uVar6 < uVar7);
  }
  *pcVar4 = '\0';
  if (param_2[uVar1 - 1] != '/') {
    iVar3 = param_1 + uVar1;
    uVar1 = uVar1 + 1;
    *(undefined1 *)(iVar3 + 0xc) = 0x2f;
  }
  *(undefined1 *)(param_1 + uVar1 + 0xc) = 0;
  return;
}


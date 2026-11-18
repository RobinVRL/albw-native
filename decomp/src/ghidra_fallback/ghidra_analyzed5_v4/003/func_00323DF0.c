#include "ghidra_types.h"

extern longlong func_001104E4(int param_1,int param_2);

// USA 00323DF0 <- EU 00323DCC (Ghidra, non-matching)

bool func_00323DF0(char *param_1,char param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  
  iVar6 = 0;
  uVar5 = (int)(char)(param_2 << 1) - 1;
  do {
    lVar7 = func_001104E4(uVar5,8);
    iVar2 = (int)lVar7;
    iVar3 = iVar2;
    if (0 < iVar2) {
      iVar3 = uVar5 + iVar2 * -8;
    }
    if ((iVar2 < 0) || ((cVar1 = (char)iVar3, iVar2 < 1 && (cVar1 = (char)uVar5, (int)uVar5 < 0))))
    {
      cVar1 = ((char)iVar3 + '\x01') * '\b' + (char)uVar5;
    }
    uVar5 = uVar5 + 1;
    pcVar4 = param_1;
    if ((uint)(int)cVar1 < 8) {
      pcVar4 = param_1 + cVar1 * 0x10;
    }
    if (*pcVar4 != '\0') {
      iVar6 = iVar6 + 1;
    }
  } while ((int)uVar5 < (char)(param_2 << 1) + 1);
  if (param_3 != (int *)0x0) {
    *param_3 = iVar6;
  }
  return iVar6 != 0;
}


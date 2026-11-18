#include "ghidra_types.h"

extern undefined4 DAT_00103d18;

// USA 00103CBC <- EU 00103CBC (Ghidra, non-matching)
// GLOBAL DAT_00103d18 undefined4

int func_00103CBC(char *param_1)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  
  pcVar5 = param_1;
  while (((uint)pcVar5 & 3) != 0) {
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
    if (cVar1 == '\0') {
      return (int)pcVar6 - (int)(param_1 + 1);
    }
  }
  do {
    pcVar6 = pcVar5 + 4;
    uVar8 = *(undefined4 *)pcVar5;
    cVar1 = UnsignedSaturate((char)DAT_00103d18 - (char)uVar8,0x10);
    uVar2 = UnsignedSaturate((char)((uint)DAT_00103d18 >> 8) - (char)((uint)uVar8 >> 8),0x10);
    uVar3 = UnsignedSaturate((char)((uint)DAT_00103d18 >> 0x10) - (char)((uint)uVar8 >> 0x10),0x10);
    uVar4 = UnsignedSaturate((char)((uint)DAT_00103d18 >> 0x18) - (char)((uint)uVar8 >> 0x18),0x10);
    pcVar5 = pcVar6;
  } while ((((uVar4 & 0xff) == 0 && uVar3 == 0) && uVar2 == 0) && cVar1 == '\0');
  iVar7 = (int)pcVar6 - (int)(param_1 + 1);
  if (cVar1 != '\0') {
    return iVar7 + -3;
  }
  if ((uVar2 & 0xff) != 0) {
    return iVar7 + -2;
  }
  if ((uVar3 & 0xff) != 0 || uVar2 != 0) {
    iVar7 = iVar7 + -1;
  }
  return iVar7;
}


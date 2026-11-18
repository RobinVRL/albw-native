#include "ghidra_types.h"

extern int func_0031C064(int param_1,uint param_2);
extern int *DAT_0043fbc4;

// USA 0043FB44 <- EU 0043FB24 (Ghidra, non-matching)
// GLOBAL DAT_0043fbc4 int *

void func_0043FB44(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 1;
  iVar2 = *DAT_0043fbc4;
  if (*(char *)(iVar2 + 0x18) == '\0') {
    if (*(int *)(iVar2 + 0x1c) != 0x2a) goto LAB_0043fb70;
  }
  else if ((*(char *)(iVar2 + 0x18) != '\x05') || (*(int *)(iVar2 + 0x1c) != 9)) goto LAB_0043fb70;
  uVar5 = 0;
LAB_0043fb70:
  func_0031C064(*(int *)(param_1 + 0x16c),uVar5);
  iVar2 = *(int *)(param_1 + 0x1c);
  iVar3 = *(int *)(param_1 + 0x178);
  if (iVar3 != 0) {
    bVar1 = *(byte *)(iVar3 + 0x44);
    uVar4 = bVar1 & 1;
    if ((bVar1 & 1) != 0) {
      uVar4 = 1;
    }
    if ((uVar4 != uVar5) && (*(byte *)(iVar3 + 0x44) = bVar1 & 0xfe | (byte)uVar5, uVar5 != 0)) {
      *(byte *)(iVar2 + 0x70) = *(byte *)(iVar2 + 0x70) | 2;
    }
  }
  return;
}


#include "ghidra_types.h"

extern int DAT_0023336c;

// USA 0023328C <- EU 0023328C (Ghidra, non-matching)
// GLOBAL DAT_0023336c int

uint func_0023328C(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar4 = 0;
  uVar1 = 0xffffffff;
  do {
    iVar2 = param_1 + iVar4 * DAT_0023336c * 4;
    uVar3 = 0;
    uVar6 = *(uint *)(iVar2 + 0x161c);
    if (0 < (int)uVar6) {
      do {
        iVar5 = *(int *)(iVar2 + 0x1624);
        if (uVar3 < *(uint *)(iVar2 + 0x161c)) {
          iVar5 = *(int *)(iVar2 + 0x1624) + uVar3 * 0x38;
        }
        if (*(char *)(iVar5 + 0x34) == '\0') {
          if (uVar3 != 0xffffffff) goto LAB_00233328;
          break;
        }
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < (int)*(uint *)(iVar2 + 0x161c));
    }
    if ((int)uVar6 < *(int *)(iVar2 + 0x1620)) {
      *(uint *)(iVar2 + 0x161c) = uVar6 + 1;
      uVar3 = uVar6;
LAB_00233328:
      if (uVar3 < *(uint *)(iVar2 + 0x161c)) {
        iVar2 = *(int *)(iVar2 + 0x1624) + uVar3 * 0x38;
      }
      else {
        iVar2 = *(int *)(iVar2 + 0x1624);
      }
      *(undefined1 *)(iVar2 + 0x35) = 0;
      *(undefined1 *)(iVar2 + 0x34) = 1;
      *(undefined1 *)(iVar2 + 0x36) = 0;
      *(undefined4 *)(iVar2 + 0x30) = param_2;
    }
    else {
      uVar3 = 0xffffffff;
    }
    if ((int)uVar1 < 0) {
      uVar1 = uVar3;
    }
    iVar4 = iVar4 + 1;
    if (1 < iVar4) {
      return uVar1;
    }
  } while( true );
}


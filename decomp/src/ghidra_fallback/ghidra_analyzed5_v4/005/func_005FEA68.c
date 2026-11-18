#include "ghidra_types.h"

extern int *DAT_005fea64;
extern undefined4 DAT_005feb20;
extern undefined4 DAT_005feb24;
extern undefined4 *DAT_005feb28;
extern undefined4 *DAT_005feb2c;

// USA 005FEA68 <- EU 005FEA40 (Ghidra, non-matching)
// GLOBAL DAT_005fea64 int *
// GLOBAL DAT_005feb20 undefined4
// GLOBAL DAT_005feb24 undefined4
// GLOBAL DAT_005feb28 undefined4 *
// GLOBAL DAT_005feb2c undefined4 *

void func_005FEA68(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  
  iVar5 = *DAT_005fea64;
  *param_1 = 0x1c00;
  *(uint *)(iVar5 + 0x770) = *(uint *)(iVar5 + 0x770) & 0xffffdfff | 0x11000;
  puVar4 = DAT_005feb2c;
  puVar3 = DAT_005feb28;
  uVar2 = DAT_005feb24;
  uVar1 = DAT_005feb20;
  iVar5 = 0;
  do {
    while (iVar5 == 0) {
      puVar6 = (undefined4 *)*puVar4;
      if (puVar6 < (undefined4 *)*puVar3) {
        *puVar6 = 0x11000;
        puVar6[1] = uVar1;
        *puVar4 = puVar6 + 2;
      }
      iVar5 = 1;
    }
    if (iVar5 == 0xc) {
      puVar6 = (undefined4 *)*puVar4;
      if (puVar6 < (undefined4 *)*puVar3) {
        *puVar6 = 0xff0000;
        puVar6[1] = uVar2;
        *puVar4 = puVar6 + 2;
      }
    }
    else if ((iVar5 != 0xf) && (puVar6 = (undefined4 *)*puVar4, puVar6 < (undefined4 *)*puVar3)) {
      *puVar6 = 0;
      puVar6[1] = iVar5 + 0x80U | 0xf0000;
      *puVar4 = puVar6 + 2;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x1f);
  return;
}


#include "ghidra_types.h"

extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern undefined4 DAT_00127eb0;
extern undefined4 DAT_00127eb4;

// USA 00127E58 <- EU 00127E58 (Ghidra, non-matching)
// GLOBAL DAT_00127eb0 undefined4
// GLOBAL DAT_00127eb4 undefined4

/* WARNING: Removing unreachable block (ram,0x004f8810) */
/* WARNING: Removing unreachable block (ram,0x004f8818) */
/* WARNING: Removing unreachable block (ram,0x004f8824) */
/* WARNING: Removing unreachable block (ram,0x004f882c) */
/* WARNING: Removing unreachable block (ram,0x004f8830) */
/* WARNING: Removing unreachable block (ram,0x004f8834) */
/* WARNING: Removing unreachable block (ram,0x004f8838) */

void func_00127E58(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = DAT_00127eb0;
  *(undefined4 *)(param_1 + 0x3dc) = DAT_00127eb0;
  *(undefined4 *)(param_1 + 0x3e0) = uVar1;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  uVar1 = DAT_00127eb4;
  *(undefined4 *)(param_1 + 0x8e4) = 0x3c;
  *(undefined4 *)(param_1 + 0x8e8) = uVar1;
  *(undefined4 *)(param_1 + 0x8e0) = 0;
  func_004FABDC(param_1,2,0,0);
  *(undefined1 *)(param_1 + 0x7fc) = 1;
  iVar2 = *(int *)(param_1 + 0x424);
  if (iVar2 != 0) {
    *(uint *)(iVar2 + 0x2c) = *(uint *)(iVar2 + 0x2c) | 8;
  }
  iVar2 = *(int *)(param_1 + 0x42c);
  if (iVar2 != 0) {
    *(uint *)(iVar2 + 0x2c) = *(uint *)(iVar2 + 0x2c) | 8;
  }
  return;
}


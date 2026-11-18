#include "ghidra_types.h"

extern int func_0010C1B8(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern undefined4 DAT_0010ec4c;
extern int DAT_0010ec50;
extern undefined4 DAT_0010ec54;
extern undefined4 DAT_0010ec58;

// USA 0010EB00 <- EU 0010EB00 (Ghidra, non-matching)
// GLOBAL DAT_0010ec4c undefined4
// GLOBAL DAT_0010ec50 int
// GLOBAL DAT_0010ec54 undefined4
// GLOBAL DAT_0010ec58 undefined4

undefined4 func_0010EB00(int param_1,uint param_2,undefined1 param_3,undefined1 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 ((char *)(albw_frame + 0x0))
  iVar3 = 0;
  while( true ) {
    iVar6 = (int)*(char *)(param_1 + iVar3);
    if (iVar6 == 0 || iVar6 == 0x3a) break;
    local_20[iVar3] = *(char *)(param_1 + iVar3);
    iVar3 = iVar3 + 1;
    if (7 < iVar3) {
                    /* WARNING: Subroutine does not return */
      func_0010C1B8(param_1,iVar3,iVar6);
    }
  }
  uVar8 = 0;
  local_20[iVar3] = ':';
  uVar9 = 0;
  iVar3 = 0;
  do {
    uVar4 = (uint)local_20[iVar3];
    if (uVar4 == 0x3a) goto LAB_0010ebcc;
    uVar1 = uVar8 >> 0x18;
    iVar3 = iVar3 + 1;
    uVar8 = uVar4 | uVar8 << 8;
    uVar9 = uVar1 | uVar9 << 8 | (int)uVar4 >> 0x1f;
  } while (iVar3 < 8);
  uVar8 = 0;
  uVar9 = 0;
LAB_0010ebcc:
  uVar2 = DAT_0010ec4c;
  if (uVar8 != 0 || uVar9 != 0) {
    iVar3 = 0;
    while( true ) {
      puVar7 = (uint *)(DAT_0010ec50 + iVar3 * 0x10);
      if (puVar7[2] == 0) {
        puVar5 = (uint *)(DAT_0010ec50 + iVar3 * 0x10);
        *puVar5 = uVar8;
        puVar5[1] = uVar9;
        puVar7[2] = param_2;
        *(undefined1 *)(puVar7 + 3) = param_3;
        *(undefined1 *)((int)puVar7 + 0xd) = param_4;
        return 0;
      }
      uVar2 = DAT_0010ec54;
      if (*puVar7 == uVar8 && puVar7[1] == uVar9) break;
      iVar3 = iVar3 + 1;
      if (0x1f < iVar3) {
        return DAT_0010ec58;
      }
    }
  }
  return uVar2;
}


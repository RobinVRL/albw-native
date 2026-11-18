#include "ghidra_types.h"

extern int func_0010C1B8(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern int DAT_00102284;
extern undefined4 DAT_00102288;
extern int DAT_0010228c;

// USA 00102130 <- EU 00102130 (Ghidra, non-matching)
// GLOBAL DAT_00102284 int
// GLOBAL DAT_00102288 undefined4
// GLOBAL DAT_0010228c int

undefined4 func_00102130(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  uint *puVar9;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 ((char *)(albw_frame + 0x8))
  iVar6 = 0;
  while( true ) {
    iVar4 = (int)*(char *)(param_1 + iVar6);
    if (iVar4 == 0 || iVar4 == 0x3a) break;
    local_18[iVar6] = *(char *)(param_1 + iVar6);
    iVar6 = iVar6 + 1;
    if (7 < iVar6) {
                    /* WARNING: Subroutine does not return */
      func_0010C1B8(param_1,iVar4,iVar6);
    }
  }
  uVar5 = 0;
  local_18[iVar6] = ':';
  uVar2 = 0;
  iVar6 = 0;
  do {
    uVar7 = (uint)local_18[iVar6];
    if (uVar7 == 0x3a) goto LAB_001021e8;
    uVar1 = uVar5 >> 0x18;
    iVar6 = iVar6 + 1;
    uVar5 = uVar7 | uVar5 << 8;
    uVar2 = uVar2 << 8 | uVar1 | (int)uVar7 >> 0x1f;
  } while (iVar6 < 8);
  uVar5 = 0;
  uVar2 = 0;
LAB_001021e8:
  uVar7 = 0;
  do {
    puVar9 = (uint *)(DAT_00102284 + uVar7 * 0x10);
    if (puVar9[1] == uVar2 && *puVar9 == uVar5) {
      puVar3 = (undefined4 *)(DAT_00102284 + uVar7 * 0x10);
      piVar8 = (int *)puVar3[2];
      puVar3[2] = 0;
      *puVar3 = 0;
      puVar3[1] = 0;
      if (piVar8 == (int *)0x0) {
        return DAT_00102288;
      }
      if ((*(char *)((int)puVar3 + 0xd) == '\0') &&
         ((**(code **)(*piVar8 + 0x30))(piVar8), piVar8 == *(int **)(DAT_0010228c + 8))) {
        *(undefined4 *)(DAT_0010228c + 8) = 0;
      }
      return 0;
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 0x20);
  return DAT_00102288;
}


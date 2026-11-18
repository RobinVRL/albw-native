#include "ghidra_types.h"

extern int DAT_004cf7fc;

// USA 004CF6E0 <- EU 004CF6B8 (Ghidra, non-matching)
// GLOBAL DAT_004cf7fc int

void * func_004CF6E0(int param_1,int *param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  ushort uVar3;
  undefined3 uVar4;
  undefined3 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  
  iVar6 = DAT_004cf7fc;
  uVar9 = *(uint *)(param_3 + 8);
  uVar4 = *(undefined3 *)(*(int *)(param_1 + 0x150) + 0x10);
  uVar1 = *(undefined1 *)(param_3 + 0x27);
  uVar5 = *(undefined3 *)(*(int *)(param_1 + 0x150) + 0x24);
  uVar2 = *(undefined1 *)(param_3 + 0x2b);
  uVar7 = 0;
  do {
    if (((*(uint *)(param_1 + 0x164) & 0x80000) == 0) &&
       ((uVar9 >> ((uVar7 & 0x3f) << 2) & 0xf) == 0)) {
      puVar8 = (undefined4 *)*param_2;
      uVar3 = *(ushort *)(iVar6 + uVar7 * 2);
      *puVar8 = CONCAT13(uVar1,uVar4);
      puVar8[1] = uVar3 + 3 | 0xf0000;
      *param_2 = (int)(puVar8 + 2);
    }
    else if (((*(uint *)(param_1 + 0x164) & 0x10000) == 0) &&
            ((uVar9 >> ((uVar7 & 0x3f) << 2) & 0xf) == 1)) {
      puVar8 = (undefined4 *)*param_2;
      uVar3 = *(ushort *)(iVar6 + uVar7 * 2);
      *puVar8 = CONCAT13(uVar2,uVar5);
      puVar8[1] = uVar3 + 3 | 0xf0000;
      *param_2 = (int)(puVar8 + 2);
    }
    uVar7 = uVar7 + 1;
  } while ((int)uVar7 < 6);
  return (void *)param_1;
}


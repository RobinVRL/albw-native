#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_00532C78(int param_1);
extern float DAT_0038a598;

// USA 0038A4C8 <- EU 0038A4A4 (Ghidra, non-matching)
// GLOBAL DAT_0038a598 float

void func_0038A4C8(int param_1,uint param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  iVar7 = *(int *)(param_1 + 0x88);
  if (iVar7 != 0) {
    iVar6 = 0;
    do {
      bVar1 = func_00532C78(iVar7 + iVar6 * 0x2c + 0x20);
      if (bVar1) {
        iVar6 = iVar6 + 1;
      }
    } while (bVar1 && iVar6 != 3);
    if (iVar6 != 3) {
      iVar4 = iVar7 + iVar6 * 0x2c;
      puVar2 = (undefined4 *)(param_1 + 0x8c);
      if (param_2 < 0x14) {
        puVar2 = (undefined4 *)(param_1 + 0x8c + param_2 * 0xc);
      }
      piVar5 = *(int **)(iVar4 + 0x1c);
      if (piVar5 != (int *)0x0) {
        uVar8 = puVar2[1];
        uVar9 = puVar2[2];
        iVar3 = *(int *)(*piVar5 + 0x10);
        *(undefined4 *)(iVar3 + 0x1c) = *puVar2;
        *(undefined4 *)(iVar3 + 0x20) = uVar8;
        *(undefined4 *)(iVar3 + 0x24) = uVar9;
        *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xef | 0x10;
        piVar5 = *(int **)(iVar4 + 0x1c);
        iVar4 = *(int *)(*piVar5 + 0x10);
        if ((iVar4 != 0) && ((*(byte *)(iVar4 + 0x44) & 1) == 0)) {
          *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xfe | 1;
          *(byte *)(piVar5 + 0x1c) = *(byte *)(piVar5 + 0x1c) | 2;
        }
      }
      func_002317C0((undefined2 *)(iVar7 + iVar6 * 0x2c + 0x20),DAT_0038a598);
      return;
    }
  }
  return;
}


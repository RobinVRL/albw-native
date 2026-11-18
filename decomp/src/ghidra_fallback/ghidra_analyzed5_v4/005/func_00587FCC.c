#include "ghidra_types.h"

extern int func_00103CBC(char *param_1);
extern int func_0010FBAC(uint *param_1,uint *param_2);
extern int func_0057F260(int param_1);

// USA 00587FCC <- EU 00587FA4 (Ghidra, non-matching)

/* WARNING: Removing unreachable block (ram,0x0056b52c) */

undefined4 func_00587FCC(int param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  
  (**(code **)(*param_2 + 8))(param_2);
  puVar7 = (uint *)param_2[1];
  puVar4 = func_0057F260(*(int *)(*(int *)(param_1 + 0x24) + 0x140));
  iVar3 = *(int *)(puVar4[1] + 0x38);
  if (iVar3 == 0) {
    return 0xffffffff;
  }
  puVar8 = (uint *)(*(int *)(iVar3 + 0xc) + iVar3);
  puVar9 = (uint *)0x0;
  if (*puVar8 < puVar8[1]) {
    puVar6 = puVar8 + *puVar8 * 5 + 2;
    iVar2 = func_00103CBC((char *)puVar7);
    uVar1 = (ushort)*puVar6;
    while ((uVar1 & 1) == 0) {
      uVar5 = (uint)(*(ushort *)((int)puVar6 + 2) >> 3);
      if (((int)uVar5 < iVar2) &&
         (((int)*(char *)((int)puVar7 + uVar5) &
          1 << (7 - (*(ushort *)((int)puVar6 + 2) & 7) & 0xff)) != 0)) {
        uVar5 = puVar6[2];
      }
      else {
        uVar5 = puVar6[1];
      }
      puVar6 = puVar8 + uVar5 * 5 + 2;
      uVar1 = (ushort)*puVar6;
    }
    if (puVar6 + 3 != (uint *)0x0) {
      uVar5 = puVar6[3];
      if ((uVar5 != 0xffffffff) && (iVar3 = *(int *)(iVar3 + 4) + iVar3, iVar3 != 0)) {
        puVar9 = (uint *)(iVar3 + *(int *)(iVar3 + uVar5 * 0xc + 8));
      }
      uVar5 = func_0010FBAC(puVar7,puVar9);
      if (uVar5 == 0) {
        return puVar6[4];
      }
    }
  }
  return 0xffffffff;
}


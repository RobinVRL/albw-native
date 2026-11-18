#include "ghidra_types.h"

extern int func_00103CBC(char *param_1);
extern int func_0010FBAC(uint *param_1,uint *param_2);

// USA 0056D3E4 <- EU 0056D3BC (Ghidra, non-matching)

/* WARNING: Removing unreachable block (ram,0x0056b52c) */

uint func_0056D3E4(int param_1,uint *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x38);
  if (iVar3 == 0) {
    return 0xffffffff;
  }
  puVar6 = (uint *)(*(int *)(iVar3 + 0xc) + iVar3);
  puVar7 = (uint *)0x0;
  if (*puVar6 < puVar6[1]) {
    puVar5 = puVar6 + *puVar6 * 5 + 2;
    iVar2 = func_00103CBC((char *)param_2);
    uVar1 = (ushort)*puVar5;
    while ((uVar1 & 1) == 0) {
      uVar4 = (uint)(*(ushort *)((int)puVar5 + 2) >> 3);
      if (((int)uVar4 < iVar2) &&
         (((int)*(char *)((int)param_2 + uVar4) &
          1 << (7 - (*(ushort *)((int)puVar5 + 2) & 7) & 0xff)) != 0)) {
        uVar4 = puVar5[2];
      }
      else {
        uVar4 = puVar5[1];
      }
      puVar5 = puVar6 + uVar4 * 5 + 2;
      uVar1 = (ushort)*puVar5;
    }
    if (puVar5 + 3 != (uint *)0x0) {
      uVar4 = puVar5[3];
      if ((uVar4 != 0xffffffff) && (iVar3 = *(int *)(iVar3 + 4) + iVar3, iVar3 != 0)) {
        puVar7 = (uint *)(iVar3 + *(int *)(iVar3 + uVar4 * 0xc + 8));
      }
      uVar4 = func_0010FBAC(param_2,puVar7);
      if (uVar4 == 0) {
        return puVar5[4];
      }
    }
  }
  return 0xffffffff;
}


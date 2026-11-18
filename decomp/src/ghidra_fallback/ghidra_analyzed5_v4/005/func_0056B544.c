// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00103CBC(char *param_1);
extern int func_0010FBAC(uint *param_1,uint *param_2);

// USA 0056B544 <- EU 0056B51C (Ghidra, non-matching)
// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)

uint func_0056B544(int param_1,uint param_2,uint *param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  
  if (param_2 < 2) {
    puVar5 = (uint *)(*(int *)(param_1 + param_2 * 8 + 4) + param_1);
  }
  else {
    puVar5 = (uint *)0x0;
  }
  puVar6 = (uint *)0x0;
  if (*puVar5 < puVar5[1]) {
    puVar4 = puVar5 + *puVar5 * 5 + 2;
    iVar2 = func_00103CBC((char *)param_3);
    uVar1 = (ushort)*puVar4;
    while ((uVar1 & 1) == 0) {
      uVar3 = (uint)(*(ushort *)((int)puVar4 + 2) >> 3);
      if (((int)uVar3 < iVar2) &&
         (((int)*(char *)((int)param_3 + uVar3) &
          1 << (7 - (*(ushort *)((int)puVar4 + 2) & 7) & 0xff)) != 0)) {
        uVar3 = puVar4[2];
      }
      else {
        uVar3 = puVar4[1];
      }
      puVar4 = puVar5 + uVar3 * 5 + 2;
      uVar1 = (ushort)*puVar4;
    }
    if (puVar4 + 3 != (uint *)0x0) {
      uVar3 = puVar4[3];
      if ((uVar3 != 0xffffffff) && (param_1 = *(int *)(param_1 + 4) + param_1, param_1 != 0)) {
        puVar6 = (uint *)(param_1 + *(int *)(param_1 + uVar3 * 0xc + 8));
      }
      uVar3 = func_0010FBAC(param_3,puVar6);
      if (uVar3 == 0) {
        return puVar4[4];
      }
    }
  }
  return 0xffffffff;
}


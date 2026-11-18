#include "ghidra_types.h"


// USA 00560CC8 <- EU 00560CA0 (Ghidra, non-matching)

undefined4 func_00560CC8(undefined4 *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  puVar3 = (uint *)*param_1;
  if ((puVar3 != (uint *)0x0) && (uVar2 = *puVar3 >> 8, uVar2 != 0)) {
    iVar5 = 0;
    do {
      uVar1 = (int)(iVar5 + uVar2) / 2;
      uVar4 = puVar3[uVar1 * 2 + 1] & 0xffffff;
      bVar6 = (int)(param_3 - uVar4) < 0;
      if (param_3 != uVar4 && !bVar6) {
        iVar5 = uVar1 + 1;
      }
      if (bVar6) {
        uVar2 = uVar1;
      }
      if (param_3 == uVar4) {
        puVar3 = puVar3 + uVar1 * 2 + 1;
        if (puVar3 == (uint *)0x0) {
          return 0;
        }
        *(char *)(param_2 + 1) = (char)(*puVar3 >> 0x18);
        *param_2 = puVar3[1];
        return 1;
      }
    } while (iVar5 < (int)uVar2);
  }
  return 0;
}


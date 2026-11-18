#include "ghidra_types.h"

extern int func_0010AF18(void);
extern int func_003E3DD8(uint *param_1);
extern undefined4 DAT_003e34ac;
extern undefined4 DAT_003e34b0;
extern uint DAT_003e34b4;

// USA 003E33E0 <- EU 003E33C0 (Ghidra, non-matching)
// GLOBAL DAT_003e34ac undefined4
// GLOBAL DAT_003e34b0 undefined4
// GLOBAL DAT_003e34b4 uint

undefined4 func_003E33E0(undefined4 *param_1,uint *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  puVar5 = (uint *)*param_1;
  uVar2 = DAT_003e34ac;
  if ((puVar5 != (uint *)0x0) && (uVar2 = DAT_003e34b0, *(byte *)((int)puVar5 + 1) < 0xf)) {
    uVar4 = *puVar5;
    uVar3 = (uVar4 << 0x10) >> 0x18;
    uVar11 = (uVar4 & 0xff) + uVar3;
    uVar6 = *param_2;
    uVar7 = param_2[1];
    uVar8 = param_2[2];
    uVar9 = param_2[3];
    uVar12 = param_2[4];
    puVar5 = puVar5 + (uVar11 + (uint)((ulonglong)uVar11 * (ulonglong)DAT_003e34b4 >> 0x23) * -0xf)
                      * 8 + 8;
    uVar11 = param_2[5];
    uVar10 = param_2[6];
    puVar5[7] = param_2[7];
    *puVar5 = uVar6;
    puVar5[1] = uVar7;
    puVar5[2] = uVar8;
    puVar5[3] = uVar9;
    puVar5[4] = uVar12;
    puVar5[5] = uVar11;
    puVar5[6] = uVar10;
    coproc_moveto_Data_Synchronization(0);
    uVar3 = (uVar3 + 1) * 0x100 & 0xff00 | uVar4 & 0xffff00ff;
    while( true ) {
      bVar1 = (bool)hasExclusiveAccess((uint *)*param_1);
      if (bVar1) break;
      uVar3 = (((*(uint *)*param_1 << 0x10) >> 0x18) + 1) * 0x100 & 0xff00 |
              *(uint *)*param_1 & 0xffff00ff;
    }
    *(uint *)*param_1 = uVar3;
    if ((uVar3 << 0x10) >> 0x18 == 1) {
      puVar5 = (uint *)func_0010AF18();
      func_003E3DD8(puVar5);
    }
    uVar2 = 0;
  }
  return uVar2;
}


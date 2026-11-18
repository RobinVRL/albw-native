#include "ghidra_types.h"

extern int func_0021B638(int param_1);
extern float func_00521298(int param_1);
extern int func_0065DFCC(undefined4 *param_1,undefined1 param_2);

// USA 0021C358 <- EU 0021C358 (Ghidra, non-matching)

void func_0021C358(int param_1)

{
  bool bVar1;
  bool bVar2;
  uint *puVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  
  fVar7 = func_00521298(param_1);
  *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_1 + 0xc);
  puVar3 = (uint *)(param_1 + 0x1360);
  uVar5 = *puVar3;
  uVar6 = *(uint *)(param_1 + 0x1364);
  bVar1 = fVar7 < *(float *)(param_1 + 0x1334) * *(float *)(param_1 + 0x1334);
  if (uVar5 < uVar6) {
    uVar6 = uVar5 + 1;
    *puVar3 = uVar6;
  }
  if (bVar1) {
    uVar5 = *puVar3;
    uVar6 = *(uint *)(param_1 + 0x1364);
  }
  if (bVar1 && uVar5 < uVar6) {
    *puVar3 = uVar5 + 1;
  }
  if ((*(uint *)(param_1 + 0x1364) <= *(uint *)(param_1 + 0x1360)) &&
     (bVar2 = func_0021B638(param_1), bVar2)) {
    if ((-1 < *(int *)(param_1 + 0x1340)) || (bVar1)) {
      uVar4 = 2;
    }
    else {
      uVar4 = 1;
    }
    func_0065DFCC((undefined4 *)(param_1 + 0x8bc),uVar4);
  }
  return;
}


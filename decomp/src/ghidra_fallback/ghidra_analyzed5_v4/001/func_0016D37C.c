#include "ghidra_types.h"

extern int func_001157FC(float *param_1,float *param_2,float *param_3);
extern int func_001329B4(int param_1);
extern float func_00591804(float fparam_0);
extern int *DAT_0016d464;
extern float DAT_0016d468;
extern float DAT_0016d46c;
extern float DAT_0016d470;
extern undefined4 DAT_0016d474;
extern undefined4 DAT_0016d478;

// USA 0016D37C <- EU 0016D37C (Ghidra, non-matching)
// GLOBAL DAT_0016d464 int *
// GLOBAL DAT_0016d468 float
// GLOBAL DAT_0016d46c float
// GLOBAL DAT_0016d470 float
// GLOBAL DAT_0016d474 undefined4
// GLOBAL DAT_0016d478 undefined4

undefined4 func_0016D37C(int param_1,float fparam_0)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  iVar3 = func_001329B4(*DAT_0016d464);
  fVar6 = *(float *)(iVar3 + 0x7f8) * fparam_0;
  if ((*(uint *)(iVar3 + 0x2c8) & 2) == 0) {
    iVar4 = iVar3 + 0x68;
  }
  else {
    iVar4 = iVar3 + 500;
  }
  if (fVar6 < *(float *)(iVar4 + 0x94)) {
    fVar6 = *(float *)(iVar4 + 0x94) + DAT_0016d46c;
  }
  fVar5 = func_00591804(*(float *)(iVar4 + 0x9c) * DAT_0016d468);
  uVar2 = DAT_0016d478;
  fVar5 = *(float *)(iVar4 + 0xac) * fVar5 * fVar6 * DAT_0016d470;
  *(float *)(param_1 + 0x74) = fVar5;
  *(float *)(param_1 + 0x78) = fVar5;
  *(float *)(param_1 + 0x7c) = fVar5;
  uVar1 = DAT_0016d474;
  *(uint *)(param_1 + 0x164) = *(uint *)(param_1 + 0x164) | 0x40000000;
  *(undefined4 *)(param_1 + 0x80) = uVar2;
  *(undefined4 *)(param_1 + 0x84) = uVar1;
  *(undefined4 *)(param_1 + 0x88) = uVar1;
  *(undefined4 *)(param_1 + 0x90) = uVar1;
  *(undefined4 *)(param_1 + 0x94) = uVar2;
  *(undefined4 *)(param_1 + 0x98) = uVar1;
  *(undefined4 *)(param_1 + 0xa0) = uVar1;
  *(undefined4 *)(param_1 + 0xa4) = uVar1;
  *(undefined4 *)(param_1 + 0xa8) = uVar2;
  *(undefined4 *)(param_1 + 0x8c) = uVar1;
  *(undefined4 *)(param_1 + 0x9c) = uVar1;
  *(float *)(param_1 + 0xac) = -fVar6;
  return func_001157FC((float *)(param_1 + 0x80),(float *)(iVar3 + 0x120),(float *)(param_1 + 0x80));
}


#include "ghidra_types.h"

extern int func_003CC030(undefined4 *param_1,int param_2);
extern int func_00563710(uint *param_1,uint *param_2,int param_3);

// USA 003FC354 <- EU 003FC334 (Ghidra, non-matching)

undefined4 func_003FC354(undefined4 param_1,undefined4 *param_2,uint *param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int in_stack_00000008;
  int in_stack_0000000c;
  
  puVar3 = (uint *)*param_2;
  if (in_stack_00000008 == 0 || in_stack_0000000c == 0) {
    puVar1 = func_00563710(param_3,puVar3,1);
    uVar4 = ((int)puVar1 - (int)puVar3 & 0xfffffffcU) + 8;
    if (((uVar4 & 0xf) != 0) && (uVar4 = 4 - (uVar4 * 0x10000000 >> 0x1e), 0 < (int)uVar4)) {
      puVar5 = puVar1 + -1;
      if ((uVar4 & 1) != 0) {
        *puVar1 = 0;
        puVar5 = puVar1;
      }
      for (iVar6 = (int)uVar4 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
        puVar5[1] = 0;
        puVar5 = puVar5 + 2;
        *puVar5 = 0;
      }
      puVar1 = puVar1 + uVar4;
    }
    puVar2 = func_003CC030(puVar1,1);
    param_2[1] = (int)puVar2 - (int)puVar3 >> 2;
    *param_2 = puVar3;
    return 0;
  }
  puVar3 = (uint *)((int)puVar3 + (in_stack_00000008 - in_stack_0000000c));
  puVar1 = func_00563710(param_3,puVar3,1);
  uVar4 = ((int)puVar1 - (int)puVar3 & 0xfffffffcU) + 8;
  if (((uVar4 & 0xf) != 0) && (uVar4 = 4 - (uVar4 * 0x10000000 >> 0x1e), 0 < (int)uVar4)) {
    puVar3 = puVar1 + -1;
    if ((uVar4 & 1) != 0) {
      *puVar1 = 0;
      puVar3 = puVar1;
    }
    for (iVar6 = (int)uVar4 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      puVar3[1] = 0;
      puVar3 = puVar3 + 2;
      *puVar3 = 0;
    }
    puVar1 = puVar1 + uVar4;
  }
  return func_003CC030(puVar1,1);
}


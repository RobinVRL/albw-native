#include "ghidra_types.h"

extern int func_005467C0(int param_1,undefined4 *param_2);
extern int func_0054682C(undefined4 param_1,uint param_2);

// USA 0055365C <- EU 00553634 (Ghidra, non-matching)

undefined4 func_0055365C(int param_1,undefined4 *param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  sVar1 = *(short *)(*(int *)(param_1 + 0x2c) + 0x42);
  if (sVar1 == 2 || sVar1 == 3) {
    puVar4 = *(undefined4 **)(param_1 + 0x30);
    if (*(float *)(param_1 + 0x88) < ALBW_AS_F32(puVar4[1])) {
      *param_2 = *puVar4;
      param_2[1] = puVar4[1];
      param_2[2] = puVar4[2];
      param_2[1] = *(undefined4 *)(param_1 + 0x88);
      return 0;
    }
    uVar3 = func_005467C0(param_1,param_2);
    return uVar3;
  }
  uVar5 = *(uint *)(*(int *)(param_1 + 0x28) + 0x620);
  if ((uVar5 != 0) && (iVar2 = func_0054682C(param_1,uVar5), iVar2 == 6)) {
    puVar4 = *(undefined4 **)(param_1 + 0x30);
    *param_2 = *puVar4;
    param_2[1] = puVar4[1];
    param_2[2] = puVar4[2];
    return 6;
  }
  uVar3 = func_005467C0(param_1,param_2);
  return uVar3;
}


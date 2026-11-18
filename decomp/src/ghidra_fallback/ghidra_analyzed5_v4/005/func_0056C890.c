#include "ghidra_types.h"

extern int func_0056ABDC(int param_1);
extern int func_0056AC2C(uint *param_1,uint param_2);

// USA 0056C890 <- EU 0056C868 (Ghidra, non-matching)

undefined4 func_0056C890(int param_1,undefined1 *param_2,uint param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  puVar1 = (uint *)func_0056ABDC(*(int *)(param_1 + 4));
  uVar2 = 0;
  if (puVar1 != (uint *)0x0) {
    if ((int)param_3 < (int)*puVar1) {
      puVar3 = (undefined1 *)func_0056AC2C(puVar1,param_3);
      *param_2 = *puVar3;
      param_2[1] = puVar3[1];
      param_2[2] = puVar3[2];
      param_2[3] = puVar3[3];
      uVar6 = *(uint *)(puVar3 + *(int *)(puVar3 + 8)) & 0xff;
      bVar7 = uVar6 == 2;
      param_2[4] = (char)*(uint *)(puVar3 + *(int *)(puVar3 + 8));
      if (uVar6 < 3) {
        bVar7 = uVar6 == 0;
      }
      else {
        uVar6 = 2;
      }
      uVar4 = 0;
      if (!bVar7) {
        do {
          uVar5 = uVar4 + 1;
          param_2[uVar4 + 5] = puVar3[uVar4 + *(int *)(puVar3 + 8) + 4];
          uVar4 = uVar5;
        } while (uVar5 < uVar6);
      }
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}


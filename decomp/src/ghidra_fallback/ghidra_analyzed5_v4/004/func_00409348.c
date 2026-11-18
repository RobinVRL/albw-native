#include "ghidra_types.h"

extern int func_00412A3C(int *param_1,uint param_2);
extern int func_00412BB4(void);
extern int func_00412C68(int param_1,undefined4 *param_2);
extern int func_0056CAB8(int param_1);

// USA 00409348 <- EU 00409328 (Ghidra, non-matching)

undefined4 func_00409348(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  iVar1 = func_0056CAB8(param_2);
  if ((int)((iVar1 * 4 + param_3 + 7U & 0xfffffffc) - (param_3 + (int)param_4)) < 1) {
    *(int *)(param_1 + 0x218) = param_3;
    uVar3 = func_0056CAB8(param_2);
    **(uint **)(param_1 + 0x218) = uVar3;
    if (uVar3 != 0) {
      uVar3 = uVar3 & 1;
      if (uVar3 == 1) {
        *(undefined4 *)(*(int *)(param_1 + 0x218) + 4) = 0;
      }
      uVar6 = (uint)(uVar3 == 1);
      if (uVar3 < **(uint **)(param_1 + 0x218)) {
        do {
          iVar1 = uVar6 + 1;
          uVar3 = uVar3 + 2;
          *(undefined4 *)(*(int *)(param_1 + 0x218) + uVar6 * 4 + 4) = 0;
          uVar6 = uVar6 + 2;
          *(undefined4 *)(*(int *)(param_1 + 0x218) + iVar1 * 4 + 4) = 0;
        } while (uVar3 < **(uint **)(param_1 + 0x218));
      }
    }
    *(int *)(param_1 + 0x10) = param_2;
    piVar4 = (int *)func_00412BB4();
    puVar5 = (undefined4 *)func_00412A3C(piVar4,5);
    puVar5[3] = piVar4[0x61];
    *(undefined1 *)(puVar5 + 1) = 0x2f;
    puVar5[4] = param_1;
    func_00412C68((int)piVar4,puVar5);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


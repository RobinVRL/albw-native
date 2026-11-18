#include "ghidra_types.h"

extern undefined8 func_001163A0(uint *param_1,uint *param_2,uint param_3);
extern int func_0056F230(int param_1);
extern int func_0056F23C(int param_1,int param_2);
extern int func_0056F248(int param_1,uint param_2);
extern int func_0058FBB8(undefined4 *param_1,undefined4 *param_2);

// USA 0056A888 <- EU 0056A860 (Ghidra, non-matching)

undefined4 func_0056A888(int *param_1,byte *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  
  if ((char)param_1[2] == '\0') {
    uVar5 = 0;
    bVar1 = *(byte *)*param_1;
    if (1 < bVar1) {
      bVar1 = 3;
    }
    *param_2 = bVar1;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(*param_1 + 0x14);
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(*param_1 + 4);
    param_2[1] = *(char *)(*param_1 + 1) == '\x01';
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(*param_1 + 8);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(*param_1 + 0xc);
    for (; (int)uVar5 < *(int *)(*param_1 + 0x14); uVar5 = uVar5 + 1) {
      if ((int)uVar5 < 2) {
        iVar3 = func_0056F248(*param_1,uVar5);
        if (*(int *)(iVar3 + 0xc) != 0) {
          puVar4 = (uint *)func_0056F230(iVar3);
          func_001163A0((uint *)(param_2 + uVar5 * 0x30 + 0x18),puVar4,0x26);
          func_0058FBB8((undefined4 *)(param_2 + uVar5 * 0x30 + 0x3e),
                        (undefined4 *)((int)puVar4 + 0x26));
        }
        iVar3 = func_0056F23C(iVar3,param_1[1]);
        *(int *)(param_2 + uVar5 * 0x30 + 0x14) = iVar3;
      }
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


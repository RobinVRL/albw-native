#include "ghidra_types.h"

extern int func_002C41BC(int *param_1,undefined4 *param_2,int param_3);
extern int func_003529A0(undefined4 *param_1,undefined4 param_2,undefined4 param_3);

// USA 001E4C74 <- EU 001E4C74 (Ghidra, non-matching)

void func_001E4C74(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int extraout_r1;
  uint uVar4;
  undefined4 uVar5;
  bool bVar6;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define auStack_38 ((undefined4 *)(albw_frame + 0x8))
  iVar1 = *(int *)(param_1 + 0x2d0);
  if (iVar1 != 0) {
    bVar6 = **(char **)(iVar1 + 0x10) != '\0';
    uVar2 = 0;
    if (bVar6) {
      uVar2 = *(uint *)(param_1 + 0x610);
    }
    if ((bVar6 && uVar2 != 0) && (uVar4 = 0, bVar6 && 0 < (int)uVar2)) {
      do {
        if (uVar4 < uVar2) {
          param_2 = *(int *)(param_1 + 0x618);
        }
        if (uVar4 < uVar2) {
          uVar5 = *(undefined4 *)(param_2 + uVar4 * 4);
        }
        else {
          uVar5 = 0;
        }
        (**(code **)(*(int *)(iVar1 + 0xc) + 8))((int *)(iVar1 + 0xc));
        func_003529A0(auStack_38,*(undefined4 *)(iVar1 + 0x10),uVar5);
        if (uVar4 < *(uint *)(param_1 + 0x610)) {
          piVar3 = *(int **)(*(int *)(param_1 + 0x618) + uVar4 * 4);
        }
        else {
          piVar3 = (int *)0x0;
        }
        func_002C41BC(piVar3,auStack_38,0);
        uVar2 = *(uint *)(param_1 + 0x610);
        uVar4 = uVar4 + 1;
        param_2 = extraout_r1;
      } while ((int)uVar4 < (int)uVar2);
    }
  }
  return;
}


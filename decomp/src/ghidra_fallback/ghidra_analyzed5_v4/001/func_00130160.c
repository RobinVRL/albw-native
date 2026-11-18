#include "ghidra_types.h"

extern int func_003CC1E4(undefined4 *param_1,uint param_2);
extern int func_003CC230(uint *param_1,undefined4 *param_2,int param_3,uint param_4);
extern int func_0048C428(int *param_1,undefined *param_2);
extern undefined *DAT_001302a4;

// USA 00130160 <- EU 00130160 (Ghidra, non-matching)
// GLOBAL DAT_001302a4 undefined *

void func_00130160(int param_1,int *param_2,undefined1 param_3)

{
  byte bVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_2c ((int *)(albw_frame + 0x4))
  func_0048C428(*(int **)(param_1 + 0x2888),DAT_001302a4);
  uVar5 = 0;
  while( true ) {
    puVar3 = *(uint **)(param_1 + 0x2888);
    uVar4 = *puVar3;
    if ((int)uVar4 <= (int)uVar5) break;
    if (uVar5 < uVar4) {
      piVar6 = *(int **)(puVar3[2] + uVar5 * 4);
    }
    else {
      piVar6 = (int *)0x0;
    }
    iVar2 = *(int *)(param_1 + 0x1c);
    bVar1 = 0;
    if (iVar2 != 0) {
      bVar1 = *(byte *)(iVar2 + 0x87);
    }
    if ((iVar2 != 0 && 0xf0 < bVar1) && (*(byte *)((int)piVar6 + 0x87) < 0xf1)) {
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined2 *)(param_1 + 0x18) = 0xffff;
      *(undefined2 *)(param_1 + 0x1a) = 0xffff;
      iVar2 = *(int *)(param_1 + 0x2c08);
      iVar7 = *(int *)(param_1 + 0x2c04);
      if (iVar7 != 0) {
        puVar3 = func_003CC1E4((undefined4 *)*param_2,(*param_2 - param_2[2] & 0xfffffffcU) + 0x18);
        *param_2 = (int)puVar3;
        puVar3 = func_003CC230(puVar3,local_2c,iVar7,iVar2 << 2);
        *param_2 = (int)puVar3;
        if ((uint *)param_2[3] != (uint *)0x0) {
          *(uint *)param_2[3] = (uint)((int)puVar3 - param_2[2]) >> 3;
        }
        param_2[2] = *param_2;
        param_2[3] = local_2c[0];
        if (param_2[4] == 0) {
          param_2[4] = *param_2 - param_2[1] & 0xfffffffc;
        }
      }
    }
    iVar2 = (**(code **)(*piVar6 + 8))(piVar6,param_3,param_2);
    uVar5 = uVar5 + 1;
    if (iVar2 != 0) {
      *(int **)(param_1 + 0x1c) = piVar6;
    }
  }
  return;
}


#include "ghidra_types.h"

extern int func_003CC1E4(undefined4 *param_1,uint param_2);
extern int func_003CC230(uint *param_1,undefined4 *param_2,int param_3,uint param_4);
extern int func_0049F434(int *param_1,int param_2,undefined *param_3);
extern undefined *DAT_00130668;

// USA 001304F0 <- EU 001304F0 (Ghidra, non-matching)
// GLOBAL DAT_00130668 undefined *

void func_001304F0(int param_1,int *param_2,undefined1 param_3,int param_4)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_2c ((int *)(albw_frame + 0x4))
  func_0049F434(*(int **)(param_1 + 0x28c8),-8,DAT_00130668);
  iVar4 = *(int *)(param_1 + 0x28c8);
  iVar3 = *(int *)(iVar4 + 4);
  if (iVar3 != iVar4) {
LAB_00130538:
    do {
      if (((param_4 == 0) && (*(byte *)(*(int *)(iVar3 + 8) + 0x87) < 0xf1)) ||
         (iVar1 = (**(code **)(**(int **)(iVar3 + 8) + 8))(*(int **)(iVar3 + 8),param_3,param_2),
         iVar1 == 0)) {
        iVar3 = *(int *)(iVar3 + 4);
LAB_00130650:
        if (iVar3 != iVar4) goto LAB_00130538;
      }
      else {
        iVar1 = *(int *)(iVar3 + 8);
        *(int *)(param_1 + 0x1c) = iVar1;
        iVar3 = *(int *)(iVar3 + 4);
        if (((*(byte *)(iVar1 + 0x87) < 0xf1) || (iVar3 == iVar4)) ||
           (0xf0 < *(byte *)(*(int *)(iVar3 + 8) + 0x87))) goto LAB_00130650;
        *(undefined4 *)(param_1 + 0x14) = 0;
        *(undefined2 *)(param_1 + 0x18) = 0xffff;
        *(undefined2 *)(param_1 + 0x1a) = 0xffff;
        iVar1 = *(int *)(param_1 + 0x2c08);
        iVar5 = *(int *)(param_1 + 0x2c04);
        if (iVar5 != 0) {
          puVar2 = func_003CC1E4((undefined4 *)*param_2,(*param_2 - param_2[2] & 0xfffffffcU) + 0x18
                                );
          *param_2 = (int)puVar2;
          puVar2 = func_003CC230(puVar2,local_2c,iVar5,iVar1 << 2);
          *param_2 = (int)puVar2;
          if ((uint *)param_2[3] != (uint *)0x0) {
            *(uint *)param_2[3] = (uint)((int)puVar2 - param_2[2]) >> 3;
          }
          param_2[2] = *param_2;
          param_2[3] = local_2c[0];
          if (param_2[4] == 0) {
            param_2[4] = *param_2 - param_2[1] & 0xfffffffc;
          }
        }
      }
    } while (iVar3 != iVar4);
  }
  return;
}


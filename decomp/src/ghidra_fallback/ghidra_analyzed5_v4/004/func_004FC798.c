#include "ghidra_types.h"

extern float DAT_004fc8ac;

// USA 004FC798 <- EU 004FC770 (Ghidra, non-matching)
// GLOBAL DAT_004fc8ac float

undefined4 func_004FC798(int param_1,int param_2,undefined1 *param_3,float fparam_0)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ushort *puVar5;
  
  if (param_2 != 0) {
    uVar4 = (uint)*(byte *)(param_1 + 0xa8);
    if (uVar4 < 7) {
      if (uVar4 != 0) {
        uVar1 = uVar4 & 1;
        uVar3 = 0;
        if ((*(byte *)(param_1 + 0xa8) & 1) != 0) {
          do {
            if (*(int *)(param_1 + uVar3 * 0xc) == param_2) {
              return 1;
            }
            uVar3 = uVar3 + 1;
          } while (uVar3 < uVar1);
        }
        for (; uVar1 < uVar4; uVar1 = uVar1 + 2) {
          if ((*(int *)(param_1 + uVar1 * 0xc) == param_2) ||
             (*(int *)(param_1 + uVar1 * 0xc + 0xc) == param_2)) {
            return 1;
          }
        }
      }
      if (DAT_004fc8ac <= fparam_0) {
        *(float *)(param_2 + 0x134) = fparam_0;
      }
      iVar2 = 0;
      if (0 < *(int *)(*(int *)(param_2 + 0x20) + 4)) {
        do {
          puVar5 = (ushort *)(**(int **)(param_2 + 0x20) + iVar2 * 0x154);
          if (puVar5 != (ushort *)0x0) {
            *puVar5 = *puVar5 | 0x400;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(*(int *)(param_2 + 0x20) + 4));
      }
      *(int *)(param_1 + (uint)*(byte *)(param_1 + 0xa8) * 0xc) = param_2;
      *(undefined1 *)(param_1 + (uint)*(byte *)(param_1 + 0xa8) * 0xc + 4) = *param_3;
      *(float *)(param_1 + (uint)*(byte *)(param_1 + 0xa8) * 0xc + 8) = fparam_0;
      *(char *)(param_1 + 0xa8) = *(char *)(param_1 + 0xa8) + '\x01';
      return 1;
    }
  }
  return 0;
}


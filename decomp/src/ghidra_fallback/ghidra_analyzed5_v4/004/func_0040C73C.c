#include "ghidra_types.h"


// USA 0040C73C <- EU 0040C71C (Ghidra, non-matching)

void * func_0040C73C(int param_1,undefined4 param_2,int *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int unaff_r9;
  int iVar8;
  int iVar9;
  bool bVar10;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 ((int *)(albw_frame + 0x8))
  if (*(char *)(param_1 + 0x5e) != '\0') {
    uVar4 = 0;
    local_38[0] = *param_3;
    local_38[1] = param_3[1];
    local_38[2] = param_3[2];
    local_38[3] = param_3[3];
    iVar1 = *(int *)(param_1 + 0x48);
    if (*(char *)(param_1 + 0x5d) != '\0') {
      do {
        iVar2 = param_1 + uVar4 * 4;
        iVar5 = local_38[uVar4];
        iVar6 = *(int *)(iVar2 + 0x24);
        piVar7 = (int *)(iVar2 + 0x34);
        uVar3 = 0;
        iVar2 = iVar1 * 0xa0;
        if (param_4 != 0) {
          do {
            iVar9 = *(int *)(iVar6 + iVar2 * 4);
            bVar10 = iVar9 < 0;
            if (bVar10) {
              unaff_r9 = -iVar9;
            }
            if (!bVar10) {
              unaff_r9 = iVar9;
            }
            iVar8 = *(int *)(param_1 + 0x4c) * unaff_r9 >> 7;
            if (bVar10) {
              iVar8 = -iVar8;
            }
            unaff_r9 = *(int *)(param_1 + 0x50) * (*(int *)(iVar5 + uVar3 * 4) - iVar8) +
                       *(int *)(param_1 + 0x54) * *piVar7 >> 7;
            *piVar7 = unaff_r9;
            *(int *)(iVar6 + iVar2 * 4) = unaff_r9;
            *(int *)(iVar5 + uVar3 * 4) = iVar9;
            uVar3 = uVar3 + 1;
            iVar2 = iVar2 + 1;
          } while (uVar3 < param_4);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(byte *)(param_1 + 0x5d));
    }
    uVar4 = *(int *)(param_1 + 0x48) + 1;
    *(uint *)(param_1 + 0x48) = uVar4;
    if (*(uint *)(param_1 + 0x44) <= uVar4) {
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
  }
  return (void *)param_1;
}


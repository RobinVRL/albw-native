#include "ghidra_types.h"

extern int DAT_003fe8a0;
extern int DAT_003fe8a4;

// USA 003FE664 <- EU 003FE644 (Ghidra, non-matching)
// GLOBAL DAT_003fe8a0 int
// GLOBAL DAT_003fe8a4 int

/* WARNING: Type propagation algorithm not settling */

undefined4 func_003FE664(int param_1,int param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  byte *pbVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  
  uVar2 = *(ushort *)(param_1 + 0x20);
  if ((uint)*(ushort *)(param_1 + 0x22) <= (uint)uVar2) {
    return 0;
  }
  bVar3 = true;
  if (param_3 != 0) {
    iVar7 = 0;
    if (*(byte *)(param_3 + 0x1c) != 0) {
      do {
        iVar5 = 0;
        piVar6 = (int *)(*(int *)(param_3 + 0x20 + iVar7 * 4) + param_3);
        if (*(byte *)(piVar6 + 1) != 0) {
          iVar8 = *piVar6;
          do {
            pbVar4 = (byte *)(piVar6[iVar5 + 2] + (int)piVar6);
            if (iVar8 == DAT_003fe8a0) {
              if (*(int *)(param_1 + 0x18) == 0) {
                bVar3 = false;
              }
              if ((*(uint *)(param_2 + 0x78) & 3) <= (uint)*pbVar4) {
                bVar3 = false;
              }
              if (pbVar4[2] != 1) {
                bVar3 = false;
              }
              if (pbVar4[1] != 0) {
                bVar3 = false;
              }
              uVar9 = (uint)*(ushort *)(*(int *)(param_1 + 0xc) + 0xc);
              iVar10 = 0;
              if (uVar9 != 0) {
                do {
                  if (*(int *)(*(int *)(*(int *)(param_1 + 0x18) + iVar10 * 4) + 0x10) == 0)
                  goto LAB_003fe84c;
                  iVar10 = iVar10 + 1;
                } while (iVar10 < (int)uVar9);
              }
              goto LAB_003fe850;
            }
            if (iVar8 < DAT_003fe8a0) {
              iVar10 = DAT_003fe8a4 + iVar8;
              if (iVar10 == 0) {
                bVar1 = pbVar4[2];
                if ((*(uint *)(param_2 + 0x74) & 0x200) == 0) {
                  bVar3 = false;
                }
                if (pbVar4[1] != 0) {
                  bVar3 = false;
                }
                goto joined_r0x003fe848;
              }
              if (iVar10 == 0xc0000) {
                bVar1 = pbVar4[2];
                if (7 < pbVar4[1]) {
                  bVar3 = false;
                }
                goto joined_r0x003fe848;
              }
              if (iVar10 == 0xa080000) {
                if ((*(uint *)(param_2 + 0x74) & 0x1000) == 0) {
                  bVar3 = false;
                }
                if (2 < pbVar4[1]) {
                  bVar3 = false;
                }
                if (pbVar4[2] == 2) goto LAB_003fe850;
                goto LAB_003fe84c;
              }
            }
            else {
              if (iVar8 - DAT_003fe8a0 == 0x2f20000) {
                bVar1 = pbVar4[2];
                if ((*(uint *)(param_2 + 0x74) & 0x10000) == 0) {
                  bVar3 = false;
                }
                if (6 < pbVar4[1]) {
                  bVar3 = false;
                }
              }
              else {
                if (iVar8 - DAT_003fe8a0 != 0x3000000) goto LAB_003fe850;
                if (2 < *pbVar4) {
                  bVar3 = false;
                }
                bVar1 = pbVar4[2];
                if ((uint)(*(int *)(param_2 + 0x74) << 0x1c) >> 0x1e <= (uint)*pbVar4) {
                  bVar3 = false;
                }
                if (4 < pbVar4[1]) {
                  bVar3 = false;
                }
              }
joined_r0x003fe848:
              if (bVar1 != 2) {
LAB_003fe84c:
                bVar3 = false;
              }
            }
LAB_003fe850:
            iVar5 = iVar5 + 1;
          } while (iVar5 < (int)(uint)*(byte *)(piVar6 + 1));
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)(uint)*(byte *)(param_3 + 0x1c));
      if (!bVar3) {
        return 1;
      }
    }
  }
  piVar6 = (int *)(*(int *)(param_1 + 0x1c) + (uint)uVar2 * 8);
  *(ushort *)(param_1 + 0x20) = uVar2 + 1;
  *piVar6 = param_2;
  piVar6[1] = param_3;
  return 1;
}


#include "ghidra_types.h"

extern uint DAT_003cb530;

// USA 003CB3DC <- EU 003CB3B8 (Ghidra, non-matching)
// GLOBAL DAT_003cb530 uint

void * func_003CB3DC(int param_1)

{
  short sVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  short *psVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  
  iVar12 = 0;
  iVar9 = 0;
  if (*(char *)(param_1 + 0xc) != '\0') {
    do {
      iVar13 = *(int *)(param_1 + iVar9 * 4 + 0x10);
      uVar5 = 0x2c0;
      puVar3 = (uint *)(*(int *)(param_1 + 0xb4) + iVar12 * 4);
      iVar10 = 0x2b1;
      puVar11 = (uint *)(param_1 + 0xa4);
      if (*(char *)(iVar13 + 6) != '\0') {
        uVar5 = 0x290;
        iVar10 = 0x281;
        puVar11 = (uint *)(param_1 + 0xa8);
      }
      iVar6 = *(int *)(iVar13 + 0x18);
      uVar8 = 0;
      if (*(int *)(iVar13 + 0x1c) != 0) {
        do {
          uVar2 = DAT_003cb530;
          psVar7 = (short *)(iVar6 + iVar13 + uVar8 * 0x14);
          sVar1 = *psVar7;
          if (sVar1 == 0) {
            *puVar11 = *puVar11 | (*(uint *)(psVar7 + 2) & 1) << ((ushort)psVar7[1] & 0xff);
          }
          else {
            if (sVar1 == 1) {
              puVar4 = puVar3 + 1;
              *puVar3 = *(int *)(psVar7 + 6) << 0x10 | *(int *)(psVar7 + 8) << 0x18 |
                        *(uint *)(psVar7 + 2) | *(int *)(psVar7 + 4) << 8;
              *puVar4 = (uint)(ushort)psVar7[1] + iVar10 | 0xf0000;
            }
            else {
              if (sVar1 != 2) goto LAB_003cb500;
              *puVar3 = (uint)(ushort)psVar7[1];
              puVar3[1] = uVar5 | 0x803f0000;
              puVar3[2] = (uint)(*(int *)(psVar7 + 6) << 8) >> 0x18 | *(int *)(psVar7 + 8) << 8;
              puVar3[3] = (*(uint *)(psVar7 + 4) >> 8 & 0xffff) + *(int *)(psVar7 + 6) * 0x10000;
              puVar3[4] = *(uint *)(psVar7 + 2) & 0xffffff | *(int *)(psVar7 + 4) << 0x18;
              puVar3[5] = uVar2;
              puVar4 = puVar3 + 5;
            }
            puVar3 = puVar4 + 1;
          }
LAB_003cb500:
          uVar8 = uVar8 + 1;
        } while (uVar8 < *(uint *)(iVar13 + 0x1c));
      }
      iVar10 = iVar9 * 4;
      iVar9 = iVar9 + 1;
      iVar12 = iVar12 + *(int *)(*(int *)(param_1 + 0xb8) + iVar10);
    } while (iVar9 < (int)(uint)*(byte *)(param_1 + 0xc));
  }
  return (void *)param_1;
}


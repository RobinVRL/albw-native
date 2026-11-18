#include "ghidra_types.h"

extern int DAT_003cd268;
extern uint DAT_003cd26c;

// USA 003CD0F0 <- EU 003CD0CC (Ghidra, non-matching)
// GLOBAL DAT_003cd268 int
// GLOBAL DAT_003cd26c uint

void * func_003CD0F0(int param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  short *psVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  iVar10 = 0;
  if (*(char *)(param_1 + 8) != '\0') {
    do {
      iVar13 = param_1 + iVar10 * 4;
      uVar6 = 0x2c0;
      iVar12 = 0x2b1;
      puVar11 = (uint *)(param_1 + 0x29c);
      iVar3 = param_1 + iVar10 * DAT_003cd268 * 8;
      iVar14 = *(int *)(iVar13 + 0xc);
      puVar4 = (uint *)(iVar3 + 0x368);
      if (*(char *)(iVar14 + 6) != '\0') {
        uVar6 = 0x290;
        iVar12 = 0x281;
        puVar11 = (uint *)(param_1 + 0x2a0);
      }
      iVar7 = *(int *)(iVar14 + 0x18);
      uVar9 = 0;
      if (*(int *)(iVar14 + 0x1c) != 0) {
        do {
          uVar2 = DAT_003cd26c;
          psVar8 = (short *)(iVar7 + iVar14 + uVar9 * 0x14);
          sVar1 = *psVar8;
          if (sVar1 == 0) {
            *puVar11 = *puVar11 | (*(uint *)(psVar8 + 2) & 1) << ((ushort)psVar8[1] & 0xff);
          }
          else {
            if (sVar1 == 1) {
              puVar5 = puVar4 + 1;
              *puVar4 = *(int *)(psVar8 + 6) << 0x10 | *(int *)(psVar8 + 8) << 0x18 |
                        *(uint *)(psVar8 + 2) | *(int *)(psVar8 + 4) << 8;
              *puVar5 = (uint)(ushort)psVar8[1] + iVar12 | 0xf0000;
            }
            else {
              if (sVar1 != 2) goto LAB_003cd224;
              *puVar4 = (uint)(ushort)psVar8[1];
              puVar4[1] = uVar6 | 0x803f0000;
              puVar4[2] = (uint)(*(int *)(psVar8 + 6) << 8) >> 0x18 | *(int *)(psVar8 + 8) << 8;
              puVar4[3] = (*(uint *)(psVar8 + 4) >> 8 & 0xffff) + *(int *)(psVar8 + 6) * 0x10000;
              puVar4[4] = *(uint *)(psVar8 + 2) & 0xffffff | *(int *)(psVar8 + 4) << 0x18;
              puVar4[5] = uVar2;
              puVar5 = puVar4 + 5;
            }
            puVar4 = puVar5 + 1;
          }
LAB_003cd224:
          uVar9 = uVar9 + 1;
        } while (uVar9 < *(uint *)(iVar14 + 0x1c));
      }
      iVar10 = iVar10 + 1;
      *(int *)(iVar13 + 0x12868) = (int)puVar4 + (-0x368 - iVar3) >> 2;
    } while (iVar10 < (int)(uint)*(byte *)(param_1 + 8));
  }
  return (void *)param_1;
}


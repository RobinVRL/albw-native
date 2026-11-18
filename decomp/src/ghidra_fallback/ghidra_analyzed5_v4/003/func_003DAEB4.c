#include "ghidra_types.h"

extern uint DAT_003db0fc;
extern int DAT_003db100;
extern int DAT_003db104;
extern int DAT_003db108;
extern int DAT_003db10c;

// USA 003DAEB4 <- EU 003DAE94 (Ghidra, non-matching)
// GLOBAL DAT_003db0fc uint
// GLOBAL DAT_003db100 int
// GLOBAL DAT_003db104 int
// GLOBAL DAT_003db108 int
// GLOBAL DAT_003db10c int

void func_003DAEB4(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  short *psVar11;
  int iVar12;
  bool bVar13;
  bool bVar14;
  undefined2 *local_28;
  
  iVar3 = DAT_003db100;
  uVar2 = DAT_003db0fc;
  iVar7 = 0;
  iVar8 = 0;
  uVar9 = DAT_003db0fc | (int)DAT_003db0fc >> 0xb;
LAB_003daeb0:
  while( true ) {
    if (iVar7 == param_2 + -1) {
      *(undefined2 *)(param_1 + iVar7 * 2) = 0;
      return;
    }
    puVar6 = (ushort *)(param_3 + iVar8 * 2);
    uVar1 = *puVar6;
    uVar4 = (uint)uVar1;
    if (uVar4 != 0x20 && uVar4 != 0x3000) break;
    iVar8 = iVar8 + 1;
  }
  uVar10 = uVar4 - 0xff41;
  if (0x19 < uVar10) {
    uVar10 = uVar4 - 0xff21;
  }
  bVar14 = 0x18 < uVar10;
  bVar13 = uVar10 == 0x19;
  if (0x19 < uVar10) {
    bVar14 = 8 < uVar4 - 0xff10;
    bVar13 = uVar4 - 0xff10 == 9;
  }
  if (bVar14 && !bVar13) {
    if (uVar4 - 0x3041 < 0x56) {
      psVar11 = (short *)(param_1 + iVar7 * 2);
      *psVar11 = uVar1 + 0x60;
      iVar5 = 0;
      do {
        if (*(short *)(iVar3 + iVar5 * 4) == *psVar11) {
          *psVar11 = *(short *)(iVar3 + iVar5 * 4 + 2);
          break;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 0xc);
    }
    else {
      if (uVar4 - 0x30a1 < 0x5a) {
        puVar6 = (ushort *)(param_1 + iVar7 * 2);
        *puVar6 = uVar1;
        iVar5 = 0;
        do {
          if (*(ushort *)(iVar3 + iVar5 * 4) == *puVar6) {
            *puVar6 = *(ushort *)(iVar3 + iVar5 * 4 + 2);
            break;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < 0xc);
        iVar8 = iVar8 + 1;
        iVar7 = iVar7 + 1;
        goto LAB_003daeb0;
      }
      if (uVar4 - 0xff66 < 0x3a) {
        uVar10 = (uint)puVar6[1];
        if (uVar10 == uVar2) {
          iVar5 = 0;
          do {
            iVar12 = DAT_003db104;
            if (*(ushort *)(DAT_003db104 + iVar5 * 4) == uVar4) goto LAB_003db010;
            iVar5 = iVar5 + 1;
          } while (iVar5 < 0x15);
        }
        else if (uVar10 == uVar9) {
          iVar5 = 0;
          do {
            iVar12 = DAT_003db108;
            if (*(ushort *)(DAT_003db108 + iVar5 * 4) == uVar4) goto LAB_003db010;
            iVar5 = iVar5 + 1;
          } while (iVar5 < 5);
        }
        psVar11 = (short *)(param_1 + iVar7 * 2);
        iVar5 = 0;
        do {
          if (*(ushort *)(DAT_003db10c + iVar5 * 4) == uVar4) {
            *psVar11 = *(short *)(DAT_003db10c + iVar5 * 4 + 2);
            break;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < 0x3a);
        iVar5 = 0;
        do {
          if (*(short *)(iVar3 + iVar5 * 4) == *psVar11) {
            *psVar11 = *(short *)(iVar3 + iVar5 * 4 + 2);
            break;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < 0xc);
      }
      else {
        *(ushort *)(param_1 + iVar7 * 2) = uVar1;
        if (uVar4 == 0) {
          return;
        }
      }
    }
    iVar8 = iVar8 + 1;
    goto LAB_003daf70;
  }
  iVar8 = iVar8 + 1;
  *(ushort *)(param_1 + iVar7 * 2) = uVar1 + 0x120;
LAB_003daf70:
  iVar7 = iVar7 + 1;
  goto LAB_003daeb0;
LAB_003db010:
  local_28 = (undefined2 *)(param_1 + iVar7 * 2);
  iVar8 = iVar8 + 2;
  *local_28 = *(undefined2 *)(iVar12 + iVar5 * 4 + 2);
  goto LAB_003daf70;
}


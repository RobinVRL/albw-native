#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_001787B4(int param_1,int param_2);
extern int func_00178F40(int param_1);
extern int func_0042A064(short *param_1,uint param_2,uint param_3);

// USA 001788EC <- EU 001788EC (Ghidra, non-matching)

undefined4 func_001788EC(int param_1)

{
  short sVar1;
  int iVar2;
  bool bVar3;
  undefined2 uVar4;
  short *psVar5;
  short *psVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  short *psVar10;
  uint uVar11;
  bool bVar12;
  
  *(undefined2 *)(param_1 + 0x24) = 4;
  *(undefined2 *)(param_1 + 0x26) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined2 *)(param_1 + 0x38) = 0;
  *(undefined2 *)(param_1 + 0x32) = 0;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(uint **)(param_1 + 8) = *(uint **)(param_1 + 0xc);
  if (*(char *)(param_1 + 0x2e) == '\x01') {
    func_0010E3C4(*(uint **)(param_1 + 0xc),*(uint **)(param_1 + 0x10),*(uint *)(param_1 + 0x18));
    uVar4 = (undefined2)*(undefined4 *)(param_1 + 0x18);
    *(undefined2 *)(param_1 + 0x20) = uVar4;
    *(undefined2 *)(param_1 + 6) = uVar4;
  }
  func_00178F40(param_1);
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x38);
  if (*(int *)(param_1 + 0x18) < 1) {
    *(undefined1 *)(param_1 + 0x28) = 1;
    return 0;
  }
  if (*(char *)(param_1 + 0x2e) != '\x01') {
    func_001787B4(param_1,0);
  }
  *(undefined1 *)(param_1 + 0x2a) = 1;
  uVar8 = (uint)*(ushort *)(param_1 + 0x34);
  psVar10 = *(short **)(param_1 + 8);
  bVar3 = true;
  psVar5 = psVar10;
  uVar11 = uVar8;
  do {
    sVar1 = *psVar5;
    psVar6 = psVar5;
    if (sVar1 == 0) break;
    if (sVar1 == 0xe) {
      psVar6 = (short *)((int)psVar5 + (ushort)psVar5[3] + 8);
LAB_001789f4:
      bVar12 = psVar5 == (short *)0x0;
      psVar5 = psVar6;
      if (bVar12) goto LAB_001789fc;
    }
    else {
      if (sVar1 == 0xf) {
        psVar6 = psVar5 + 3;
        goto LAB_001789f4;
      }
LAB_001789fc:
      psVar6 = psVar5 + 1;
      if (*psVar5 == 10) {
        uVar11 = uVar11 - 1 & 0xffff;
      }
    }
    psVar5 = psVar6;
  } while (uVar11 != 0);
  uVar9 = 0;
  uVar11 = (int)psVar6 - (int)psVar10 & 0xffff;
  *(short *)(param_1 + 0x30) = (short)((int)psVar6 - (int)psVar10);
  psVar5 = psVar10;
  do {
    while( true ) {
      sVar1 = *psVar5;
      psVar6 = psVar5;
      if ((sVar1 == 0) ||
         (((sVar1 == 10 && (uVar9 = uVar9 + 1 & 0xffff, uVar8 <= uVar9)) ||
          (iVar2 = -(uint)(psVar5 < psVar10), bVar12 = uVar11 < (uint)((int)psVar5 - (int)psVar10),
          (int)-(iVar2 + (uint)bVar12) < 0 !=
          (SBORROW4(0,iVar2) != SBORROW4((uint)(psVar5 < psVar10),(uint)bVar12)))))) {
        bVar3 = false;
        goto LAB_00178ac8;
      }
      if (sVar1 == 0xe) break;
      if (sVar1 == 0xf) {
        psVar6 = psVar5 + 3;
        goto LAB_00178a9c;
      }
LAB_00178abc:
      psVar5 = psVar6 + 1;
    }
    psVar6 = (short *)((int)psVar5 + (ushort)psVar5[3] + 8);
LAB_00178a9c:
    if (psVar5 == (short *)0x0) goto LAB_00178abc;
    sVar1 = psVar5[1];
    bVar12 = sVar1 != 1;
    if (!bVar12) {
      sVar1 = psVar5[2];
    }
    psVar5 = psVar6;
  } while (bVar12 || sVar1 != 0xe);
LAB_00178ac8:
  uVar4 = SUB42(psVar6,0);
  if (bVar3) {
    uVar4 = (undefined2)(uVar11 >> 1);
  }
  *(bool *)(param_1 + 0x3f) = bVar3;
  if (bVar3) {
    *(undefined2 *)(param_1 + 0x22) = uVar4;
  }
  uVar7 = func_0042A064(psVar10,uVar11,uVar8);
  return uVar7;
}


#include "ghidra_types.h"

extern int func_0068F1B8(uint *param_1,uint *param_2,undefined4 *param_3,uint *param_4,uint param_5, ushort *param_6,uint param_7);
extern int func_0068F3E4(uint *param_1,uint *param_2,undefined4 *param_3,uint *param_4,uint param_5, ushort *param_6,uint param_7);
extern uint DAT_0068fb0c;
extern uint DAT_0068fb10;
extern uint DAT_0068fb14;

// USA 0068F9A8 <- EU 0068F980 (Ghidra, non-matching)
// GLOBAL DAT_0068fb0c uint
// GLOBAL DAT_0068fb10 uint
// GLOBAL DAT_0068fb14 uint

uint func_0068F9A8(uint *param_1,uint *param_2,undefined4 *param_3,uint *param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ushort *puVar5;
  ushort *puVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define auStack_3c ((undefined4 *)(albw_frame + 0x4))
  #define uStack_28 (*(uint *)(albw_frame + 0x18))
  uVar4 = DAT_0068fb0c;
  puVar6 = (ushort *)param_4[2];
  uVar8 = param_4[1];
  uVar7 = *param_4 ^ DAT_0068fb0c;
  iVar3 = (int)(uVar8 * 2) >> 1;
  iVar2 = iVar3 + -1;
  if (0 < iVar2) {
    puVar5 = puVar6 + -1;
    if (-1 < (int)(uVar8 << 0x1f)) {
      uVar7 = (uint)*puVar6 ^ (uVar7 >> 5 | uVar7 << 0x1b);
      puVar5 = puVar6;
    }
    uVar1 = puVar5[1];
    for (iVar2 = iVar2 >> 1; iVar2 != 0; iVar2 = iVar2 + -1) {
      uVar7 = (uint)uVar1 ^ (uVar7 >> 5 | uVar7 << 0x1b);
      uVar1 = puVar5[3];
      uVar7 = (uint)puVar5[2] ^ (uVar7 >> 5 | uVar7 << 0x1b);
      puVar5 = puVar5 + 2;
    }
  }
  iVar3 = iVar3 + -1;
  if (-1 < iVar3) {
    uVar7 = (uint)puVar6[iVar3] ^ (uVar7 >> 5 | uVar7 << 0x1b);
  }
  uVar7 = func_0068F1B8(param_1,param_2,param_3,param_4,uVar7,puVar6,uVar8 << 1);
  if ((int)uVar7 < 0) {
    uVar8 = (uVar7 & 0x3fc00) >> 10;
    bVar9 = uVar8 == 0x11;
    if (bVar9) {
      uVar8 = uVar7 & 0x3ff;
    }
    if (bVar9 && uVar8 == 0x6f) {
      uVar7 = param_4[1];
      puVar6 = (ushort *)param_4[2];
      uVar4 = *param_4 ^ uVar4;
      iVar3 = (int)(uVar7 * 2) >> 1;
      iVar2 = iVar3 + -1;
      if (0 < iVar2) {
        puVar5 = puVar6 + -1;
        if (-1 < (int)(uVar7 << 0x1f)) {
          uVar4 = (uint)*puVar6 ^ (uVar4 >> 5 | uVar4 << 0x1b);
          puVar5 = puVar6;
        }
        uVar1 = puVar5[1];
        for (iVar2 = iVar2 >> 1; iVar2 != 0; iVar2 = iVar2 + -1) {
          uVar4 = (uint)uVar1 ^ (uVar4 >> 5 | uVar4 << 0x1b);
          uVar1 = puVar5[3];
          uVar4 = (uint)puVar5[2] ^ (uVar4 >> 5 | uVar4 << 0x1b);
          puVar5 = puVar5 + 2;
        }
      }
      iVar3 = iVar3 + -1;
      if (-1 < iVar3) {
        uVar4 = (uint)puVar6[iVar3] ^ (uVar4 >> 5 | uVar4 << 0x1b);
      }
      uVar4 = func_0068F3E4(param_1 + 10,&uStack_28,auStack_3c,param_4,uVar4,puVar6,uVar7 << 1);
      uVar7 = DAT_0068fb10;
      if ((uVar4 & 0x80000000) != 0) {
        uVar8 = (uVar4 & 0x3fc00) >> 10;
        bVar9 = uVar8 == 0x11;
        if (bVar9) {
          uVar8 = uVar4 & 0x3ff;
        }
        uVar7 = uVar4;
        if (bVar9 && uVar8 == 0x6f) {
          uVar7 = DAT_0068fb14;
        }
      }
    }
  }
  return uVar7;
}


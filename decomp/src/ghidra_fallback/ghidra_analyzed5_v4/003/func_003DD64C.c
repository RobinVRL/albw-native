#include "ghidra_types.h"

extern int DAT_003dd748;
extern int DAT_003dd74c;

// USA 003DD64C <- EU 003DD62C (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// GLOBAL DAT_003dd748 int
// GLOBAL DAT_003dd74c int

void func_003DD64C(byte *param_1,ushort *param_2,int param_3,ushort *param_4,int param_5)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  short sVar5;
  short sVar6;
  byte *pbVar7;
  short *psVar8;
  int iVar9;
  int iVar10;
  ushort *puVar11;
  int iVar12;
  ushort uVar13;
  ushort *puVar14;
  ushort unaff_r7;
  ushort uVar15;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_68 ((ushort *)(albw_frame + 0x8))
  #define pbStack_34 (*(byte * *)(albw_frame + 0x3c))
  #define local_30 (*(ushort * *)(albw_frame + 0x40))
  #define iStack_2c (*(int *)(albw_frame + 0x44))
  #define local_28 (*(ushort * *)(albw_frame + 0x48))
  local_28 = param_4;
  iStack_2c = param_3;
  local_30 = param_2;
  pbStack_34 = param_1;
  uVar4 = param_4[1];
  uVar13 = param_4[2];
  while (0 < param_5) {
    bVar2 = *param_1;
    unaff_r7 = (ushort)bVar2;
    puVar11 = local_68;
    psVar8 = (short *)(param_3 + (uint)(bVar2 >> 4) * 4);
    iVar9 = 7;
    sVar5 = *psVar8;
    sVar6 = psVar8[1];
    pbVar7 = param_1;
    do {
      pbVar7 = pbVar7 + 1;
      iVar9 = iVar9 + -1;
      bVar3 = *pbVar7;
      *puVar11 = (ushort)(bVar3 >> 4);
      puVar11[1] = bVar3 & 0xf;
      puVar11 = puVar11 + 2;
    } while (iVar9 != 0);
    param_1 = param_1 + 8;
    if (param_5 < 0xe) {
      iVar9 = 0;
      if (param_5 < 1) break;
    }
    else {
      iVar9 = param_5 + -0xe;
      param_5 = 0xe;
    }
    iVar10 = param_5;
    puVar11 = local_30;
    puVar14 = local_68;
    uVar15 = uVar13;
    do {
      uVar13 = uVar4;
      iVar1 = (int)(short)uVar15 * (int)sVar6 + (int)(short)uVar13 * (int)sVar5 +
              ((int)((uint)*puVar14 << 0x1c) >> (0x11 - (bVar2 & 0xf) & 0xff)) + 0x400 >> 0xb;
      iVar12 = DAT_003dd748;
      if ((-0x8001 < iVar1) && (iVar12 = iVar1, 0x7fff < iVar1)) {
        iVar12 = DAT_003dd74c;
      }
      iVar10 = iVar10 + -1;
      uVar4 = (ushort)iVar12;
      *puVar11 = uVar4;
      puVar11 = puVar11 + 1;
      puVar14 = puVar14 + 1;
      uVar15 = uVar13;
    } while (iVar10 != 0);
    local_30 = local_30 + param_5;
    param_5 = iVar9;
  }
  *local_28 = unaff_r7;
  local_28[1] = uVar4;
  local_28[2] = uVar13;
  return;
}


#include "ghidra_types.h"

extern uint DAT_00255724;
extern uint DAT_00255728;
extern uint DAT_0025572c;

// USA 002554A0 <- EU 002554C8 (Ghidra, non-matching)
// GLOBAL DAT_00255724 uint
// GLOBAL DAT_00255728 uint
// GLOBAL DAT_0025572c uint

void * func_002554A0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  int iVar13;
  undefined1 *puVar14;
  
  iVar9 = 0;
  iVar13 = 0x2d;
  pbVar8 = (byte *)(param_2 + 8);
  do {
    iVar1 = iVar9 * 4;
    iVar13 = iVar13 + -1;
    iVar9 = iVar9 + 1;
    *(uint *)(param_1 + iVar1 + 0x28) = (uint)*pbVar8;
    pbVar8 = pbVar8 + 1;
  } while (iVar13 != 0);
  puVar10 = (undefined1 *)(param_2 + 0x88);
  *(uint *)(param_1 + 0xdc) = (uint)*(byte *)(param_2 + 3);
  iVar9 = 0x20;
  *(uint *)(param_1 + 0xe0) = (uint)*(byte *)(param_2 + 4);
  *(uint *)(param_1 + 0xe4) = (uint)*(byte *)(param_2 + 5);
  *(uint *)(param_1 + 0xe8) = (uint)*(byte *)(param_2 + 6);
  *(uint *)(param_1 + 0xec) = (uint)*(byte *)(param_2 + 7);
  *(undefined2 *)(param_1 + 0xf0) = *(undefined2 *)(param_2 + 0xce);
  *(undefined1 *)(param_1 + 0xf9) = *(undefined1 *)(param_2 + 0xcb);
  *(undefined1 *)(param_1 + 0xfa) = *(undefined1 *)(param_2 + 0xcc);
  *(undefined1 *)(param_1 + 0xfb) = *(undefined1 *)(param_2 + 0xcd);
  *(undefined1 *)(param_1 + 0xfc) = *(undefined1 *)(param_2 + 0xd0);
  *(undefined1 *)(param_1 + 0xfd) = *(undefined1 *)(param_2 + 0xd1);
  *(undefined2 *)(param_1 + 0x102) = *(undefined2 *)(param_2 + 0xd2);
  *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_2 + 0xd4);
  puVar3 = (undefined1 *)(param_2 + 0xa8);
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_2 + 0xd8);
  uVar7 = 0;
  do {
    puVar14 = (undefined1 *)(param_1 + 0x10c + uVar7);
    puVar4 = puVar3;
    puVar11 = puVar10;
    do {
      puVar10 = puVar11 + 1;
      puVar12 = (undefined1 *)(param_1 + 0x14c);
      *puVar14 = *puVar11;
      puVar3 = puVar4 + 1;
      if (uVar7 < 0x40) {
        puVar12 = puVar12 + uVar7;
      }
      iVar9 = iVar9 + -1;
      uVar7 = uVar7 + 1;
      *puVar12 = *puVar4;
      uVar2 = DAT_00255728;
      uVar6 = DAT_00255724;
      if (iVar9 == 0) {
        iVar9 = 0;
        iVar13 = 0x2d;
        puVar5 = (uint *)(param_1 + 0x28);
        do {
          if (5 < *puVar5) {
            *puVar5 = 0;
          }
          while( true ) {
            iVar13 = iVar13 + -1;
            puVar5 = puVar5 + 1;
            iVar9 = iVar9 + 1;
            if (iVar13 == 0) {
              if (0xd < *(uint *)(param_1 + 0xdc)) {
                *(undefined4 *)(param_1 + 0xdc) = 0;
              }
              if (0xd < *(uint *)(param_1 + 0xe0)) {
                *(undefined4 *)(param_1 + 0xe0) = 0;
              }
              if (0xd < *(uint *)(param_1 + 0xe4)) {
                *(undefined4 *)(param_1 + 0xe4) = 0;
              }
              if (0xd < *(uint *)(param_1 + 0xe8)) {
                *(undefined4 *)(param_1 + 0xe8) = 0;
              }
              if (0xd < *(uint *)(param_1 + 0xec)) {
                *(undefined4 *)(param_1 + 0xec) = 0;
              }
              if (uVar6 < *(ushort *)(param_1 + 0xf0)) {
                *(undefined2 *)(param_1 + 0xf0) = 0;
              }
              if (99 < *(byte *)(param_1 + 0xf9)) {
                *(undefined1 *)(param_1 + 0xf9) = 0;
              }
              if (99 < *(byte *)(param_1 + 0xfa)) {
                *(undefined1 *)(param_1 + 0xfa) = 0;
              }
              if (99 < *(byte *)(param_1 + 0xfb)) {
                *(undefined1 *)(param_1 + 0xfb) = 0;
              }
              if (100 < *(byte *)(param_1 + 0xfc)) {
                *(undefined1 *)(param_1 + 0xfc) = 0;
              }
              if (100 < *(byte *)(param_1 + 0xfd)) {
                *(undefined1 *)(param_1 + 0xfd) = 0;
              }
              if (uVar2 < *(ushort *)(param_1 + 0x102)) {
                *(undefined2 *)(param_1 + 0x102) = 0;
              }
              uVar7 = DAT_0025572c;
              if (DAT_0025572c < *(uint *)(param_1 + 0x104)) {
                *(undefined4 *)(param_1 + 0x104) = 0;
              }
              uVar6 = 0;
              if (uVar7 < *(uint *)(param_1 + 0x108)) {
                *(undefined4 *)(param_1 + 0x108) = 0;
              }
              do {
                pbVar8 = (byte *)(param_1 + 0x10c);
                if (uVar6 < 0x40) {
                  pbVar8 = pbVar8 + uVar6;
                }
                if (0x10 < *pbVar8) {
                  puVar3 = (undefined1 *)(param_1 + 0x10c);
                  if (uVar6 < 0x40) {
                    puVar3 = puVar3 + uVar6;
                  }
                  *puVar3 = 0;
                }
                pbVar8 = (byte *)(param_1 + 0x14c);
                if (uVar6 < 0x40) {
                  pbVar8 = pbVar8 + uVar6;
                }
                if (0x10 < *pbVar8) {
                  puVar3 = (undefined1 *)(param_1 + 0x14c);
                  if (uVar6 < 0x40) {
                    puVar3 = puVar3 + uVar6;
                  }
                  *puVar3 = 0;
                }
                uVar6 = uVar6 + 1;
              } while ((int)uVar6 < 0x20);
              *(undefined1 *)(param_1 + 0x21) = 0;
              return (void *)param_1;
            }
            if (iVar9 != 0x1f) break;
            if (2 < *puVar5 - 2) {
              *puVar5 = 2;
            }
          }
        } while( true );
      }
      puVar14 = (undefined1 *)(param_1 + 0x10c);
      puVar4 = puVar3;
      puVar11 = puVar10;
    } while (0x3f < uVar7);
  } while( true );
}


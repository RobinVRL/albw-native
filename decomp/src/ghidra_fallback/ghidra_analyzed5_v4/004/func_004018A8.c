#include "ghidra_types.h"

extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_004010C8(int param_1,uint *param_2);
extern uint DAT_00401a64;
extern uint DAT_00401a68;
extern uint DAT_00401a6c;
extern uint DAT_00401a70;
extern uint DAT_00401a74;

// USA 004018A8 <- EU 00401888 (Ghidra, non-matching)
// GLOBAL DAT_00401a64 uint
// GLOBAL DAT_00401a68 uint
// GLOBAL DAT_00401a6c uint
// GLOBAL DAT_00401a70 uint
// GLOBAL DAT_00401a74 uint

uint * func_004018A8(int param_1,uint *param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 ((uint *)(albw_frame + 0x0))
  puVar7 = local_30 + 1;
  bVar10 = *(char *)(param_1 + 0x30) == '\0';
  local_30[0] = *(uint *)(param_3 + 0x78) & 3;
  puVar4 = local_30;
  if (3 < local_30[0]) {
    puVar4 = puVar7;
  }
  local_30[1] = 3;
  uVar9 = *puVar4;
  if ((*(byte *)(param_3 + 0x9e) & 4) == 0) {
    if (uVar9 != 0) {
      puVar7 = *(uint **)(param_3 + 0x7c);
    }
    uVar5 = 0;
    uVar3 = 0;
    if (uVar9 != 0) {
      do {
        uVar2 = uVar3 + 1;
        uVar5 = uVar5 | ((puVar7[uVar3 * 8 + 2] << 0xe) >> 0x1e) << ((uVar3 & 0x7f) << 1);
        uVar3 = uVar2;
      } while (uVar2 < uVar9);
    }
    *(short *)(param_3 + 0x6a) = (short)(uVar5 << 1);
  }
  bVar1 = false;
  uVar5 = 0;
  uVar3 = 0;
  if (uVar9 != 0) {
    do {
      iVar6 = param_1 + uVar3 * 0x20;
      iVar8 = *(int *)(param_3 + 0x7c) + uVar3 * 0x20;
      uVar5 = uVar5 | 1 << (uVar3 & 0xff);
      if ((*(uint *)(iVar6 + 0x63c) != *(uint *)(iVar8 + 0xc) >> 3) ||
         (*(int *)(iVar6 + 0x64c) != *(int *)(iVar8 + 0x14))) {
        bVar1 = true;
        *(undefined4 *)(iVar6 + 0x634) = *(undefined4 *)(iVar8 + 0x18);
        *(uint *)(iVar6 + 0x63c) = *(uint *)(iVar8 + 0xc) >> 3;
        *(undefined4 *)(iVar6 + 0x644) = *(undefined4 *)(iVar8 + 0x1c);
        *(undefined4 *)(iVar6 + 0x64c) = *(undefined4 *)(iVar8 + 0x14);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar9);
  }
  if (bVar10 || bVar1) {
    puVar4 = func_004010C8(param_1,param_2);
    uVar3 = DAT_00401a64;
    *puVar4 = 0;
    puVar4[1] = uVar3;
    puVar4[2] = 0;
    param_2 = puVar4 + 4;
    puVar4[3] = 0;
  }
  uVar3 = DAT_00401a68;
  puVar4 = param_2;
  if (bVar10) {
    *param_2 = uVar5 << 8;
    param_2[1] = uVar3;
    uVar3 = DAT_00401a6c;
    puVar4 = param_2 + 4;
    param_2[2] = uVar5 | 0x11000;
    param_2[3] = uVar3;
  }
  uVar3 = DAT_00401a70;
  puVar7 = puVar4;
  if (bVar10 || bVar1) {
    puVar7 = puVar4 + 2;
    *puVar4 = uVar5 | 0x11000;
    puVar4[1] = uVar3;
  }
  if (bVar1) {
    func_00110D44(puVar7,(byte *)(param_1 + 0x634),uVar9 * 0x20);
    uVar3 = DAT_00401a74;
    puVar4 = puVar7 + uVar9 * 8;
    puVar7 = puVar4 + 2;
    *puVar4 = *(ushort *)(param_3 + 0x6a) | 0x7fff0000;
    puVar4[1] = uVar3;
  }
  return puVar7;
}


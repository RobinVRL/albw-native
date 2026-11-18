#include "ghidra_types.h"


// USA 00564DA0 <- EU 00564D78 (Ghidra, non-matching)

/* WARNING: Removing unreachable block (ram,0x005650c4) */
/* WARNING: Removing unreachable block (ram,0x00565090) */
/* WARNING: Removing unreachable block (ram,0x005650f8) */

void func_00564DA0(int *param_1,int *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar2 = *param_2 + (uint)*(ushort *)(param_3 + 0x20) * 0x278;
  puVar4 = (undefined1 *)(iVar2 + 4);
  if ((*(byte *)(*param_1 + 6) & 0x10) == 0) {
    do {
      if (puVar4[iVar5 + 0x164] != '\0') {
        iVar3 = *param_2 + (uint)*(ushort *)(param_3 + 0x20) * 0x278 + iVar5 * 0x10;
        puVar4[iVar5 * 0x2c + 0xb] =
             (char)((uint)((int)(short)(ushort)*(byte *)(iVar3 + 0x1b4) *
                          (int)(short)(ushort)*(byte *)(param_3 + 0x40)) >> 8);
        puVar4[iVar5 * 0x2c + 0xc] =
             (char)((uint)((int)(short)(ushort)*(byte *)(iVar3 + 0x1b5) *
                          (int)(short)(ushort)*(byte *)(param_3 + 0x41)) >> 8);
        puVar4[iVar5 * 0x2c + 0xd] =
             (char)((uint)((int)(short)(ushort)*(byte *)(iVar3 + 0x1b6) *
                          (int)(short)(ushort)*(byte *)(param_3 + 0x42)) >> 8);
        puVar4[iVar5 * 0x2c + 8] =
             (char)((uint)((int)(short)(ushort)*(byte *)(iVar3 + 0x1b8) *
                          (int)(short)(ushort)*(byte *)(param_3 + 0x44)) >> 8);
        puVar4[iVar5 * 0x2c + 9] =
             (char)((uint)((int)(short)(ushort)*(byte *)(iVar3 + 0x1b9) *
                          (int)(short)(ushort)*(byte *)(param_3 + 0x45)) >> 8);
        puVar4[iVar5 * 0x2c + 10] =
             (char)((uint)((int)(short)(ushort)*(byte *)(iVar3 + 0x1ba) *
                          (int)(short)(ushort)*(byte *)(param_3 + 0x46)) >> 8);
        puVar4[iVar5 * 0x2c + 0xe] =
             (char)((uint)((int)(short)(ushort)*(byte *)(iVar3 + 0x1bc) *
                          (int)(short)(ushort)*(byte *)(param_3 + 0x48)) >> 8);
        puVar4[iVar5 * 0x2c + 0xf] =
             (char)((uint)((int)(short)(ushort)*(byte *)(iVar3 + 0x1bd) *
                          (int)(short)(ushort)*(byte *)(param_3 + 0x49)) >> 8);
        puVar4[iVar5 * 0x2c + 0x10] =
             (char)((uint)((int)(short)(ushort)*(byte *)(iVar3 + 0x1be) *
                          (int)(short)(ushort)*(byte *)(param_3 + 0x4a)) >> 8);
        puVar4[iVar5 * 0x2c + 0x11] =
             (char)((uint)((int)(short)(ushort)*(byte *)(iVar3 + 0x1c0) *
                          (int)(short)(ushort)*(byte *)(param_3 + 0x4c)) >> 8);
        puVar4[iVar5 * 0x2c + 0x12] =
             (char)((uint)((int)(short)(ushort)*(byte *)(iVar3 + 0x1c1) *
                          (int)(short)(ushort)*(byte *)(param_3 + 0x4d)) >> 8);
        puVar4[iVar5 * 0x2c + 0x13] =
             (char)((uint)((int)(short)(ushort)*(byte *)(iVar3 + 0x1c2) *
                          (int)(short)(ushort)*(byte *)(param_3 + 0x4e)) >> 8);
        puVar4[iVar5 * 0x2c + 6] = (char)((*(byte *)(*param_1 + 6) & 0x20) >> 5);
        puVar4[iVar5 * 0x2c + 7] = (char)((*(byte *)(*param_1 + 6) & 0x40) >> 6);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 8);
  }
  else {
    do {
      if (puVar4[iVar5 + 0x164] != '\0') {
        iVar3 = *param_2 + (uint)*(ushort *)(param_3 + 0x20) * 0x278 + iVar5 * 0x10;
        puVar4[iVar5 * 0x2c + 0xb] =
             (char)((uint)((int)(short)(ushort)*(byte *)(iVar3 + 0x1b4) *
                          (int)(short)(ushort)*(byte *)(param_3 + 0x40)) >> 8);
        puVar4[iVar5 * 0x2c + 0xc] =
             (char)((uint)((int)(short)(ushort)*(byte *)(iVar3 + 0x1b5) *
                          (int)(short)(ushort)*(byte *)(param_3 + 0x41)) >> 8);
        puVar4[iVar5 * 0x2c + 0xd] =
             (char)((uint)((int)(short)(ushort)*(byte *)(iVar3 + 0x1b6) *
                          (int)(short)(ushort)*(byte *)(param_3 + 0x42)) >> 8);
        puVar4[iVar5 * 0x2c + 8] =
             (char)((uint)((int)(short)(ushort)*(byte *)(iVar3 + 0x1b8) *
                          (int)(short)(ushort)*(byte *)(param_3 + 0x44)) >> 8);
        puVar4[iVar5 * 0x2c + 9] =
             (char)((uint)((int)(short)(ushort)*(byte *)(iVar3 + 0x1b9) *
                          (int)(short)(ushort)*(byte *)(param_3 + 0x45)) >> 8);
        puVar4[iVar5 * 0x2c + 10] =
             (char)((uint)((int)(short)(ushort)*(byte *)(iVar3 + 0x1ba) *
                          (int)(short)(ushort)*(byte *)(param_3 + 0x46)) >> 8);
        puVar4[iVar5 * 0x2c + 0xe] =
             (char)((uint)((int)(short)(ushort)*(byte *)(iVar3 + 0x1bc) *
                          (int)(short)(ushort)*(byte *)(param_3 + 0x48)) >> 8);
        puVar4[iVar5 * 0x2c + 0xf] =
             (char)((uint)((int)(short)(ushort)*(byte *)(iVar3 + 0x1bd) *
                          (int)(short)(ushort)*(byte *)(param_3 + 0x49)) >> 8);
        puVar4[iVar5 * 0x2c + 0x10] =
             (char)((uint)((int)(short)(ushort)*(byte *)(iVar3 + 0x1be) *
                          (int)(short)(ushort)*(byte *)(param_3 + 0x4a)) >> 8);
        puVar4[iVar5 * 0x2c + 0x11] = *(undefined1 *)(iVar3 + 0x1c0);
        puVar4[iVar5 * 0x2c + 0x12] = *(undefined1 *)(iVar3 + 0x1c1);
        puVar4[iVar5 * 0x2c + 0x13] = *(undefined1 *)(iVar3 + 0x1c2);
        puVar4[iVar5 * 0x2c + 6] = (char)((*(byte *)(*param_1 + 6) & 0x20) >> 5);
        puVar4[iVar5 * 0x2c + 7] = (char)((*(byte *)(*param_1 + 6) & 0x40) >> 6);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 8);
  }
  iVar5 = *param_2 + (uint)*(ushort *)(param_3 + 0x20) * 0x278;
  uVar1 = (uint)*(byte *)(param_3 + 0x3c) +
          ((uint)((int)(short)(ushort)*(byte *)(param_3 + 0x40) *
                 (int)(short)(ushort)*(byte *)(iVar5 + 0x234)) >> 8);
  if (0xff < uVar1) {
    uVar1 = 0xff;
  }
  *puVar4 = (char)uVar1;
  uVar1 = (uint)*(byte *)(param_3 + 0x3d) +
          ((uint)((int)(short)(ushort)*(byte *)(param_3 + 0x41) *
                 (int)(short)(ushort)*(byte *)(iVar5 + 0x235)) >> 8);
  if (0xff < uVar1) {
    uVar1 = 0xff;
  }
  *(char *)(iVar2 + 5) = (char)uVar1;
  uVar1 = (uint)*(byte *)(param_3 + 0x3e) +
          ((uint)((int)(short)(ushort)*(byte *)(param_3 + 0x42) *
                 (int)(short)(ushort)*(byte *)(iVar5 + 0x236)) >> 8);
  if (0xff < uVar1) {
    uVar1 = 0xff;
  }
  *(char *)(iVar2 + 6) = (char)uVar1;
  return;
}


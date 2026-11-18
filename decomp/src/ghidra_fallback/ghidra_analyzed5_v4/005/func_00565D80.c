#include "ghidra_types.h"

extern int func_00562A88(byte *param_1,uint *param_2);

// USA 00565D80 <- EU 00565D58 (Ghidra, non-matching)

/* WARNING: Removing unreachable block (ram,0x005660d4) */
/* WARNING: Removing unreachable block (ram,0x005660a0) */
/* WARNING: Removing unreachable block (ram,0x00566108) */

void func_00565D80(int *param_1,undefined4 *param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  
  uVar4 = 0;
  iVar1 = *param_3 + (uint)*(ushort *)(param_4 + 0x20) * 0x278;
  puVar5 = (undefined1 *)(iVar1 + 4);
  if ((*(byte *)(*param_1 + 6) & 0x10) == 0) {
    do {
      if (puVar5[uVar4 + 0x164] != '\0') {
        iVar2 = *param_3 + (uint)*(ushort *)(param_4 + 0x20) * 0x278 + uVar4 * 0x10;
        puVar5[uVar4 * 0x2c + 0xb] =
             (char)((uint)((int)(short)(ushort)*(byte *)(iVar2 + 0x1b4) *
                          (int)(short)(ushort)*(byte *)(param_4 + 0x40)) >> 8);
        puVar5[uVar4 * 0x2c + 0xc] =
             (char)((uint)((int)(short)(ushort)*(byte *)(iVar2 + 0x1b5) *
                          (int)(short)(ushort)*(byte *)(param_4 + 0x41)) >> 8);
        puVar5[uVar4 * 0x2c + 0xd] =
             (char)((uint)((int)(short)(ushort)*(byte *)(iVar2 + 0x1b6) *
                          (int)(short)(ushort)*(byte *)(param_4 + 0x42)) >> 8);
        puVar5[uVar4 * 0x2c + 8] =
             (char)((uint)((int)(short)(ushort)*(byte *)(iVar2 + 0x1b8) *
                          (int)(short)(ushort)*(byte *)(param_4 + 0x44)) >> 8);
        puVar5[uVar4 * 0x2c + 9] =
             (char)((uint)((int)(short)(ushort)*(byte *)(iVar2 + 0x1b9) *
                          (int)(short)(ushort)*(byte *)(param_4 + 0x45)) >> 8);
        puVar5[uVar4 * 0x2c + 10] =
             (char)((uint)((int)(short)(ushort)*(byte *)(iVar2 + 0x1ba) *
                          (int)(short)(ushort)*(byte *)(param_4 + 0x46)) >> 8);
        puVar5[uVar4 * 0x2c + 0xe] =
             (char)((uint)((int)(short)(ushort)*(byte *)(iVar2 + 0x1bc) *
                          (int)(short)(ushort)*(byte *)(param_4 + 0x48)) >> 8);
        puVar5[uVar4 * 0x2c + 0xf] =
             (char)((uint)((int)(short)(ushort)*(byte *)(iVar2 + 0x1bd) *
                          (int)(short)(ushort)*(byte *)(param_4 + 0x49)) >> 8);
        puVar5[uVar4 * 0x2c + 0x10] =
             (char)((uint)((int)(short)(ushort)*(byte *)(iVar2 + 0x1be) *
                          (int)(short)(ushort)*(byte *)(param_4 + 0x4a)) >> 8);
        puVar5[uVar4 * 0x2c + 0x11] =
             (char)((uint)((int)(short)(ushort)*(byte *)(iVar2 + 0x1c0) *
                          (int)(short)(ushort)*(byte *)(param_4 + 0x4c)) >> 8);
        puVar5[uVar4 * 0x2c + 0x12] =
             (char)((uint)((int)(short)(ushort)*(byte *)(iVar2 + 0x1c1) *
                          (int)(short)(ushort)*(byte *)(param_4 + 0x4d)) >> 8);
        puVar5[uVar4 * 0x2c + 0x13] =
             (char)((uint)((int)(short)(ushort)*(byte *)(iVar2 + 0x1c2) *
                          (int)(short)(ushort)*(byte *)(param_4 + 0x4e)) >> 8);
        puVar5[uVar4 * 0x2c + 6] = (char)((*(byte *)(*param_1 + 6) & 0x20) >> 5);
        puVar5[uVar4 * 0x2c + 7] = (char)((*(byte *)(*param_1 + 6) & 0x40) >> 6);
        puVar3 = func_00562A88(puVar5 + uVar4 * 0x2c + 4,(uint *)*param_2);
        *param_2 = puVar3;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 8);
  }
  else {
    do {
      if (puVar5[uVar4 + 0x164] != '\0') {
        iVar2 = *param_3 + (uint)*(ushort *)(param_4 + 0x20) * 0x278 + uVar4 * 0x10;
        puVar5[uVar4 * 0x2c + 0xb] =
             (char)((uint)((int)(short)(ushort)*(byte *)(iVar2 + 0x1b4) *
                          (int)(short)(ushort)*(byte *)(param_4 + 0x40)) >> 8);
        puVar5[uVar4 * 0x2c + 0xc] =
             (char)((uint)((int)(short)(ushort)*(byte *)(iVar2 + 0x1b5) *
                          (int)(short)(ushort)*(byte *)(param_4 + 0x41)) >> 8);
        puVar5[uVar4 * 0x2c + 0xd] =
             (char)((uint)((int)(short)(ushort)*(byte *)(iVar2 + 0x1b6) *
                          (int)(short)(ushort)*(byte *)(param_4 + 0x42)) >> 8);
        puVar5[uVar4 * 0x2c + 8] =
             (char)((uint)((int)(short)(ushort)*(byte *)(iVar2 + 0x1b8) *
                          (int)(short)(ushort)*(byte *)(param_4 + 0x44)) >> 8);
        puVar5[uVar4 * 0x2c + 9] =
             (char)((uint)((int)(short)(ushort)*(byte *)(iVar2 + 0x1b9) *
                          (int)(short)(ushort)*(byte *)(param_4 + 0x45)) >> 8);
        puVar5[uVar4 * 0x2c + 10] =
             (char)((uint)((int)(short)(ushort)*(byte *)(iVar2 + 0x1ba) *
                          (int)(short)(ushort)*(byte *)(param_4 + 0x46)) >> 8);
        puVar5[uVar4 * 0x2c + 0xe] =
             (char)((uint)((int)(short)(ushort)*(byte *)(iVar2 + 0x1bc) *
                          (int)(short)(ushort)*(byte *)(param_4 + 0x48)) >> 8);
        puVar5[uVar4 * 0x2c + 0xf] =
             (char)((uint)((int)(short)(ushort)*(byte *)(iVar2 + 0x1bd) *
                          (int)(short)(ushort)*(byte *)(param_4 + 0x49)) >> 8);
        puVar5[uVar4 * 0x2c + 0x10] =
             (char)((uint)((int)(short)(ushort)*(byte *)(iVar2 + 0x1be) *
                          (int)(short)(ushort)*(byte *)(param_4 + 0x4a)) >> 8);
        puVar5[uVar4 * 0x2c + 0x11] = *(undefined1 *)(iVar2 + 0x1c0);
        puVar5[uVar4 * 0x2c + 0x12] = *(undefined1 *)(iVar2 + 0x1c1);
        puVar5[uVar4 * 0x2c + 0x13] = *(undefined1 *)(iVar2 + 0x1c2);
        puVar5[uVar4 * 0x2c + 6] = (char)((*(byte *)(*param_1 + 6) & 0x20) >> 5);
        puVar5[uVar4 * 0x2c + 7] = (char)((*(byte *)(*param_1 + 6) & 0x40) >> 6);
        puVar3 = func_00562A88(puVar5 + uVar4 * 0x2c + 4,(uint *)*param_2);
        *param_2 = puVar3;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 8);
  }
  iVar2 = *param_3 + (uint)*(ushort *)(param_4 + 0x20) * 0x278;
  uVar4 = (uint)*(byte *)(param_4 + 0x3c) +
          ((uint)((int)(short)(ushort)*(byte *)(param_4 + 0x40) *
                 (int)(short)(ushort)*(byte *)(iVar2 + 0x234)) >> 8);
  if (0xff < uVar4) {
    uVar4 = 0xff;
  }
  *puVar5 = (char)uVar4;
  uVar4 = (uint)*(byte *)(param_4 + 0x3d) +
          ((uint)((int)(short)(ushort)*(byte *)(param_4 + 0x41) *
                 (int)(short)(ushort)*(byte *)(iVar2 + 0x235)) >> 8);
  if (0xff < uVar4) {
    uVar4 = 0xff;
  }
  *(char *)(iVar1 + 5) = (char)uVar4;
  uVar4 = (uint)*(byte *)(param_4 + 0x3e) +
          ((uint)((int)(short)(ushort)*(byte *)(param_4 + 0x42) *
                 (int)(short)(ushort)*(byte *)(iVar2 + 0x236)) >> 8);
  if (0xff < uVar4) {
    uVar4 = 0xff;
  }
  *(char *)(iVar1 + 6) = (char)uVar4;
  return;
}


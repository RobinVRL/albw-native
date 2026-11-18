#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BAB4(undefined4 param_1);
extern int func_003714B4(undefined4 *param_1);
extern undefined4 DAT_00171500;
extern undefined *DAT_00171504;
extern undefined4 DAT_00171508;
extern int DAT_0017150c;

// USA 001712B4 <- EU 001712B4 (Ghidra, non-matching)
// GLOBAL DAT_00171500 undefined4
// GLOBAL DAT_00171504 undefined *
// GLOBAL DAT_00171508 undefined4
// GLOBAL DAT_0017150c int

undefined4 * func_001712B4(undefined4 *param_1,int param_2,ushort *param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  
  *param_1 = DAT_00171500;
  iVar2 = func_00100118((int)(param_1 + 1),DAT_00171504,0x10,7);
  puVar7 = (undefined4 *)(iVar2 + -4);
  *(undefined4 *)(iVar2 + 0x7c) = 0;
  *(undefined4 *)(iVar2 + 0x74) = 0;
  *(undefined4 *)(iVar2 + 0x78) = 0;
  *(undefined1 *)(iVar2 + 0x80) = 0xff;
  *(undefined1 *)(iVar2 + 0x81) = 0;
  *(undefined1 *)(iVar2 + 0x82) = 0;
  *(undefined1 *)(iVar2 + 0x83) = 0xff;
  *(undefined1 *)(iVar2 + 0x84) = 0;
  uVar3 = 0;
  *(undefined1 *)(iVar2 + 0x85) = 0;
  do {
    iVar6 = iVar2;
    if (uVar3 < 7) {
      iVar6 = iVar2 + uVar3 * 0x10;
    }
    uVar3 = uVar3 + 1;
    *(undefined4 **)(iVar6 + 8) = puVar7;
  } while ((int)uVar3 < 7);
  *(uint *)(iVar2 + 0x78) =
       *(byte *)(iVar2 + 0x80) & 0x1f | (uint)*(byte *)(iVar2 + 0x81) << 5 |
       (uint)*(byte *)(iVar2 + 0x82) << 0xd | (uint)*(byte *)(iVar2 + 0x83) << 0x13 |
       (uint)(*(char *)(iVar2 + 0x84) != '\0') << 0x1b | (*(byte *)(iVar2 + 0x85) & 3) << 0x1c;
  *puVar7 = DAT_00171508;
  *(undefined4 *)(iVar2 + 0x74) = *(undefined4 *)(iVar2 + 0x7c);
  *(ushort **)(iVar2 + 0x8c) = param_3;
  *(int *)(iVar2 + 0x88) = param_2;
  *(uint *)(iVar2 + 0x90) = *(int *)(*(int *)(param_3 + 0x16) + 0x34) + (uint)*param_3 * 0x2c;
  iVar6 = DAT_0017150c;
  puVar4 = *(undefined4 **)(*(int *)(param_2 + 0x50) + 0xb0);
  if ((uint)*param_3 < *(uint *)(*(int *)(param_2 + 0x50) + 0xac)) {
    puVar4 = puVar4 + *param_3;
  }
  *(undefined4 *)(iVar2 + 0x94) = *puVar4;
  *(undefined1 *)(iVar2 + 0x98) = 0;
  *(undefined1 *)(iVar2 + 0x99) = 0;
  uVar3 = (int)param_3 - *(int *)(*(int *)(param_3 + 0x16) + 0x40);
  iVar6 = (int)((longlong)(int)uVar3 * (longlong)iVar6 + ((ulonglong)uVar3 << 0x20) >> 0x20);
  *(int *)(iVar2 + 0x9c) = (iVar6 >> 5) - (iVar6 >> 0x1f);
  puVar5 = (undefined4 *)func_0010BAB4(0x14);
  puVar4 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar4 = func_003714B4(puVar5);
  }
  *(undefined4 **)(iVar2 + 0xa4) = puVar4;
  *(undefined1 *)(iVar2 + 0x83) = 0xc4;
  *(undefined4 *)(iVar2 + 0x7c) = *(undefined4 *)**(undefined4 **)(iVar2 + 0x90);
  *(undefined1 *)(iVar2 + 0x81) = **(undefined1 **)(iVar2 + 0x94);
  *(char *)(iVar2 + 0x80) =
       (char)*(undefined2 *)
              (**(int **)(*(int *)(iVar2 + 0x88) + 0x20) + (uint)**(ushort **)(iVar2 + 0x8c) * 0x154
              + 0x20);
  uVar1 = param_3[3];
  *(byte *)(iVar2 + 0x85) = (byte)(uVar1 >> 8) & 3;
  *(char *)(iVar2 + 0x82) = (char)uVar1;
  *(undefined4 *)(iVar2 + 0x74) = *(undefined4 *)(iVar2 + 0x7c);
  *(uint *)(iVar2 + 0x78) =
       *(byte *)(iVar2 + 0x80) & 0x1f | (uint)*(byte *)(iVar2 + 0x81) << 5 | (uVar1 & 0xff) << 0xd |
       (uint)*(byte *)(iVar2 + 0x83) << 0x13 | (uint)(*(char *)(iVar2 + 0x84) != '\0') << 0x1b |
       (uint)*(byte *)(iVar2 + 0x85) << 0x1c;
  *(short *)(iVar2 + 0xa0) =
       (short)*(undefined4 *)
               (*(int *)(**(int **)(iVar2 + 0x90) + 0xd0) +
               (uint)*(byte *)(**(int **)(iVar2 + 0x90) + 7) * 4 + 0x10);
  *(short *)(iVar2 + 0xa2) =
       (short)*(undefined4 *)
               (*(int *)(**(int **)(iVar2 + 0x90) + 0xd0) +
               (uint)*(byte *)(**(int **)(iVar2 + 0x90) + 7) * 4 + 0x18);
  return puVar7;
}


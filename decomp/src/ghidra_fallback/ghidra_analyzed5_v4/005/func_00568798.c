#include "ghidra_types.h"

extern int func_003CC090(int *param_1,int param_2,uint param_3);
extern int DAT_0056887c;
extern uint DAT_00568880;
extern uint DAT_00568884;
extern uint DAT_00568888;
extern uint DAT_0056888c;
extern uint DAT_00568890;
extern uint DAT_00568894;

// USA 00568798 <- EU 00568770 (Ghidra, non-matching)
// GLOBAL DAT_0056887c int
// GLOBAL DAT_00568880 uint
// GLOBAL DAT_00568884 uint
// GLOBAL DAT_00568888 uint
// GLOBAL DAT_0056888c uint
// GLOBAL DAT_00568890 uint
// GLOBAL DAT_00568894 uint

undefined4 func_00568798(int param_1,int *param_2,int *param_3)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  func_003CC090(param_2,*(int *)(param_1 + 8),*(int *)(param_1 + 0xc) << 2);
  uVar2 = DAT_00568880;
  uVar6 = param_1 - *(int *)(*(int *)(param_1 + 0x2c) + 0x40);
  iVar7 = (int)((longlong)(int)uVar6 * (longlong)DAT_0056887c + ((ulonglong)uVar6 << 0x20) >> 0x20);
  puVar3 = (uint *)*param_2;
  puVar4 = puVar3 + 2;
  *puVar3 = *(ushort *)
             (*(int *)(*(int *)(param_1 + 0x2c) + 0x68) + ((iVar7 >> 5) - (iVar7 >> 0x1f)) * 0x1c +
             0x18) | 0x7fff0000;
  puVar3[1] = uVar2;
  *param_2 = (int)puVar4;
  uVar6 = DAT_00568888;
  uVar2 = DAT_00568884;
  bVar1 = *(byte *)(param_3 + 2);
  uVar5 = 0;
  if (bVar1 != 0) {
    uVar8 = DAT_00568884 - 0x38;
    uVar9 = DAT_00568884 - 0x1a;
    do {
      puVar3 = (uint *)(*param_3 + uVar5 * 8);
      uVar5 = uVar5 + 1;
      uVar11 = *puVar3;
      uVar10 = puVar3[1];
      *puVar4 = 1;
      puVar4[1] = uVar2;
      puVar4[2] = uVar11;
      puVar4[3] = uVar8;
      puVar4[4] = uVar10;
      puVar4[5] = DAT_0056888c;
      uVar10 = DAT_00568890;
      puVar4[6] = 0;
      puVar4[7] = uVar10;
      uVar10 = DAT_00568894;
      puVar4[8] = 1;
      puVar4[9] = uVar8 | 8;
      puVar4[10] = 1;
      puVar4[0xb] = uVar9;
      puVar4[0xc] = 1;
      puVar4[0xd] = uVar10;
      puVar4[0xe] = 0;
      puVar4[0xf] = uVar6;
      puVar4[0x10] = 0;
      puVar4[0x11] = uVar6;
      puVar4 = puVar4 + 0x12;
      *param_2 = (int)puVar4;
    } while (uVar5 < bVar1);
  }
  return func_003CC090(param_2,*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c) << 2);
}


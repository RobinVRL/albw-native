#include "ghidra_types.h"

extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int DAT_00401c70;
extern byte *DAT_00401c74;

// USA 00401A98 <- EU 00401A78 (Ghidra, non-matching)
// GLOBAL DAT_00401c70 int
// GLOBAL DAT_00401c74 byte *

undefined4 * func_00401A98(undefined4 param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_88 ((int *)(albw_frame + 0x8))
  #define uStack_78 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_74 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_70 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_6c (*(undefined4 *)(albw_frame + 0x24))
  #define local_68 ((int *)(albw_frame + 0x28))
  #define uStack_58 (*(undefined4 *)(albw_frame + 0x38))
  #define uStack_54 (*(undefined4 *)(albw_frame + 0x3c))
  #define uStack_50 (*(undefined4 *)(albw_frame + 0x40))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x44))
  #define local_48 ((uint *)(albw_frame + 0x48))
  #define local_40 (*(undefined4 *)(albw_frame + 0x50))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x54))
  #define local_38 (*(int *)(albw_frame + 0x58))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x60))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x64))
  #define local_28 (*(uint *)(albw_frame + 0x68))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x6c))
  iVar1 = DAT_00401c70;
  puVar6 = param_2 + 4;
  uVar2 = *(uint *)(param_3 + 0x74);
  iVar4 = (uVar2 >> 1 & 0x18) + ((uVar2 << 0x1e) >> 0x19) + ((uVar2 << 0x1c) >> 0x1e) * 0x14 +
          (uVar2 >> 6 & 8);
  pbVar5 = (byte *)(*(int *)(param_3 + 0x7c) + iVar4);
  if (*pbVar5 == 0) {
    if (pbVar5[3] != 0) {
      func_00110D44(local_88,DAT_00401c74,0x44);
      local_40 = *(undefined4 *)(iVar1 + 0x1fc);
      uStack_3c = *(undefined4 *)(iVar1 + 0x200);
      local_38 = *(undefined4 *)(iVar1 + 0x204);
      uStack_34 = *(undefined4 *)(iVar1 + 0x208);
      local_38 = local_88[pbVar5[3]];
      func_00110D44(param_2,(byte *)&local_40,0x10);
      return puVar6;
    }
    local_88[0] = *(int *)(DAT_00401c70 + 0x130);
    local_88[1] = *(undefined4 *)(DAT_00401c70 + 0x134);
    local_88[2] = *(undefined4 *)(DAT_00401c70 + 0x138);
    local_88[3] = *(undefined4 *)(DAT_00401c70 + 0x13c);
    func_00110D44(param_2,(byte *)local_88,0x10);
    return puVar6;
  }
  local_48[0] = *(uint *)(DAT_00401c70 + 0x140);
  local_48[1] = *(undefined4 *)(DAT_00401c70 + 0x144);
  local_40 = *(undefined4 *)(DAT_00401c70 + 0x148);
  uStack_3c = *(undefined4 *)(DAT_00401c70 + 0x14c);
  local_38 = *(undefined4 *)(DAT_00401c70 + 0x150);
  uStack_34 = *(undefined4 *)(DAT_00401c70 + 0x154);
  local_88[0] = *(int *)(DAT_00401c70 + 0x158);
  local_88[1] = *(undefined4 *)(DAT_00401c70 + 0x15c);
  local_88[2] = *(undefined4 *)(DAT_00401c70 + 0x160);
  local_88[3] = *(undefined4 *)(DAT_00401c70 + 0x164);
  uStack_78 = *(undefined4 *)(DAT_00401c70 + 0x168);
  uStack_74 = *(undefined4 *)(DAT_00401c70 + 0x16c);
  uStack_70 = *(undefined4 *)(DAT_00401c70 + 0x170);
  uStack_6c = *(undefined4 *)(DAT_00401c70 + 0x174);
  local_68[0] = *(int *)(DAT_00401c70 + 0x178);
  local_68[1] = *(undefined4 *)(DAT_00401c70 + 0x17c);
  local_68[2] = *(undefined4 *)(DAT_00401c70 + 0x180);
  local_68[3] = *(undefined4 *)(DAT_00401c70 + 0x184);
  uStack_58 = *(undefined4 *)(DAT_00401c70 + 0x188);
  uStack_54 = *(undefined4 *)(DAT_00401c70 + 0x18c);
  uStack_50 = *(undefined4 *)(DAT_00401c70 + 400);
  uStack_4c = *(undefined4 *)(DAT_00401c70 + 0x194);
  if ((uVar2 << 0x14) >> 0x1e == 2) {
    pbVar3 = (byte *)(iVar4 + 4 + *(int *)(param_3 + 0x7c));
    local_30 = *(undefined4 *)(DAT_00401c70 + 0x198);
    uStack_2c = *(undefined4 *)(DAT_00401c70 + 0x19c);
    local_28 = *(undefined4 *)(DAT_00401c70 + 0x1a0);
    uStack_24 = *(undefined4 *)(DAT_00401c70 + 0x1a4);
    local_28 = local_48[*pbVar5] | local_48[*pbVar3] << 8 |
               local_88[pbVar5[1]] << 0x10 | local_68[pbVar5[2]] << 0x14 |
               local_88[pbVar3[1]] << 0x18 | local_68[pbVar3[2]] << 0x1c;
    func_00110D44(param_2,(byte *)&local_30,0x10);
    return puVar6;
  }
  local_30 = *(undefined4 *)(DAT_00401c70 + 0x1a8);
  uStack_2c = *(undefined4 *)(DAT_00401c70 + 0x1ac);
  local_28 = *(undefined4 *)(DAT_00401c70 + 0x1b0);
  uStack_24 = *(undefined4 *)(DAT_00401c70 + 0x1b4);
  local_28 = local_88[pbVar5[1]] << 0x10 | local_68[pbVar5[2]] << 0x14 |
             local_48[*pbVar5] | local_48[*pbVar5] << 8 | local_88[pbVar5[1]] << 0x18 |
             local_68[pbVar5[2]] << 0x1c;
  func_00110D44(param_2,(byte *)&local_30,0x10);
  return puVar6;
}


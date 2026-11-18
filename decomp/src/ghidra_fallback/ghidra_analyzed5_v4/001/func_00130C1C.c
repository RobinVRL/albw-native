#include "ghidra_types.h"

extern int func_001150CC(undefined4 *param_1,undefined4 *param_2,undefined4 param_3);
extern int func_00115108(undefined4 *param_1,undefined4 *param_2,undefined4 param_3);
extern int func_003CC054(int *param_1,int param_2);
extern int func_003CC124(undefined4 *param_1,undefined4 param_2);
extern int func_003CC1E4(undefined4 *param_1,uint param_2);
extern int func_003CC230(uint *param_1,undefined4 *param_2,int param_3,uint param_4);
extern int func_005FFDC0(void);
extern int func_005FFF7C(undefined4 param_1);
extern int func_006003D8(undefined4 param_1,int *param_2);
extern int func_00601378(int param_1);
extern int *DAT_001310e4;
extern uint DAT_001310e8;
extern undefined4 DAT_001310ec;
extern undefined4 DAT_001310f0;

// USA 00130C1C <- EU 00130C1C (Ghidra, non-matching)
// GLOBAL DAT_001310e4 int *
// GLOBAL DAT_001310e8 uint
// GLOBAL DAT_001310ec undefined4
// GLOBAL DAT_001310f0 undefined4

uint * func_00130C1C(int param_1,undefined4 *param_2,undefined4 *param_3,int *param_4)

{
  undefined4 uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 (*(uint * *)(albw_frame + 0x8))
  #define local_54 (*(int *)(albw_frame + 0xc))
  #define local_50 (*(uint * *)(albw_frame + 0x10))
  #define local_4c (*(uint * *)(albw_frame + 0x14))
  #define local_48 (*(uint *)(albw_frame + 0x18))
  #define local_44 ((int *)(albw_frame + 0x1c))
  #define local_30 (*(int *)(albw_frame + 0x30))
  #define local_2c (*(uint * *)(albw_frame + 0x34))
  #define local_28 (*(uint * *)(albw_frame + 0x38))
  if (param_4 != (int *)0x0) {
    iVar4 = *(int *)(param_1 + 0x2bfc);
    local_4c = (uint *)(*(int *)(param_1 + 0x2c00) << 2);
    if (iVar4 != 0) {
      puVar2 = func_003CC1E4((undefined4 *)*param_4,(*param_4 - param_4[2] & 0xfffffffcU) + 0x18);
      *param_4 = (int)puVar2;
      puVar2 = func_003CC230(puVar2,&local_58,iVar4,(uint)local_4c);
      *param_4 = (int)puVar2;
      if ((uint *)param_4[3] != (uint *)0x0) {
        *(uint *)param_4[3] = (uint)((int)puVar2 - param_4[2]) >> 3;
      }
      param_4[2] = *param_4;
      param_4[3] = (int)local_58;
      if (param_4[4] == 0) {
        param_4[4] = *param_4 - param_4[1] & 0xfffffffc;
      }
    }
    iVar4 = *(int *)(param_1 + 0x2c08);
    iVar5 = *(int *)(param_1 + 0x2c04);
    if (iVar5 != 0) {
      puVar2 = func_003CC1E4((undefined4 *)*param_4,(*param_4 - param_4[2] & 0xfffffffcU) + 0x18);
      *param_4 = (int)puVar2;
      puVar2 = func_003CC230(puVar2,&local_4c,iVar5,iVar4 << 2);
      *param_4 = (int)puVar2;
      if ((uint *)param_4[3] != (uint *)0x0) {
        *(uint *)param_4[3] = (uint)((int)puVar2 - param_4[2]) >> 3;
      }
      param_4[2] = *param_4;
      param_4[3] = (int)local_4c;
      if (param_4[4] == 0) {
        param_4[4] = *param_4 - param_4[1] & 0xfffffffc;
      }
    }
    iVar5 = *(int *)(*(int *)(*DAT_001310e4 + 0x1b8) + 0x18);
    iVar4 = *(int *)(*(int *)(*DAT_001310e4 + 0x1b8) + 0x1c);
    if (iVar5 != 0) {
      puVar2 = func_003CC1E4((undefined4 *)*param_4,(*param_4 - param_4[2] & 0xfffffffcU) + 0x18);
      *param_4 = (int)puVar2;
      puVar2 = func_003CC230(puVar2,&local_4c,iVar5,iVar4 << 2);
      *param_4 = (int)puVar2;
      if ((uint *)param_4[3] != (uint *)0x0) {
        *(uint *)param_4[3] = (uint)((int)puVar2 - param_4[2]) >> 3;
      }
      param_4[2] = *param_4;
      param_4[3] = (int)local_4c;
      if (param_4[4] == 0) {
        param_4[4] = *param_4 - param_4[1] & 0xfffffffc;
      }
    }
    uVar1 = DAT_001310ec;
    uVar3 = DAT_001310e8;
    puVar2 = (uint *)*param_4;
    *puVar2 = *(byte *)(param_1 + 0x2b62) | 0x80000000;
    puVar2[1] = uVar3;
    func_00115108(puVar2 + 2,param_3,uVar1);
    uVar1 = DAT_001310f0;
    puVar2[0x14] = *(byte *)(param_1 + 0x2b5a) | 0x80000000;
    puVar2[0x15] = uVar3;
    func_001150CC(puVar2 + 0x16,param_2,uVar1);
    *param_4 = (int)(puVar2 + 0x24);
    return puVar2 + 0x24;
  }
  func_005FFDC0();
  func_006003D8(0x208,&local_30);
  func_003CC124(&local_58,local_30);
  iVar4 = *(int *)(param_1 + 0x2c00);
  iVar5 = *(int *)(param_1 + 0x2bfc);
  if (iVar5 != 0) {
    local_58 = func_003CC1E4(local_58,((int)local_58 - (int)local_50 & 0xfffffffcU) + 0x18);
    local_58 = func_003CC230(local_58,&local_28,iVar5,iVar4 << 2);
    if (local_4c != (uint *)0x0) {
      *local_4c = (uint)((int)local_58 - (int)local_50) >> 3;
    }
    local_4c = local_28;
    local_50 = local_58;
    if (local_48 == 0) {
      local_48 = (int)local_58 - local_54 & 0xfffffffc;
    }
  }
  iVar4 = *(int *)(param_1 + 0x2c08);
  iVar5 = *(int *)(param_1 + 0x2c04);
  if (iVar5 != 0) {
    local_58 = func_003CC1E4(local_58,((int)local_58 - (int)local_50 & 0xfffffffcU) + 0x18);
    local_58 = func_003CC230(local_58,&local_2c,iVar5,iVar4 << 2);
    if (local_4c != (uint *)0x0) {
      *local_4c = (uint)((int)local_58 - (int)local_50) >> 3;
    }
    local_4c = local_2c;
    local_50 = local_58;
    if (local_48 == 0) {
      local_48 = (int)local_58 - local_54 & 0xfffffffc;
    }
  }
  iVar5 = *(int *)(*(int *)(*DAT_001310e4 + 0x1b8) + 0x18);
  iVar4 = *(int *)(*(int *)(*DAT_001310e4 + 0x1b8) + 0x1c);
  if (iVar5 != 0) {
    local_58 = func_003CC1E4(local_58,((int)local_58 - (int)local_50 & 0xfffffffcU) + 0x18);
    local_58 = func_003CC230(local_58,&local_2c,iVar5,iVar4 << 2);
    if (local_4c != (uint *)0x0) {
      *local_4c = (uint)((int)local_58 - (int)local_50) >> 3;
    }
    local_4c = local_2c;
    local_50 = local_58;
    if (local_48 == 0) {
      local_48 = (int)local_58 - local_54 & 0xfffffffc;
    }
  }
  puVar2 = local_58;
  uVar1 = DAT_001310ec;
  uVar3 = DAT_001310e8;
  *local_58 = *(byte *)(param_1 + 0x2b62) | 0x80000000;
  local_58[1] = uVar3;
  func_00115108(local_58 + 2,param_3,uVar1);
  uVar1 = DAT_001310f0;
  puVar2[0x14] = *(byte *)(param_1 + 0x2b5a) | 0x80000000;
  puVar2[0x15] = uVar3;
  func_001150CC(puVar2 + 0x16,param_2,uVar1);
  local_58 = puVar2 + 0x24;
  uVar3 = (int)local_58 - local_54 & 0xfffffffc;
  if (uVar3 != 0) {
    func_00601378(uVar3);
    if (local_48 != 0) {
      func_005FFF7C(local_48);
    }
    func_006003D8(0x208,local_44);
    func_003CC054((int *)&local_58,local_44[0]);
  }
  return (uint *)&local_58;
}


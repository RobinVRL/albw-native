#include "ghidra_types.h"

extern int func_003CBC1C(undefined4 *param_1,int param_2);
extern int func_003CC030(undefined4 *param_1,int param_2);
extern int func_003CC090(int *param_1,int param_2,uint param_3);
extern int func_005626C0(byte *param_1,uint *param_2,int param_3);
extern int func_00562930(int param_1,uint *param_2);
extern int func_0056497C(uint *param_1,uint *param_2,float fparam_0);
extern int func_00564DA0(int *param_1,int *param_2,int param_3);
extern int func_00565A10(int *param_1,int *param_2,int param_3);
extern uint DAT_005658d8;

// USA 005655D0 <- EU 005655A8 (Ghidra, non-matching)
// GLOBAL DAT_005658d8 uint

undefined4 func_005655D0(int *param_1,int *param_2,ushort *param_3,int *param_4)

{
  byte bVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  byte *pbVar7;
  uint *puVar8;
  
  uVar6 = DAT_005658d8;
  if ((*param_3 & 1) == 0) {
    puVar3 = func_003CBC1C((undefined4 *)*param_2,1);
    *param_2 = (int)puVar3;
    if ((*param_3 & 0x20) == 0) {
      puVar8 = puVar3 + 2;
      *puVar3 = 0;
      puVar3[1] = uVar6;
    }
    else {
      puVar8 = func_0056497C((uint *)(param_4 + 0x14),puVar3,*(float *)(*param_1 + 0xc4));
    }
    *param_2 = (int)puVar8;
  }
  else {
    iVar2 = *param_4 + (uint)param_3[0x10] * 0x278;
    pbVar7 = (byte *)(iVar2 + 4);
    func_00565A10(param_1,param_2,(int)pbVar7);
    if ((*param_3 & 0x80) == 0) {
      func_00564DA0(param_1,param_4,(int)param_3);
      *(byte *)(iVar2 + 0x191) = *(byte *)(*param_1 + 6) & 1;
      *(char *)(iVar2 + 0x192) = (char)((*(byte *)(*param_1 + 6) & 2) >> 1);
      *(char *)(iVar2 + 0x193) = (char)((*(byte *)(*param_1 + 6) & 4) >> 2);
      *(char *)(iVar2 + 0x194) = (char)((*(byte *)(*param_1 + 6) & 8) >> 3);
      *(char *)(iVar2 + 0x195) = (char)((*(byte *)(*param_1 + 6) & 0x10) >> 4);
      *(byte *)(iVar2 + 0x188) = *(byte *)(*param_1 + 0xa4) & 0xf;
      *(undefined1 *)(iVar2 + 0x189) = *(undefined1 *)(*param_1 + 0xa5);
      *(undefined1 *)(iVar2 + 0x18b) = *(undefined1 *)(*param_1 + 0xa6);
      *(undefined1 *)(iVar2 + 0x18c) = *(undefined1 *)(*param_1 + 0xa7);
      puVar8 = *(uint **)(param_3 + *(int *)(param_3 + 0xe) * 2 + 10);
      puVar3 = func_005626C0(pbVar7,puVar8,1);
      puVar3 = (uint *)func_00562930((int)pbVar7,puVar3);
      if ((*param_3 & 0x20) == 0) {
        puVar4 = puVar3 + 2;
        *puVar3 = 0;
        puVar3[1] = uVar6;
      }
      else {
        puVar4 = func_0056497C((uint *)(param_4 + 0x14),puVar3,*(float *)(*param_1 + 0xc4));
      }
      uVar6 = ((int)puVar4 - (int)puVar8 & 0xfffffffcU) + 8;
      if (((uVar6 & 0xf) != 0) && (uVar6 = 4 - (uVar6 * 0x10000000 >> 0x1e), 0 < (int)uVar6)) {
        puVar3 = puVar4 + -1;
        if ((uVar6 & 1) != 0) {
          *puVar4 = 0;
          puVar3 = puVar4;
        }
        for (iVar2 = (int)uVar6 >> 1; iVar2 != 0; iVar2 = iVar2 + -1) {
          puVar3[1] = 0;
          puVar3 = puVar3 + 2;
          *puVar3 = 0;
        }
        puVar4 = puVar4 + uVar6;
      }
      puVar5 = func_003CC030(puVar4,1);
      iVar2 = *(int *)(param_3 + *(int *)(param_3 + 0xe) * 2 + 10);
      *(int *)(param_3 + 8) = (int)puVar5 - (int)puVar8 >> 2;
      *(int *)(param_3 + 6) = iVar2;
      *param_3 = *param_3 & 0xfeff | 0x80;
      func_003CC090(param_2,iVar2,*(int *)(param_3 + 8) << 2);
    }
    else {
      func_003CC090(param_2,*(int *)(param_3 + 6),*(int *)(param_3 + 8) << 2);
      iVar2 = 0;
      do {
        if (pbVar7[iVar2 + 0x164] != 0) {
          puVar5 = (undefined4 *)*param_2;
          bVar1 = pbVar7[iVar2 * 0x2c + 4];
          *puVar5 = *(undefined4 *)(pbVar7 + iVar2 * 0x2c + 0x14);
          puVar5[1] = (uint)bVar1 * 0x10 + 0x144 | 0x803f0000;
          puVar5[2] = *(undefined4 *)(pbVar7 + iVar2 * 0x2c + 0x18);
          puVar5[3] = *(undefined4 *)(pbVar7 + iVar2 * 0x2c + 0x28);
          puVar5[4] = *(undefined4 *)(pbVar7 + iVar2 * 0x2c + 0x2c);
          puVar5[5] = 0;
          *param_2 = (int)(puVar5 + 6);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 8);
    }
  }
  func_003CC090(param_2,*(int *)(*param_1 + 200),*(int *)(*param_1 + 0xcc) << 2);
  func_003CC090(param_2,param_1[4],param_1[5] << 2);
  func_003CC090(param_2,*(int *)(param_3 + 0x9e),*(int *)(param_3 + 0xa0) << 2);
  func_003CC090(param_2,*(int *)(param_3 + 0xa2),*(int *)(param_3 + 0xa4) << 2);
  return func_003CC090(param_2,*(int *)(param_3 + 0xa6),*(int *)(param_3 + 0xa8) << 2);
}


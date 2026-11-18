#include "ghidra_types.h"

extern int func_003CBC1C(undefined4 *param_1,int param_2);
extern int func_003CC090(int *param_1,int param_2,uint param_3);
extern int func_005626C0(byte *param_1,uint *param_2,int param_3);
extern int func_00562930(int param_1,uint *param_2);
extern int func_0056497C(uint *param_1,uint *param_2,float fparam_0);
extern int func_00564DA0(int *param_1,int *param_2,int param_3);
extern int func_00565A10(int *param_1,int *param_2,int param_3);
extern uint DAT_00565d54;

// USA 00565B8C <- EU 00565B64 (Ghidra, non-matching)
// GLOBAL DAT_00565d54 uint

undefined4 func_00565B8C(int *param_1,int *param_2,ushort *param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  byte *pbVar4;
  
  uVar1 = DAT_00565d54;
  if ((*param_3 & 1) == 0) {
    puVar3 = func_003CBC1C((undefined4 *)*param_2,1);
    *param_2 = (int)puVar3;
    if ((*param_3 & 0x20) == 0) {
      *puVar3 = 0;
      puVar3[1] = uVar1;
      *param_2 = (int)(puVar3 + 2);
    }
    else {
      puVar3 = func_0056497C((uint *)(param_4 + 0x14),puVar3,*(float *)(*param_1 + 0xc4));
      *param_2 = (int)puVar3;
    }
  }
  else {
    iVar2 = *param_4 + (uint)param_3[0x10] * 0x278;
    pbVar4 = (byte *)(iVar2 + 4);
    func_00565A10(param_1,param_2,(int)pbVar4);
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
    puVar3 = func_005626C0(pbVar4,(uint *)*param_2,1);
    puVar3 = (uint *)func_00562930((int)pbVar4,puVar3);
    if ((*param_3 & 0x20) == 0) {
      *puVar3 = 0;
      puVar3[1] = uVar1;
      puVar3 = puVar3 + 2;
    }
    else {
      puVar3 = func_0056497C((uint *)(param_4 + 0x14),puVar3,*(float *)(*param_1 + 0xc4));
    }
    *param_2 = (int)puVar3;
  }
  func_003CC090(param_2,*(int *)(*param_1 + 200),*(int *)(*param_1 + 0xcc) << 2);
  func_003CC090(param_2,param_1[4],param_1[5] << 2);
  func_003CC090(param_2,*(int *)(param_3 + 0x9e),*(int *)(param_3 + 0xa0) << 2);
  func_003CC090(param_2,*(int *)(param_3 + 0xa2),*(int *)(param_3 + 0xa4) << 2);
  return func_003CC090(param_2,*(int *)(param_3 + 0xa6),*(int *)(param_3 + 0xa8) << 2);
}


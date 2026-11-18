#include "ghidra_types.h"

extern int func_003CBC1C(undefined4 *param_1,int param_2);
extern int func_003CC090(int *param_1,int param_2,uint param_3);
extern int func_0056497C(uint *param_1,uint *param_2,float fparam_0);
extern int func_00565A10(int *param_1,int *param_2,int param_3);
extern uint DAT_00564d74;

// USA 00564C14 <- EU 00564BEC (Ghidra, non-matching)
// GLOBAL DAT_00564d74 uint

undefined4 func_00564C14(int *param_1,int *param_2,ushort *param_3,int *param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  
  if ((*param_3 & 1) == 0) {
    puVar4 = func_003CBC1C((undefined4 *)*param_2,1);
    *param_2 = (int)puVar4;
    uVar2 = DAT_00564d74;
    if ((*param_3 & 0x20) == 0) {
      *puVar4 = 0;
      puVar5 = puVar4 + 2;
      puVar4[1] = uVar2;
    }
    else {
      puVar5 = func_0056497C((uint *)(param_4 + 0x14),puVar4,*(float *)(*param_1 + 0xc4));
    }
    *param_2 = (int)puVar5;
  }
  else {
    iVar8 = *param_4 + (uint)param_3[0x10] * 0x278 + 4;
    func_00565A10(param_1,param_2,iVar8);
    func_003CC090(param_2,*(int *)(param_3 + 6),*(int *)(param_3 + 8) << 2);
    iVar3 = 0;
    do {
      if (*(char *)(iVar8 + iVar3 + 0x164) != '\0') {
        iVar7 = iVar8 + iVar3 * 0x2c;
        puVar6 = (undefined4 *)*param_2;
        bVar1 = *(byte *)(iVar7 + 4);
        *puVar6 = *(undefined4 *)(iVar7 + 0x14);
        puVar6[1] = (uint)bVar1 * 0x10 + 0x144 | 0x803f0000;
        puVar6[2] = *(undefined4 *)(iVar7 + 0x18);
        puVar6[3] = *(undefined4 *)(iVar7 + 0x28);
        puVar6[4] = *(undefined4 *)(iVar7 + 0x2c);
        puVar6[5] = 0;
        *param_2 = (int)(puVar6 + 6);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 8);
  }
  func_003CC090(param_2,*(int *)(*param_1 + 200),*(int *)(*param_1 + 0xcc) << 2);
  func_003CC090(param_2,param_1[4],param_1[5] << 2);
  func_003CC090(param_2,*(int *)(param_3 + 0x9e),*(int *)(param_3 + 0xa0) << 2);
  func_003CC090(param_2,*(int *)(param_3 + 0xa2),*(int *)(param_3 + 0xa4) << 2);
  return func_003CC090(param_2,*(int *)(param_3 + 0xa6),*(int *)(param_3 + 0xa8) << 2);
}


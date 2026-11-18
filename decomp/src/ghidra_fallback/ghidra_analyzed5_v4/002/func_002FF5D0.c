#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00131244(int param_1,uint *param_2,undefined4 *param_3,undefined4 *param_4);
extern int func_001329B4(int param_1);
extern int func_003CC1E4(undefined4 *param_1,uint param_2);
extern int func_003CC230(uint *param_1,undefined4 *param_2,int param_3,uint param_4);
extern int func_004CFFA4(int param_1,undefined4 param_2);
extern int *DAT_002ff714;

// USA 002FF5D0 <- EU 002FF5AC (Ghidra, non-matching)
// GLOBAL DAT_002ff714 int *

void func_002FF5D0(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int in_r3;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  puVar3 = (uint *)*param_2;
  local_20 = in_r3;
  func_0010E3C4(puVar3,*(uint **)(param_1 + 0x34),*(int *)(param_1 + 0x2c) << 2);
  puVar3 = puVar3 + *(int *)(param_1 + 0x2c);
  *param_2 = (int)puVar3;
  iVar4 = *(int *)(*(int *)(param_1 + 0x98) + 0x18);
  iVar2 = *(int *)(*(int *)(param_1 + 0x98) + 0x1c);
  if (iVar4 != 0) {
    puVar3 = func_003CC1E4(puVar3,((int)puVar3 - param_2[2] & 0xfffffffcU) + 0x18);
    *param_2 = (int)puVar3;
    puVar3 = func_003CC230(puVar3,&local_20,iVar4,iVar2 << 2);
    *param_2 = (int)puVar3;
    if ((uint *)param_2[3] != (uint *)0x0) {
      *(uint *)param_2[3] = (uint)((int)puVar3 - param_2[2]) >> 3;
    }
    param_2[2] = *param_2;
    param_2[3] = local_20;
    if (param_2[4] == 0) {
      param_2[4] = *param_2 - param_2[1] & 0xfffffffc;
    }
  }
  piVar1 = DAT_002ff714;
  puVar3 = func_00131244(*DAT_002ff714,(uint *)*param_2,(undefined4 *)(param_1 + 0xd0),
                         (undefined4 *)(param_1 + 0x124));
  *param_2 = (int)puVar3;
  iVar2 = *piVar1;
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  *(undefined4 *)(iVar2 + 0x14) = 0;
  *(undefined2 *)(iVar2 + 0x18) = 0xffff;
  *(undefined2 *)(iVar2 + 0x1a) = 0xffff;
  iVar4 = func_001329B4(*piVar1);
  if ((*(uint *)(iVar4 + 0x2c8) & 1) == 0) {
    iVar4 = iVar4 + 0x10;
  }
  else {
    iVar4 = iVar4 + 400;
  }
  *(int *)(iVar2 + 0x20) = iVar4 + 4;
  uVar5 = 0;
  if (0 < *(int *)(param_1 + 0x178)) {
    do {
      if (uVar5 < *(uint *)(param_1 + 0x178)) {
        iVar2 = *(int *)(*(int *)(param_1 + 0x180) + uVar5 * 4);
      }
      else {
        iVar2 = 0;
      }
      func_004CFFA4(iVar2,param_2);
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < *(int *)(param_1 + 0x178));
  }
  return;
}


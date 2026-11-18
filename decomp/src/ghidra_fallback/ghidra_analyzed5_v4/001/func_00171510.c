#include "ghidra_types.h"

extern int func_001150CC(undefined4 *param_1,undefined4 *param_2,undefined4 param_3);
extern int func_001708A0(int param_1,int *param_2,int param_3);
extern int func_003CC1E4(undefined4 *param_1,uint param_2);
extern int func_003CC230(uint *param_1,undefined4 *param_2,int param_3,uint param_4);
extern uint DAT_00171668;
extern undefined4 DAT_0017166c;

// USA 00171510 <- EU 00171510 (Ghidra, non-matching)
// GLOBAL DAT_00171668 uint
// GLOBAL DAT_0017166c undefined4

undefined4 func_00171510(int *param_1,undefined4 param_2,int *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  local_18 = param_4;
  iVar2 = (**(code **)(*param_1 + 0x10))(param_1);
  if ((iVar2 != 0) && (**(int **)(param_1[0x2b] + 0x178) * 3 != 0)) {
    func_001708A0((int)param_1,param_3,1);
    uVar1 = DAT_00171668;
    puVar4 = (uint *)*param_3;
    iVar2 = param_1[0x2b];
    *puVar4 = *(byte *)(param_1[0x26] + 0x1a) | 0x80000000;
    puVar4[1] = uVar1;
    func_001150CC(puVar4 + 2,(undefined4 *)(iVar2 + 0x1f0),DAT_0017166c);
    *param_3 = (int)(puVar4 + 0x10);
    iVar3 = param_1[0x2b];
    iVar2 = iVar3 + 0x17c;
    if (*(uint *)(iVar3 + 0x1cc) < 2) {
      iVar2 = iVar2 + *(uint *)(iVar3 + 0x1cc) * 0x28;
    }
    **(int **)(iVar2 + 0x1c) = **(int **)(iVar3 + 0x178) * 3;
    **(undefined4 **)(iVar2 + 0x18) = **(undefined4 **)(iVar3 + 0x1e4);
    iVar3 = *(int *)(iVar2 + 0x20);
    iVar2 = *(int *)(iVar2 + 0x24);
    if (iVar3 != 0) {
      puVar4 = func_003CC1E4((undefined4 *)*param_3,(*param_3 - param_3[2] & 0xfffffffcU) + 0x18);
      *param_3 = (int)puVar4;
      puVar4 = func_003CC230(puVar4,&local_18,iVar3,iVar2 << 2);
      *param_3 = (int)puVar4;
      if ((uint *)param_3[3] != (uint *)0x0) {
        *(uint *)param_3[3] = (uint)((int)puVar4 - param_3[2]) >> 3;
      }
      param_3[2] = *param_3;
      param_3[3] = local_18;
      if (param_3[4] == 0) {
        param_3[4] = *param_3 - param_3[1] & 0xfffffffc;
      }
    }
    return 1;
  }
  return 0;
}


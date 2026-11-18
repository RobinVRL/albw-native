#include "ghidra_types.h"

extern int func_001329B4(int param_1);
extern undefined8 func_0026EB74(int param_1,uint *param_2);
extern int func_003CC054(int *param_1,int param_2);
extern int func_003CC124(undefined4 *param_1,undefined4 param_2);
extern int func_003CC1E4(undefined4 *param_1,uint param_2);
extern int func_003CC230(uint *param_1,undefined4 *param_2,int param_3,uint param_4);
extern int func_0054D264(int param_1,uint *param_2,int param_3);
extern int func_005FFDC0(void);
extern int func_005FFF7C(undefined4 param_1);
extern int func_006003D8(undefined4 param_1,int *param_2);
extern int func_00601378(int param_1);
extern int func_00601468(void);
extern int *DAT_002c3270;
extern int *DAT_002c3274;

// USA 002C30E8 <- EU 002C30C4 (Ghidra, non-matching)
// GLOBAL DAT_002c3270 int *
// GLOBAL DAT_002c3274 int *

void func_002C30E8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_60 (*(uint * *)(albw_frame + 0x0))
  #define local_5c (*(int *)(albw_frame + 0x4))
  #define local_58 (*(uint * *)(albw_frame + 0x8))
  #define local_54 (*(uint * *)(albw_frame + 0xc))
  #define local_50 (*(uint *)(albw_frame + 0x10))
  #define local_4c ((int *)(albw_frame + 0x14))
  #define local_34 (*(uint * *)(albw_frame + 0x2c))
  #define local_30 (*(int *)(albw_frame + 0x30))
  #define iStack_2c (*(int *)(albw_frame + 0x34))
  #define local_28 (*(int *)(albw_frame + 0x38))
  if (*(int *)(param_1 + 0x18) != 0) {
    iStack_2c = param_1;
    local_28 = param_2;
    func_00601468();
    piVar4 = DAT_002c3274;
    piVar3 = DAT_002c3270;
    iVar5 = *(int *)(*(int *)(param_1 + 0x14) + 4);
    iVar2 = *(int *)(param_1 + 0x14);
    while (iVar1 = iVar5, iVar2 != param_1 + 0x10) {
      func_006003D8(0x208,&local_30);
      func_003CC124(&local_60,local_30);
      (**(code **)(**(int **)(iVar2 + 8) + 0x10))(*(int **)(iVar2 + 8),0);
      iVar5 = func_001329B4(*piVar3);
      uVar8 = func_0026EB74(iVar5,local_60);
      local_60 = (uint *)uVar8;
      iVar5 = *(int *)(param_1 + 0x24);
      iVar7 = *(int *)(param_1 + 0x20);
      if (iVar7 != 0) {
        local_60 = func_003CC1E4(local_60,((int)local_60 - (int)local_58 & 0xfffffffcU) + 0x18);
        local_60 = func_003CC230(local_60,&local_34,iVar7,iVar5 << 2);
        if (local_54 != (uint *)0x0) {
          *local_54 = (uint)((int)local_60 - (int)local_58) >> 3;
        }
        local_54 = local_34;
        local_58 = local_60;
        if (local_50 == 0) {
          local_50 = (int)local_60 - local_5c & 0xfffffffc;
        }
      }
      (**(code **)(**(int **)(iVar2 + 8) + 0x14))(*(int **)(iVar2 + 8),&local_60);
      local_60 = func_0054D264(*(int *)(*piVar4 + 0x1c),local_60,local_28);
      uVar6 = (int)local_60 - local_5c & 0xfffffffc;
      if (uVar6 != 0) {
        func_00601378(uVar6);
        if (local_50 != 0) {
          func_005FFF7C(local_50);
        }
        func_006003D8(0x208,local_4c);
        func_003CC054((int *)&local_60,local_4c[0]);
      }
      iVar5 = *(int *)(iVar1 + 4);
      iVar2 = iVar1;
    }
    func_005FFDC0();
    *(undefined4 *)(*piVar3 + 0x207c) = 0;
  }
  return;
}


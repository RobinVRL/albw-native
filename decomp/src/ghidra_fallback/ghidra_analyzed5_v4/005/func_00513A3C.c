#include "ghidra_types.h"

extern int func_001512B4(int param_1,float *param_2);
extern int func_0015133C(int param_1,undefined4 *param_2);
extern int func_004356B4(int *param_1);
extern float func_00491624(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_00491E80(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004CEAF0(int param_1);
extern int func_00514604(int param_1);
extern int func_00520ED8(int param_1);
extern float DAT_00513b48;

// USA 00513A3C <- EU 00513A14 (Ghidra, non-matching)
// GLOBAL DAT_00513b48 float

undefined4 func_00513A3C(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(float *)(albw_frame + 0x0))
  #define local_3c (*(float *)(albw_frame + 0x4))
  #define local_38 (*(undefined4 *)(albw_frame + 0x8))
  #define afStack_34 ((float *)(albw_frame + 0xc))
  func_00520ED8(param_1);
  iVar2 = *(int *)(param_1 + 0x51c);
  if (iVar2 != 0) {
    local_40 = *(float *)(param_1 + 0x3d0);
    local_3c = *(float *)(param_1 + 0x3d4);
    local_38 = *(undefined4 *)(param_1 + 0x3d8);
    *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
    func_00491E80((float *)(iVar2 + 0x80),*(uint *)(param_1 + 0x4c4),*(uint *)(param_1 + 1000),0);
    *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
    *(float *)(iVar2 + 0x8c) = local_40;
    *(float *)(iVar2 + 0x9c) = local_3c;
    *(undefined4 *)(iVar2 + 0xac) = local_38;
    if (*(char *)(param_1 + 0x490) == '\x0e') {
      uVar1 = *(undefined4 *)(param_1 + 0x598);
      *(undefined4 *)(iVar2 + 0x74) = uVar1;
      *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
      *(undefined4 *)(iVar2 + 0x78) = uVar1;
      *(undefined4 *)(iVar2 + 0x7c) = uVar1;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x56c);
      *(undefined4 *)(iVar2 + 0x74) = uVar1;
      *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
      *(undefined4 *)(iVar2 + 0x78) = uVar1;
      *(undefined4 *)(iVar2 + 0x7c) = uVar1;
    }
    func_004CEAF0(iVar2);
    iVar2 = *(int *)(param_1 + 0x520);
    if (iVar2 != 0) {
      func_00491624(afStack_34,0,*(uint *)(param_1 + 1000),0);
      local_3c = local_3c + DAT_00513b48;
      func_0015133C(iVar2,afStack_34);
      func_001512B4(iVar2,&local_40);
    }
  }
  if (*(int *)(param_1 + 0x40c) != 0) {
    func_00514604(param_1);
    return func_004356B4(*(int **)(param_1 + 0x40c));
  }
  return 0;
}


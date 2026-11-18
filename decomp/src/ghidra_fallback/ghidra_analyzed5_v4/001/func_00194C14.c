#include "ghidra_types.h"

extern int func_004356B4(int *param_1);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_00520FC0(void);
extern float DAT_00194d74;

// USA 00194C14 <- EU 00194C14 (Ghidra, non-matching)
// GLOBAL DAT_00194d74 float

void func_00194C14(int param_1)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define local_1c (*(float *)(albw_frame + 0x4))
  #define local_18 (*(int *)(albw_frame + 0x8))
  local_20 = *(float *)(param_1 + 0x3d0);
  local_1c = *(float *)(param_1 + 0x3d4);
  local_18 = *(int *)(param_1 + 0x3d8);
  iVar1 = *(int *)(param_1 + 0x480);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
    func_004D8AEC((float *)(iVar1 + 0x80),*(uint *)(param_1 + 1000),&local_20);
    func_004CEAF0(*(int *)(param_1 + 0x480));
  }
  iVar1 = *(int *)(param_1 + 0x484);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
    func_004D8AEC((float *)(iVar1 + 0x80),*(uint *)(param_1 + 1000),&local_20);
    func_004CEAF0(*(int *)(param_1 + 0x484));
  }
  iVar1 = *(int *)(param_1 + 0x48c);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
    func_004D8AEC((float *)(iVar1 + 0x80),*(uint *)(param_1 + 1000),&local_20);
    func_004CEAF0(*(int *)(param_1 + 0x48c));
  }
  fVar4 = DAT_00194d74;
  piVar2 = *(int **)(param_1 + 0x4bc);
  local_1c = local_1c + DAT_00194d74;
  piVar2[1] = (int)ALBW_AS_U32(local_20);
  piVar2[2] = (int)ALBW_AS_U32(local_1c);
  piVar2[3] = local_18;
  func_004356B4(piVar2);
  local_20 = *(float *)(param_1 + 0x3d0);
  local_1c = *(float *)(param_1 + 0x3d4);
  local_18 = *(int *)(param_1 + 0x3d8);
  iVar1 = func_00520FC0();
  fVar3 = *(float *)(iVar1 + 4);
  piVar2 = *(int **)(param_1 + 0x40c);
  local_1c = fVar3 + fVar4;
  piVar2[1] = (int)ALBW_AS_U32(local_20);
  piVar2[2] = (int)ALBW_AS_U32(local_1c);
  piVar2[3] = local_18;
  func_004356B4(piVar2);
  *(float *)(param_1 + 0x4c4) = fVar3;
  return;
}


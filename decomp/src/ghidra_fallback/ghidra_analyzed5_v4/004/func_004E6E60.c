#include "ghidra_types.h"

extern int func_001512B4(int param_1,float *param_2);
extern int func_004356B4(int *param_1);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern float DAT_004e6f4c;

// USA 004E6E60 <- EU 004E6E38 (Ghidra, non-matching)
// GLOBAL DAT_004e6f4c float

undefined4 func_004E6E60(int param_1)

{
  int iVar1;
  int *piVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define local_1c (*(float *)(albw_frame + 0x4))
  #define local_18 (*(float *)(albw_frame + 0x8))
  if (*(short *)(param_1 + 0x2e) != 3) {
    local_20 = *(float *)(param_1 + 0x3d0);
    local_1c = *(float *)(param_1 + 0x3d4) + *(float *)(param_1 + 0x540) + DAT_004e6f4c;
    local_18 = *(float *)(param_1 + 0x3d8) + *(float *)(param_1 + 0x544);
    iVar1 = *(int *)(param_1 + 0x4d4);
    *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
    func_004D8AEC((float *)(iVar1 + 0x80),*(uint *)(param_1 + 0x510),&local_20);
    func_004CEAF0(*(int *)(param_1 + 0x4d4));
    func_001512B4(*(int *)(param_1 + 0x4e0),&local_20);
    piVar2 = *(int **)(param_1 + 0x4dc);
    local_20 = *(float *)(param_1 + 0x3d0);
    local_18 = *(float *)(param_1 + 0x3d8);
    local_1c = *(float *)(param_1 + 0x3d4) + *(float *)(param_1 + 0x524);
    piVar2[1] = (int)ALBW_AS_U32(local_20);
    piVar2[2] = (int)ALBW_AS_U32(local_1c);
    piVar2[3] = (int)ALBW_AS_U32(local_18);
    return func_004356B4(piVar2);
  }
  iVar1 = *(int *)(param_1 + 0x4d4);
  *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar1 + 0x80),*(uint *)(param_1 + 0x510),(float *)(param_1 + 0x3d0));
  func_004CEAF0(*(int *)(param_1 + 0x4d4));
  return func_001512B4(*(int *)(param_1 + 0x4e0),(float *)(param_1 + 0x3d0));
}


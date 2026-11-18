#include "ghidra_types.h"

extern int func_001512E8(int *param_1);
extern int func_004356B4(int *param_1);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern float DAT_001c3324;
extern float DAT_001c3328;

// USA 001C3230 <- EU 001C3230 (Ghidra, non-matching)
// GLOBAL DAT_001c3324 float
// GLOBAL DAT_001c3328 float

undefined4 func_001C3230(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define local_1c (*(float *)(albw_frame + 0x4))
  #define local_18 (*(float *)(albw_frame + 0x8))
  local_20 = *(float *)(param_1 + 0x3d0);
  local_1c = *(float *)(param_1 + 0x3d4);
  local_18 = *(float *)(param_1 + 0x3d8);
  iVar3 = 0;
  do {
    iVar4 = param_1 + iVar3 * 4;
    iVar1 = *(int *)(iVar4 + 0x7b0);
    *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
    func_004D8AEC((float *)(iVar1 + 0x80),*(uint *)(param_1 + 1000),&local_20);
    func_004CEAF0(*(int *)(iVar4 + 0x7b0));
    iVar3 = iVar3 + 1;
  } while (iVar3 < 2);
  piVar2 = *(int **)(param_1 + 0x40c);
  local_1c = local_1c + *(float *)(param_1 + 0x7e4);
  local_18 = local_18 - *(float *)(param_1 + 0x7e8);
  piVar2[1] = (int)ALBW_AS_U32(local_20);
  piVar2[2] = (int)ALBW_AS_U32(local_1c);
  piVar2[3] = (int)ALBW_AS_U32(local_18);
  func_004356B4(piVar2);
  iVar3 = *(int *)(param_1 + 0x7b8);
  fVar6 = *(float *)(param_1 + 0x3d4) + DAT_001c3324;
  fVar5 = *(float *)(param_1 + 0x3d8) - DAT_001c3328;
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + 0x3d0);
  *(float *)(iVar3 + 8) = fVar6;
  *(float *)(iVar3 + 0xc) = fVar5;
  func_004356B4(*(int **)(param_1 + 0x7b8));
  return func_001512E8(*(int **)(param_1 + 0x7c0));
}


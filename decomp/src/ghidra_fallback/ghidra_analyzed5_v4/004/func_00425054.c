#include "ghidra_types.h"

extern int func_00231598(int param_1);
extern int func_003FFE6C(int param_1,undefined4 *param_2);
extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern float DAT_00425170;
extern undefined4 DAT_00425174;
extern undefined4 DAT_00425178;
extern undefined DAT_0042517c;
extern int DAT_00425198;
extern char s__SE_S_ITEM_SLIDER_MOVE_0042517f[];
extern undefined4 _DAT_0042517c;

// USA 00425054 <- EU 00425034 (Ghidra, non-matching)
// GLOBAL DAT_00425170 float
// GLOBAL DAT_00425174 undefined4
// GLOBAL DAT_00425178 undefined4
// GLOBAL DAT_0042517c undefined
// GLOBAL DAT_00425198 int

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void func_00425054(int param_1)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x4))
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_10 (*(int *)(albw_frame + 0x10))
  #define local_c (*(char * *)(albw_frame + 0x14))
  fVar4 = DAT_00425170;
  fVar2 = *(float *)(param_1 + 0x70) + *(float *)(param_1 + 0x74);
  fVar6 = (*(float *)(param_1 + 0x54) + *(float *)(param_1 + 0x68)) - DAT_00425170;
  *(float *)(param_1 + 0x70) = fVar2;
  uVar3 = DAT_00425174;
  if ((fVar2 <= fVar6) ||
     (uVar3 = DAT_00425178, *(float *)(param_1 + 100) + *(float *)(param_1 + 0x68) + fVar4 <= fVar2)
     ) {
    *(undefined4 *)(param_1 + 0x74) = uVar3;
  }
  iVar1 = *(int *)(**(int **)(param_1 + 0x1c) + 0x10);
  local_18 = *(undefined4 *)(iVar1 + 0x24);
  uStack_1c = *(undefined4 *)(iVar1 + 0x20);
  fVar4 = *(float *)(param_1 + 0x70) - *(float *)(param_1 + 0x68);
  local_20 = *(float *)(param_1 + 0x54);
  if ((local_20 <= fVar4) && (local_20 = fVar4, *(float *)(param_1 + 100) < fVar4)) {
    local_20 = *(float *)(param_1 + 100);
  }
  func_003FFE6C(*(int *)(**(int **)(param_1 + 0x1c) + 0x10),&local_20);
  fVar4 = ALBW_AS_F32(_DAT_0042517c);
  *(byte *)(*(int *)(param_1 + 0x1c) + 0x70) = *(byte *)(*(int *)(param_1 + 0x1c) + 0x70) | 2;
  uVar5 = (uint)(((local_20 - *(float *)(param_1 + 0x54)) + *(float *)(param_1 + 0x6c) * fVar4) /
                *(float *)(param_1 + 0x6c));
  if (*(byte *)(param_1 + 0x78) != uVar5) {
    *(char *)(param_1 + 0x78) = (char)uVar5;
    func_00231598(*(int *)(param_1 + 0x44));
    local_c = s__SE_S_ITEM_SLIDER_MOVE_0042517f + 1;
    local_10 = DAT_00425198;
    func_00533078(param_1,&local_10,0);
  }
  return;
}


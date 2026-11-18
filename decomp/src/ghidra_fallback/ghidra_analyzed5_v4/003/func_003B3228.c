#include "ghidra_types.h"

extern int func_002B91C0(int param_1,float *param_2);
extern int func_003ABB24(int *param_1,uint param_2,int param_3);
extern int func_003B147C(int *param_1,undefined4 param_2,undefined4 param_3);
extern float DAT_003b3320;
extern float DAT_003b3324;
extern float DAT_003b3328;
extern float DAT_003b332c;
extern undefined4 DAT_003b3330;

// USA 003B3228 <- EU 003B3204 (Ghidra, non-matching)
// GLOBAL DAT_003b3320 float
// GLOBAL DAT_003b3324 float
// GLOBAL DAT_003b3328 float
// GLOBAL DAT_003b332c float
// GLOBAL DAT_003b3330 undefined4

void func_003B3228(int param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define local_1c (*(float *)(albw_frame + 0x4))
  #define local_18 (*(float *)(albw_frame + 0x8))
  fVar1 = DAT_003b332c;
  fVar4 = DAT_003b3328;
  fVar5 = DAT_003b3324;
  *(undefined2 *)(*(int *)(param_1 + 0x48) + 0xaf4) = 2;
  local_20 = DAT_003b3320;
  iVar2 = *(int *)(param_1 + 0x48);
  fVar4 = (fVar1 * ((*(float *)(iVar2 + 0x3d4) - *(float *)(param_1 + 0x90)) - DAT_003b3320)) /
          fVar4 + fVar5;
  if ((int)ALBW_AS_U32(fVar4) < 0x3f800000) {
    fVar4 = fVar5;
  }
  *(float *)(iVar2 + 0x4e4) = fVar4;
  *(float *)(iVar2 + 0x4e8) = fVar4;
  *(float *)(iVar2 + 0x4ec) = fVar4;
  local_1c = local_20;
  local_18 = local_20;
  func_002B91C0(*(int *)(param_1 + 0x48),&local_20);
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x900) = DAT_003b3330;
  if ((5 < *(int *)(param_1 + 0x6c)) && (*(char *)(*(int *)(param_1 + 0x48) + 0xb34) != '\0')) {
    *(float *)(*(int *)(param_1 + 0x48) + 0x900) = fVar5;
    iVar2 = *(int *)(param_1 + 0x48);
    *(float *)(iVar2 + 0x4e4) = fVar5;
    *(float *)(iVar2 + 0x4e8) = fVar5;
    *(float *)(iVar2 + 0x4ec) = fVar5;
    piVar3 = *(int **)(*(int *)(param_1 + 0x48) + 0x93c);
    iVar2 = func_003ABB24(piVar3,1,1);
    if (iVar2 != 0) {
      func_003B147C((int *)piVar3[1],1,1);
    }
  }
  return;
}


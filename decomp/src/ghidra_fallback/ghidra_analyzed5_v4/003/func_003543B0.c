#include "ghidra_types.h"

extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_001512B4(int param_1,float *param_2);
extern int func_00151328(int param_1);
extern int func_004FD038(int param_1,undefined1 param_2);
extern int func_00666318(undefined4 *param_1,undefined1 param_2);
extern float DAT_00354510;
extern float DAT_00354514;
extern float DAT_00354518;
extern float DAT_0035451c;
extern float DAT_00354520;
extern float DAT_00354524;
extern float DAT_00354528;
extern float DAT_0035452c;
extern float DAT_00354530;

// USA 003543B0 <- EU 0035438C (Ghidra, non-matching)
// GLOBAL DAT_00354510 float
// GLOBAL DAT_00354514 float
// GLOBAL DAT_00354518 float
// GLOBAL DAT_0035451c float
// GLOBAL DAT_00354520 float
// GLOBAL DAT_00354524 float
// GLOBAL DAT_00354528 float
// GLOBAL DAT_0035452c float
// GLOBAL DAT_00354530 float

void func_003543B0(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define local_2c (*(float *)(albw_frame + 0x4))
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x10))
  fVar3 = DAT_00354518;
  fVar2 = *(float *)(param_1 + 0x3e0) + DAT_00354510;
  if (DAT_00354514 < fVar2) {
    fVar2 = DAT_00354514;
  }
  *(float *)(param_1 + 0x3e0) = fVar2;
  *(float *)(param_1 + 0xa90) = *(float *)(param_1 + 0x3d4);
  fVar2 = *(float *)(param_1 + 0x3d4) - *(float *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_1 + 0xa8c);
  *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_1 + 0xa94);
  if (fVar3 < fVar2) {
    fVar2 = fVar3;
  }
  fVar2 = fVar2 * DAT_0035451c;
  fVar3 = DAT_00354524;
  fVar5 = DAT_00354520;
  if (*(int *)(param_1 + 0xa88) != 0) {
    local_28 = *(float *)(param_1 + 0xa8c);
    uStack_24 = *(undefined4 *)(param_1 + 0xa90);
    uStack_20 = *(undefined4 *)(param_1 + 0xa94);
    func_001512B4(*(int *)(param_1 + 0xa88),&local_28);
    pfVar1 = (float *)func_00151328(*(int *)(param_1 + 0xa88));
    func_00115154(&local_30,&local_2c,*(uint *)(param_1 + 1000));
    pfVar1[4] = fVar5;
    pfVar1[7] = fVar3;
    pfVar1[3] = fVar3;
    pfVar1[5] = fVar3;
    pfVar1[1] = fVar3;
    *pfVar1 = local_2c;
    pfVar1[2] = local_30;
    pfVar1[6] = -local_30;
    pfVar1[8] = local_2c;
  }
  fVar4 = fVar5;
  if ((DAT_00354528 < fVar2) && (fVar4 = fVar3, fVar2 < fVar5)) {
    fVar4 = (DAT_00354530 * (fVar2 - DAT_00354528)) / DAT_0035452c + fVar5;
  }
  *(float *)(*(int *)(param_1 + 0x40c) + 0x158) = fVar4;
  if (0x3f7fffff < (int)ALBW_AS_U32(fVar2)) {
    *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 4;
    func_004FD038(param_1 + 0x5a8,1);
    func_00666318((undefined4 *)(param_1 + 0xa5c),0);
  }
  return;
}


#include "ghidra_types.h"

extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_001512B4(int param_1,float *param_2);
extern int func_00151328(int param_1);
extern float DAT_00355ce0;
extern float DAT_00355ce4;

// USA 00355C50 <- EU 00355C2C (Ghidra, non-matching)
// GLOBAL DAT_00355ce0 float
// GLOBAL DAT_00355ce4 float

void func_00355C50(int param_1)

{
  float fVar1;
  float *pfVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define local_1c (*(float *)(albw_frame + 0x4))
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  *(undefined4 *)(param_1 + 0xa8c) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(param_1 + 0xa90) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(param_1 + 0xa94) = *(undefined4 *)(param_1 + 0x3d8);
  if (*(int *)(param_1 + 0xa88) != 0) {
    local_18 = *(float *)(param_1 + 0xa8c);
    uStack_14 = *(undefined4 *)(param_1 + 0xa90);
    uStack_10 = *(undefined4 *)(param_1 + 0xa94);
    func_001512B4(*(int *)(param_1 + 0xa88),&local_18);
    pfVar2 = (float *)func_00151328(*(int *)(param_1 + 0xa88));
    func_00115154(&local_20,&local_1c,*(uint *)(param_1 + 1000));
    fVar1 = DAT_00355ce4;
    pfVar2[4] = DAT_00355ce0;
    pfVar2[7] = fVar1;
    pfVar2[3] = fVar1;
    pfVar2[5] = fVar1;
    pfVar2[1] = fVar1;
    *pfVar2 = local_1c;
    pfVar2[2] = local_20;
    pfVar2[6] = -local_20;
    pfVar2[8] = local_1c;
  }
  return;
}


#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0014EEC8(int param_1,uint param_2,undefined4 *param_3,undefined4 param_4,float fparam_0);
extern int func_0014FA44(int param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5, undefined4 param_6,int param_7);
extern int func_004356B4(int *param_1);
extern int func_0054D884(int param_1,uint param_2);
extern int func_006824D4(int *param_1,float *param_2,undefined4 *param_3,float *param_4);
extern float DAT_0033f7f0;
extern float DAT_0033f7f4;
extern float *DAT_0033f7f8;
extern float *DAT_0033f7fc;
extern float DAT_0033f800;
extern float DAT_0033f804;
extern undefined4 DAT_0033f808;

// USA 0033F55C <- EU 0033F538 (Ghidra, non-matching)
// GLOBAL DAT_0033f7f0 float
// GLOBAL DAT_0033f7f4 float
// GLOBAL DAT_0033f7f8 float *
// GLOBAL DAT_0033f7fc float *
// GLOBAL DAT_0033f800 float
// GLOBAL DAT_0033f804 float
// GLOBAL DAT_0033f808 undefined4

void func_0033F55C(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_2c (*(float *)(albw_frame + 0x4))
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  #define local_1c (*(float *)(albw_frame + 0x14))
  #define local_18 (*(float *)(albw_frame + 0x18))
  #define local_14 (*(float *)(albw_frame + 0x1c))
  #define local_10 (*(float *)(albw_frame + 0x20))
  #define local_c (*(float *)(albw_frame + 0x24))
  fVar3 = DAT_0033f7f4;
  fVar2 = DAT_0033f7f0;
  *(undefined4 *)(param_1 + 0x480) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(param_1 + 0x484) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(param_1 + 0x488) = *(undefined4 *)(param_1 + 0x3d8);
  fVar2 = *(float *)(param_1 + 0x3e0) - fVar2;
  if (fVar2 < fVar3) {
    fVar2 = fVar3;
  }
  *(float *)(param_1 + 0x3e0) = fVar2;
  func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3dc));
  if (*(int *)(param_1 + 0x418) != 0) {
    local_20 = *DAT_0033f7f8;
    local_1c = DAT_0033f7f8[1];
    local_18 = DAT_0033f7f8[2];
    local_14 = DAT_0033f7f8[3];
    local_10 = DAT_0033f7f8[4];
    local_c = DAT_0033f7f8[5];
    local_2c = *DAT_0033f7fc;
    local_28 = DAT_0033f7fc[1];
    local_24 = DAT_0033f7fc[2];
    iVar1 = func_0054D884(*(int *)(param_1 + 0x2d0) + 0x18,0);
    func_006824D4(*(int **)(param_1 + 0x418),(float *)(iVar1 + 4),
                  (undefined4 *)(*(int *)(param_1 + 0x40c) + 0x80),(float *)(param_1 + 0x3d0));
    if (*(int *)(param_1 + 0x424) != 0) {
      iVar1 = *(int *)(param_1 + 0x420);
      fVar2 = *(float *)(param_1 + 0x3d4) - DAT_0033f800;
      uVar4 = *(undefined4 *)(param_1 + 0x3d8);
      *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_1 + 0x3d0);
      *(float *)(iVar1 + 8) = fVar2;
      *(undefined4 *)(iVar1 + 0xc) = uVar4;
      func_004356B4(*(int **)(param_1 + 0x420));
    }
    if (*(char *)(*(int *)(param_1 + 0x414) + 0x61) != '\0') {
      iVar1 = func_0014FA44(param_1,(int)&local_2c,*(undefined4 *)(param_1 + 0x418),0,0x22,0,0);
      fVar2 = local_c;
      if (iVar1 != 0) {
        if (local_2c < local_20) {
          local_20 = local_2c;
        }
        if (DAT_0033f804 < local_1c) {
          local_1c = DAT_0033f804;
        }
        if (local_24 < local_18) {
          local_18 = local_24;
        }
        if (local_2c < local_14) {
          local_2c = local_14;
        }
        if (local_10 <= DAT_0033f804) {
          local_10 = DAT_0033f804;
        }
        local_14 = local_2c;
        fVar2 = local_24;
        if (local_24 < local_c) {
          fVar2 = local_c;
        }
      }
      local_c = fVar2;
      local_2c = DAT_0033f804;
      local_28 = DAT_0033f804;
      local_24 = DAT_0033f804;
      iVar1 = func_0014EEC8(param_1,(uint)&local_2c,(undefined4 *)(param_1 + 0x428),DAT_0033f808,
                            *(float *)(param_1 + 0x434));
      fVar2 = local_c;
      if (iVar1 != 0) {
        if (local_2c < local_20) {
          local_20 = local_2c;
        }
        if (local_28 < local_1c) {
          local_1c = local_28;
        }
        if (local_24 < local_18) {
          local_18 = local_24;
        }
        fVar2 = local_2c;
        if (local_2c < local_14) {
          fVar2 = local_14;
        }
        fVar3 = local_28;
        if (local_28 < local_10) {
          fVar3 = local_10;
        }
        local_14 = fVar2;
        local_10 = fVar3;
        fVar2 = local_24;
        if (local_24 < local_c) {
          fVar2 = local_c;
        }
      }
      local_c = fVar2;
      func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),&local_20);
      func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),&local_14);
    }
    iVar1 = func_0054D884(*(int *)(param_1 + 0x2d0) + 0x18,0);
    func_006824D4(*(int **)(param_1 + 0x418),(float *)(iVar1 + 4),
                  (undefined4 *)(*(int *)(param_1 + 0x40c) + 0x80),(float *)(param_1 + 0x3d0));
  }
  return;
}


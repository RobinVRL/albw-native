#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_0014EB3C(int param_1);
extern int func_002159EC(int param_1,undefined4 param_2,undefined4 param_3,uint param_4);
extern int func_00215B90(int param_1,float fparam_0);
extern float func_0058AC38(int param_1);
extern float DAT_00214b38;
extern float DAT_00214b3c;
extern float DAT_00214b40;
extern float DAT_00214b44;

// USA 00214A64 <- EU 00214A64 (Ghidra, non-matching)
// GLOBAL DAT_00214b38 float
// GLOBAL DAT_00214b3c float
// GLOBAL DAT_00214b40 float
// GLOBAL DAT_00214b44 float

void func_00214A64(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  float *pfVar1;
  float fVar2;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x14))
  if (*(char *)(param_1 + 0x8c1) == '\v') {
    func_002159EC(param_1,param_2,param_3,param_4);
  }
  if (*(char *)(param_1 + 0x8c1) != '\a') {
    func_00215B90(param_1,DAT_00214b38);
    func_0014EB3C(param_1);
    fparam_0 = DAT_00214b3c;
    pfVar1 = (float *)(param_1 + 0xb40);
    *pfVar1 = *(float *)(param_1 + 0x3d0);
    *(undefined4 *)(param_1 + 0xb44) = *(undefined4 *)(param_1 + 0x3d4);
    *(undefined4 *)(param_1 + 0xb48) = *(undefined4 *)(param_1 + 0x3d8);
    func_00115D70(&local_24,(float *)(param_1 + 0x374),fparam_0);
    local_30 = local_24;
    uStack_2c = uStack_20;
    uStack_28 = uStack_1c;
    func_00115C54(pfVar1,pfVar1,&local_30);
    fVar2 = func_0058AC38(param_1);
    fVar2 = DAT_00214b44 / (fVar2 * DAT_00214b40);
    *(float *)(param_1 + 0xa44) = -(fVar2 * fVar2 * fparam_0);
    *(float *)(param_1 + 0xa48) = fparam_0 * fVar2 * fparam_0;
  }
  return;
}


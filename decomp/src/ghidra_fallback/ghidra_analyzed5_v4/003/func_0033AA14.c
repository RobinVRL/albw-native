#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_0033abe0;
extern float DAT_0033abe4;
extern float DAT_0033abe8;
extern float DAT_0033abec;
extern float DAT_0033abf0;
extern float DAT_0033abf4;
extern float DAT_0033abf8;

// USA 0033AA14 <- EU 0033A9F0 (Ghidra, non-matching)
// GLOBAL DAT_0033abe0 int *
// GLOBAL DAT_0033abe4 float
// GLOBAL DAT_0033abe8 float
// GLOBAL DAT_0033abec float
// GLOBAL DAT_0033abf0 float
// GLOBAL DAT_0033abf4 float
// GLOBAL DAT_0033abf8 float

void func_0033AA14(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 (*(float *)(albw_frame + 0x8))
  #define local_54 (*(float *)(albw_frame + 0xc))
  #define local_50 (*(float *)(albw_frame + 0x10))
  #define local_40 (*(float *)(albw_frame + 0x20))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x24))
  #define local_38 (*(undefined4 *)(albw_frame + 0x28))
  #define local_34 (*(float *)(albw_frame + 0x2c))
  #define local_30 (*(float *)(albw_frame + 0x30))
  #define fStack_2c (*(float *)(albw_frame + 0x34))
  #define local_28 (*(float *)(albw_frame + 0x38))
  #define fStack_24 (*(float *)(albw_frame + 0x3c))
  #define fStack_20 (*(float *)(albw_frame + 0x40))
  iVar1 = func_0052FBA0(*DAT_0033abe0 + 0x3dbbc,*(uint *)(param_1 + 0x478));
  if (iVar1 != 0) {
    local_38 = *(undefined4 *)(iVar1 + 0x3d8);
    local_40 = *(float *)(iVar1 + 0x3d0);
    uStack_3c = *(undefined4 *)(iVar1 + 0x3d4);
    func_00115C70(&local_34,&local_40,(float *)(param_1 + 0x3d0));
    fVar5 = SQRT(local_34 * local_34 + local_30 * local_30 + fStack_2c * fStack_2c) - DAT_0033abe4;
    fVar3 = DAT_0033abe4;
    func_00115DC8(&local_34);
    local_28 = local_34;
    fStack_24 = local_30;
    fStack_20 = fStack_2c;
    fVar4 = DAT_0033abe8;
    func_00115D70(&local_28,&local_28,fVar5 * DAT_0033abe8);
    func_00115C54((float *)(param_1 + 0x3dc),(float *)(param_1 + 0x3dc),&local_28);
    fVar5 = DAT_0033abf0;
    *(float *)(param_1 + 0x3e0) = *(float *)(param_1 + 0x3e0) - DAT_0033abec;
    func_00115D70((float *)(param_1 + 0x3dc),(float *)(param_1 + 0x3dc),fVar5);
    func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3dc));
    if (*(float *)(param_1 + 0x3d4) < *(float *)(param_1 + 0xc)) {
      *(float *)(param_1 + 0x3d4) = *(float *)(param_1 + 0xc);
    }
    fVar2 = *(float *)(param_1 + 0x448);
    *(float *)(param_1 + 0x448) = fVar2 + (fVar3 - fVar2) * fVar4;
    func_00115C70(&local_58,(float *)(param_1 + 0x3d0),&local_40);
    fVar5 = *(float *)(param_1 + 0x448) * fVar5;
    fVar3 = *(float *)(param_1 + 0x448) * DAT_0033abf4;
    fVar4 = local_58 * local_58 + local_54 * local_54 + local_50 * local_50;
    if (fVar4 <= fVar3 * fVar3) {
      if (fVar5 * fVar5 <= fVar4) {
        return;
      }
      if (DAT_0033abf8 < SQRT(fVar4)) {
        fVar5 = fVar5 / SQRT(fVar4);
        local_58 = local_58 * fVar5;
        local_54 = local_54 * fVar5;
        local_50 = local_50 * fVar5;
      }
    }
    else if (DAT_0033abf8 < SQRT(fVar4)) {
      fVar3 = fVar3 / SQRT(fVar4);
      local_58 = local_58 * fVar3;
      local_54 = local_54 * fVar3;
      local_50 = local_50 * fVar3;
    }
    func_00115C54((float *)(param_1 + 0x3d0),&local_40,&local_58);
  }
  return;
}


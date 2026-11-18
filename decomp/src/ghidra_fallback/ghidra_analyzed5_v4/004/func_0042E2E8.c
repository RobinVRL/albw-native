#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115CE4(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float DAT_0042e49c;
extern float DAT_0042e4a0;
extern float DAT_0042e4a4;
extern float DAT_0042e4a8;

// USA 0042E2E8 <- EU 0042E2C8 (Ghidra, non-matching)
// GLOBAL DAT_0042e49c float
// GLOBAL DAT_0042e4a0 float
// GLOBAL DAT_0042e4a4 float
// GLOBAL DAT_0042e4a8 float

undefined4 func_0042E2E8(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_60 (*(float *)(albw_frame + 0x0))
  #define local_5c (*(float *)(albw_frame + 0x4))
  #define local_58 (*(float *)(albw_frame + 0x8))
  #define local_54 (*(float *)(albw_frame + 0xc))
  #define fStack_50 (*(float *)(albw_frame + 0x10))
  #define fStack_4c (*(float *)(albw_frame + 0x14))
  #define local_48 (*(float *)(albw_frame + 0x18))
  #define fStack_44 (*(float *)(albw_frame + 0x1c))
  #define local_40 (*(float *)(albw_frame + 0x20))
  #define local_3c (*(float *)(albw_frame + 0x24))
  #define local_38 (*(float *)(albw_frame + 0x28))
  #define local_34 (*(float *)(albw_frame + 0x2c))
  func_00115D70(&local_60,(float *)(param_1 + 0x58),DAT_0042e49c);
  fVar2 = *(float *)(param_2 + 0x58);
  fVar3 = *(float *)(param_2 + 0x5c);
  fVar4 = *(float *)(param_2 + 0x60);
  fVar5 = *(float *)(param_1 + 100) * fVar2 + *(float *)(param_1 + 0x70) * fVar3 +
          *(float *)(param_1 + 0x7c) * fVar4;
  fVar6 = *(float *)(param_1 + 0x68) * fVar2 + *(float *)(param_1 + 0x74) * fVar3 +
          *(float *)(param_1 + 0x80) * fVar4;
  fVar2 = *(float *)(param_1 + 0x6c) * fVar2 + *(float *)(param_1 + 0x78) * fVar3 +
          *(float *)(param_1 + 0x84) * fVar4;
  if (DAT_0042e4a0 < fVar5) {
    local_48 = -local_60;
  }
  else {
    local_48 = DAT_0042e4a8;
    if (fVar5 < DAT_0042e4a4) {
      local_48 = local_60;
    }
  }
  if (DAT_0042e4a0 < fVar6) {
    fStack_44 = -local_5c;
  }
  else {
    fStack_44 = DAT_0042e4a8;
    if (fVar6 < DAT_0042e4a4) {
      fStack_44 = local_5c;
    }
  }
  if (DAT_0042e4a0 < fVar2) {
    local_40 = -local_58;
  }
  else {
    local_40 = DAT_0042e4a8;
    if (fVar2 < DAT_0042e4a4) {
      local_40 = local_58;
    }
  }
  fVar4 = -(fVar5 * local_48 + fVar6 * fStack_44 + fVar2 * local_40);
  fVar3 = DAT_0042e4a8;
  func_00115D70(&local_3c,(float *)(param_2 + 0x58),*(float *)(param_2 + 100));
  local_54 = local_3c;
  fStack_50 = local_38;
  fStack_4c = local_34;
  func_00115C70(&local_3c,(float *)(param_1 + 4),&local_54);
  fVar4 = fVar4 - (fVar5 * (*(float *)(param_1 + 100) * local_3c +
                            *(float *)(param_1 + 0x70) * local_38 +
                           *(float *)(param_1 + 0x7c) * local_34) +
                   fVar6 * (*(float *)(param_1 + 0x68) * local_3c +
                            *(float *)(param_1 + 0x74) * local_38 +
                           *(float *)(param_1 + 0x80) * local_34) +
                  fVar2 * (*(float *)(param_1 + 0x6c) * local_3c +
                           *(float *)(param_1 + 0x78) * local_38 +
                          *(float *)(param_1 + 0x84) * local_34));
  if (fVar4 <= fVar3) {
    uVar1 = 0;
  }
  else {
    if (param_3 != 0) {
      *(float *)(param_3 + 0x1c) = fVar4;
      *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_2 + 0x58);
      *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_2 + 0x5c);
      *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(param_2 + 0x60);
      func_00115CE4((float *)(param_3 + 0x10),(float *)(param_1 + 100),&local_48);
      func_00115C54((float *)(param_3 + 0x10),(float *)(param_3 + 0x10),(float *)(param_1 + 4));
    }
    uVar1 = 1;
  }
  return uVar1;
}


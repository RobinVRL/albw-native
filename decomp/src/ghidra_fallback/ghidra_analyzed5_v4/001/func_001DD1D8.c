#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0028C920(int param_1,int param_2,undefined4 *param_3,float fparam_0,float fparam_1);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004D891C(float *param_1,float *param_2,float *param_3,float *param_4,float fparam_0, float fparam_1,float fparam_2,float fparam_3,float fparam_4,float fparam_5, float fparam_6,float fparam_7,float fparam_8,float fparam_9,float fparam_10);
extern int func_0053ECB4(int param_1);
extern float DAT_001dd31c;
extern float DAT_001dd320;
extern undefined4 DAT_001dd324;
extern float DAT_001dd328;
extern float DAT_001dd32c;
extern float DAT_001dd330;

// USA 001DD1D8 <- EU 001DD1D8 (Ghidra, non-matching)
// GLOBAL DAT_001dd31c float
// GLOBAL DAT_001dd320 float
// GLOBAL DAT_001dd324 undefined4
// GLOBAL DAT_001dd328 float
// GLOBAL DAT_001dd32c float
// GLOBAL DAT_001dd330 float

undefined4 func_001DD1D8(int param_1)

{
  int iVar1;
  float fVar2;
  float fparam_2;
  float in_s4;
  float in_s5;
  float in_s6;
  float in_s7;
  float in_s8;
  float in_s9;
  float in_s10;
  float fparam_1;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_5c (*(float *)(albw_frame + 0x4))
  #define local_58 (*(float *)(albw_frame + 0x8))
  #define local_54 (*(float *)(albw_frame + 0xc))
  #define local_50 (*(float *)(albw_frame + 0x10))
  #define fStack_4c (*(float *)(albw_frame + 0x14))
  #define fStack_48 (*(float *)(albw_frame + 0x18))
  #define local_44 (*(float *)(albw_frame + 0x1c))
  #define local_40 (*(float *)(albw_frame + 0x20))
  #define local_3c (*(undefined4 *)(albw_frame + 0x24))
  #define fStack_38 (*(float *)(albw_frame + 0x28))
  #define local_34 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_2c (*(float *)(albw_frame + 0x34))
  #define local_28 (*(float *)(albw_frame + 0x38))
  #define local_24 (*(float *)(albw_frame + 0x3c))
  #define afStack_20 ((float *)(albw_frame + 0x40))
  if (*(char *)(param_1 + 0x6bf) != '\0') {
    local_50 = *(float *)(param_1 + 0x70c);
    fStack_4c = *(float *)(param_1 + 0x710);
    fStack_48 = *(float *)(param_1 + 0x714);
    fparam_1 = DAT_001dd31c;
    iVar1 = func_0053ECB4(*(int *)(param_1 + 0x600));
    local_44 = *(float *)(iVar1 + 0xc);
    local_40 = *(float *)(iVar1 + 0x1c);
    local_3c = *(undefined4 *)(iVar1 + 0x2c);
    fVar2 = *(float *)(param_1 + 0x710);
    if (*(float *)(param_1 + 0x710) <= local_40 + DAT_001dd320) {
      fVar2 = local_40 + DAT_001dd320;
    }
    *(float *)(param_1 + 0x710) = fVar2;
    func_00115C70(&local_2c,&local_50,&local_44);
    local_5c = local_2c;
    local_58 = local_28;
    local_54 = local_24;
    fparam_2 = local_2c * local_2c + local_28 * local_28 + local_24 * local_24;
    fVar2 = local_28;
    func_004D80A4(&fStack_38,*(uint *)(param_1 + 1000),SQRT(fparam_2));
    local_34 = DAT_001dd324;
    func_004D891C(afStack_20,&fStack_38,&local_5c,(float *)0x0,DAT_001dd32c,DAT_001dd328,fparam_2,
                  fVar2,in_s4,in_s5,in_s6,in_s7,in_s8,in_s9,in_s10);
    func_00115C54(&local_2c,afStack_20,&local_44);
    local_50 = local_2c;
    fStack_4c = local_28;
    fStack_48 = local_24;
    return func_0028C920(*(int *)(param_1 + 0x600),1,&local_50,*(float *)(param_1 + 0x718),fparam_1);
  }
  return func_0028C920(*(int *)(param_1 + 0x600),0,(undefined4 *)(param_1 + 0x3d0),DAT_001dd330,
                DAT_001dd31c);
}


#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_00151150(int param_1,float *param_2);
extern int func_001512E8(int *param_1);
extern int func_0015133C(int param_1,undefined4 *param_2);
extern int func_004D8A88(float *param_1,uint param_2);
extern int func_006674F4(undefined4 *param_1,undefined1 param_2);
extern float DAT_00375df0;
extern float DAT_00375df4;
extern float DAT_00375df8;
extern float DAT_00375dfc;
extern float DAT_00375e00;
extern float DAT_00375e04;
extern int DAT_00375e08;
extern float DAT_00375e0c;
extern int *DAT_00375e10;
extern float *DAT_00375e14;

// USA 00375C40 <- EU 00375C1C (Ghidra, non-matching)
// GLOBAL DAT_00375df0 float
// GLOBAL DAT_00375df4 float
// GLOBAL DAT_00375df8 float
// GLOBAL DAT_00375dfc float
// GLOBAL DAT_00375e00 float
// GLOBAL DAT_00375e04 float
// GLOBAL DAT_00375e08 int
// GLOBAL DAT_00375e0c float
// GLOBAL DAT_00375e10 int *
// GLOBAL DAT_00375e14 float *

undefined4 func_00375C40(int param_1)

{
  int iVar1;
  float *pfVar2;
  uint uVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_70 (*(float *)(albw_frame + 0x0))
  #define local_6c (*(float *)(albw_frame + 0x4))
  #define uStack_68 (*(undefined4 *)(albw_frame + 0x8))
  #define fStack_64 (*(float *)(albw_frame + 0xc))
  #define local_60 (*(float *)(albw_frame + 0x10))
  #define uStack_5c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_58 (*(undefined4 *)(albw_frame + 0x18))
  #define local_54 (*(float *)(albw_frame + 0x1c))
  #define uStack_50 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x24))
  #define local_40 (*(float *)(albw_frame + 0x30))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x34))
  #define local_38 (*(undefined4 *)(albw_frame + 0x38))
  #define local_34 (*(float *)(albw_frame + 0x3c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x40))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x44))
  local_70 = *(float *)(param_1 + 0x3d0);
  local_6c = *(float *)(param_1 + 0x3d4);
  uStack_68 = *(undefined4 *)(param_1 + 0x3d8);
  uVar3 = *(uint *)(param_1 + 0x40c);
  if (uVar3 < 0x3c) {
    fVar4 = (float)VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
    fVar5 = *(float *)(param_1 + 0x438) +
            (*(float *)(param_1 + 0xc) - *(float *)(param_1 + 0x438)) * fVar4 * DAT_00375df0;
    uVar6 = func_00114608((uint)ALBW_AS_U32(((DAT_00375df8 + DAT_00375df4 * fVar4 * DAT_00375df0) * DAT_00375dfc
                                )),(uint)ALBW_AS_U32(local_6c));
    iVar1 = 0x3c - uVar3;
    if (iVar1 < 2) {
      iVar1 = 1;
    }
    local_40 = *(float *)(param_1 + 8);
    uStack_3c = *(undefined4 *)(param_1 + 0xc);
    local_38 = *(undefined4 *)(param_1 + 0x10);
    fVar4 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
    fVar4 = DAT_00375e00 / fVar4;
    func_00115C70(&local_34,&local_40,&local_70);
    local_54 = local_34;
    uStack_50 = uStack_30;
    uStack_4c = uStack_2c;
    func_00115D70(&local_34,&local_54,fVar4);
    local_60 = local_34;
    uStack_5c = uStack_30;
    uStack_58 = uStack_2c;
    func_00115C54(&local_70,&local_70,&local_60);
    pfVar2 = (float *)(DAT_00375e08 + ((uint)uVar6 >> 0x18) * 0x10);
    fVar4 = (float)VectorUnsignedToFloat((uint)uVar6 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
    local_6c = fVar5 + (*pfVar2 + pfVar2[1] * fVar4 * DAT_00375e04) * DAT_00375e0c;
    func_00115C70((float *)(param_1 + 0x3dc),&local_70,(float *)(param_1 + 0x3d0));
  }
  else if (uVar3 < 0x47) {
    func_00115C54(&local_70,&local_70,(float *)(param_1 + 0x3dc));
    func_006674F4((undefined4 *)(param_1 + 0x40c),2);
  }
  else {
    func_00115C54(&local_70,&local_70,(float *)(param_1 + 0x3dc));
  }
  *(float *)(param_1 + 0x368) = local_70;
  *(float *)(param_1 + 0x36c) = local_6c;
  *(undefined4 *)(param_1 + 0x370) = uStack_68;
  *(float *)(param_1 + 0x3d0) = local_70;
  *(float *)(param_1 + 0x3d4) = local_6c;
  *(undefined4 *)(param_1 + 0x3d8) = uStack_68;
  func_004D8A88(&fStack_64,*DAT_00375e10 + *(int *)(param_1 + 1000));
  func_0015133C(*(int *)(param_1 + 0x434),&fStack_64);
  func_00151150(*(int *)(param_1 + 0x434),DAT_00375e14);
  return func_001512E8(*(int **)(param_1 + 0x434));
}


#include "ghidra_types.h"

extern int func_004A8030(int param_1,int *param_2,uint param_3);
extern undefined4 *DAT_0058a670;
extern undefined4 DAT_0058a674;
extern float DAT_0058a678;
extern float DAT_0058a67c;
extern uint DAT_0058a680;
extern int *DAT_0058a684;

// USA 0058A4BC <- EU 0058A494 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:1 undefined1
// PARAM param_6 Stack[0x4]:4 undefined4
// PARAM param_7 Stack[0x8]:4 uint
// GLOBAL DAT_0058a670 undefined4 *
// GLOBAL DAT_0058a674 undefined4
// GLOBAL DAT_0058a678 float
// GLOBAL DAT_0058a67c float
// GLOBAL DAT_0058a680 uint
// GLOBAL DAT_0058a684 int *

undefined4
func_0058A4BC(undefined4 param_1,float *param_2,float *param_3,float *param_4,undefined1 param_5,
             undefined4 param_6,uint param_7)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_90 (*(int *)(albw_frame + 0x0))
  #define local_8c (*(undefined4 * *)(albw_frame + 0x4))
  #define local_88 (*(undefined4 *)(albw_frame + 0x8))
  #define local_84 (*(undefined4 *)(albw_frame + 0xc))
  #define local_80 (*(uint *)(albw_frame + 0x10))
  #define local_7c (*(undefined4 *)(albw_frame + 0x14))
  #define local_78 (*(undefined4 *)(albw_frame + 0x18))
  #define local_74 (*(float * *)(albw_frame + 0x1c))
  #define local_70 (*(float * *)(albw_frame + 0x20))
  #define local_6c (*(float *)(albw_frame + 0x24))
  #define local_68 (*(undefined1 *)(albw_frame + 0x28))
  #define local_67 (*(undefined1 *)(albw_frame + 0x29))
  #define local_60 (*(undefined4 *)(albw_frame + 0x30))
  #define local_5c (*(undefined4 * *)(albw_frame + 0x34))
  #define local_58 (*(undefined4 *)(albw_frame + 0x38))
  #define uStack_54 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_50 (*(undefined4 *)(albw_frame + 0x40))
  #define local_4c (*(float *)(albw_frame + 0x44))
  #define fStack_48 (*(float *)(albw_frame + 0x48))
  #define fStack_44 (*(float *)(albw_frame + 0x4c))
  #define local_40 (*(float *)(albw_frame + 0x50))
  #define local_3c (*(float *)(albw_frame + 0x54))
  #define local_38 (*(float *)(albw_frame + 0x58))
  #define local_34 (*(float *)(albw_frame + 0x5c))
  #define local_30 (*(float *)(albw_frame + 0x60))
  #define local_2c (*(float *)(albw_frame + 0x64))
  #define local_28 (*(float *)(albw_frame + 0x68))
  #define local_24 (*(char *)(albw_frame + 0x6c))
  #define local_23 (*(undefined1 *)(albw_frame + 0x6d))
  local_58 = *DAT_0058a670;
  uStack_54 = DAT_0058a670[1];
  local_5c = &local_60;
  local_60 = DAT_0058a674;
  local_50 = param_6;
  local_4c = *param_2;
  fStack_48 = param_2[1];
  fStack_44 = param_2[2];
  local_40 = *param_2;
  local_3c = param_2[1];
  local_38 = param_2[2];
  local_34 = DAT_0058a678;
  local_30 = DAT_0058a67c;
  local_2c = DAT_0058a678;
  local_24 = '\0';
  local_23 = param_5;
  local_28 = 0.0;
  local_80 = DAT_0058a680 | (uint)param_2 & 0xffff0000;
  local_90 = 0;
  local_88 = 0;
  local_84 = 0;
  local_78 = 0;
  local_6c = DAT_0058a678;
  local_68 = 0;
  local_67 = 1;
  local_7c = 0x7f;
  local_8c = &local_60;
  fVar4 = DAT_0058a67c;
  local_74 = param_3;
  local_70 = param_2;
  iVar2 = func_004A8030(*DAT_0058a684,&local_90,param_7);
  cVar1 = '\0';
  if (iVar2 != 0) {
    cVar1 = local_24;
  }
  if (iVar2 != 0 && cVar1 != '\0') {
    if (param_4 != (float *)0x0) {
      *param_4 = local_40;
      param_4[1] = local_3c;
      param_4[2] = local_38;
      param_4[3] = local_34;
      param_4[4] = local_30;
      param_4[5] = local_2c;
      param_4[6] = fVar4;
      param_4[7] = local_28;
      fVar4 = *param_2;
      if (((fVar4 != *param_3) || (param_2[1] != param_3[1])) || (param_2[2] != param_3[2])) {
        fVar5 = fVar4 - *param_3;
        local_3c = param_2[1] - local_3c;
        local_38 = param_2[2] - local_38;
        fVar7 = param_2[1] - param_3[1];
        fVar6 = param_2[2] - param_3[2];
        param_4[6] = SQRT((fVar4 - local_40) * (fVar4 - local_40) + local_3c * local_3c +
                          local_38 * local_38) / SQRT(fVar5 * fVar5 + fVar7 * fVar7 + fVar6 * fVar6)
        ;
      }
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


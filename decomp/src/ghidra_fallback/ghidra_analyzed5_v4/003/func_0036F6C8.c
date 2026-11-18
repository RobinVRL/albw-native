#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004A8030(int param_1,int *param_2,uint param_3);
extern float DAT_0036f83c;
extern uint DAT_0036f840;
extern int *DAT_0036f844;
extern float DAT_0036f848;
extern int DAT_0036f84c;

// USA 0036F6C8 <- EU 0036F6A4 (Ghidra, non-matching)
// GLOBAL DAT_0036f83c float
// GLOBAL DAT_0036f840 uint
// GLOBAL DAT_0036f844 int *
// GLOBAL DAT_0036f848 float
// GLOBAL DAT_0036f84c int

void func_0036F6C8(float *param_1,float *param_2,float *param_3)

{
  int iVar1;
  uint unaff_r6;
  float fVar2;
  float fVar3;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_80 (*(float *)(albw_frame + 0x0))
  #define local_7c (*(float *)(albw_frame + 0x4))
  #define local_78 (*(float *)(albw_frame + 0x8))
  #define local_74 (*(float * *)(albw_frame + 0xc))
  #define local_70 (*(undefined4 *)(albw_frame + 0x10))
  #define local_6c (*(undefined4 *)(albw_frame + 0x14))
  #define local_68 (*(undefined4 *)(albw_frame + 0x18))
  #define local_64 (*(uint *)(albw_frame + 0x1c))
  #define local_60 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_5c (*(undefined4 *)(albw_frame + 0x24))
  #define local_58 (*(float * *)(albw_frame + 0x28))
  #define local_54 (*(float * *)(albw_frame + 0x2c))
  #define local_50 (*(float *)(albw_frame + 0x30))
  #define local_4c (*(undefined1 *)(albw_frame + 0x34))
  #define local_4b (*(undefined1 *)(albw_frame + 0x35))
  #define fStack_3c (*(float *)(albw_frame + 0x44))
  #define local_38 (*(float *)(albw_frame + 0x48))
  #define local_30 (*(float *)(albw_frame + 0x50))
  #define fStack_2c (*(float *)(albw_frame + 0x54))
  #define fStack_28 (*(float *)(albw_frame + 0x58))
  #define afStack_24 ((float *)(albw_frame + 0x5c))
  if ((*param_2 - *param_3) * (*param_2 - *param_3) +
      (param_2[2] - param_3[2]) * (param_2[2] - param_3[2]) != DAT_0036f83c) {
    fVar3 = DAT_0036f83c;
    func_00115C70(&fStack_3c,param_3,param_2);
    local_64 = unaff_r6 & 0xffff0000 | DAT_0036f840;
    local_74 = (float *)0x0;
    local_70 = 0;
    local_6c = 0;
    local_68 = 0;
    local_60 = 0xff;
    uStack_5c = 0;
    local_58 = (float *)0x0;
    local_54 = (float *)0x0;
    local_4c = 0;
    local_4b = 1;
    local_50 = fVar3;
    local_38 = fVar3;
    func_00115C54(afStack_24,param_2,&fStack_3c);
    local_30 = *param_2;
    fStack_2c = param_2[1];
    fStack_28 = param_2[2];
    local_54 = afStack_24;
    local_60 = 0x19;
    local_70 = 0;
    local_74 = param_2;
    local_58 = param_2;
    iVar1 = func_004A8030(*DAT_0036f844,(int *)&local_74,3);
    if (iVar1 != 0) {
      func_00115C70(&local_80,param_2,&local_30);
      fVar2 = local_80 * local_80 + local_7c * local_7c + local_78 * local_78;
      if (DAT_0036f84c < (int)ALBW_AS_U32(fVar2)) {
        fVar2 = SQRT(fVar2);
        if (fVar3 < fVar2) {
          fVar2 = DAT_0036f848 / fVar2;
          local_80 = local_80 * fVar2;
          local_7c = local_7c * fVar2;
          local_78 = local_78 * fVar2;
        }
        func_00115C54(param_2,&local_30,&local_80);
      }
      *param_1 = *param_1 + local_80;
      param_1[2] = param_1[2] + local_78;
    }
  }
  return;
}


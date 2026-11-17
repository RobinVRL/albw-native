/* compilefix: USA 00352034, converted stage-2 text; the call of 0016C0FC passes its 4th argument (r3 = this
 * function's param_2, EU 3520BC `mov r3, r4`), BOOT_LOG 137. */
#include "ghidra_types.h"

extern int func_0016BCBC(int param_1,float *param_2,float *param_3,int *param_4);
extern int func_0016C0FC(int param_1,float *param_2,float *param_3,int *param_4);
extern float DAT_003520fc;
extern int *DAT_00352100;

// USA 00352034 <- EU 00352010 (Ghidra, non-matching)
// GLOBAL DAT_003520fc float
// GLOBAL DAT_00352100 int *

void func_00352034(undefined4 param_1,int *param_2,float *param_3)

{
  int *piVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define local_2c (*(float *)(albw_frame + 0x4))
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  #define local_1c (*(int *)(albw_frame + 0x14))
  #define local_18 (*(int *)(albw_frame + 0x18))
  piVar1 = DAT_00352100;
  uVar2 = param_2[0x66];
  local_30 = DAT_003520fc;
  local_2c = DAT_003520fc;
  local_28 = DAT_003520fc;
  local_24 = DAT_003520fc;
  local_20 = ALBW_AS_F32(param_2[0x6a]);
  local_1c = param_2[0x6e];
  local_18 = param_2[0x72];
  if (-1 < *(int *)(*(int *)(*(int *)(*(int *)(*param_2 + 0xc) + param_2[100] * 4) + 0x18) +
                   param_2[0x65] * 0x3c + 0xc) * 0x8000) {
    func_0016BCBC(*DAT_00352100,&local_30,&local_20,param_2);
  }
  if ((uVar2 & 0xff) < 2 || (uVar2 & 0xff) == 9) {
    func_0016C0FC(*piVar1,&local_30,&local_20,(int *)param_2);
  }
  fVar3 = param_3[1];
  fVar4 = param_3[2];
  param_2[0x8b] = (int)ALBW_AS_U32((*param_3 * local_30));
  param_2[0x8c] = (int)ALBW_AS_U32((fVar3 * local_2c));
  param_2[0x8d] = (int)ALBW_AS_U32((fVar4 * local_28));
  return;
}


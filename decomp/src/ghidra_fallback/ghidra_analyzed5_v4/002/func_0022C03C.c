#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004D7F70(float *param_1,uint param_2);
extern int func_004FC244(int *param_1,int *param_2,int param_3,undefined4 param_4,int param_5);
extern int func_0068C690(float *param_1);
extern int DAT_0022c154;
extern float DAT_0022c158;
extern int DAT_0022c15c;

// USA 0022C03C <- EU 0022C03C (Ghidra, non-matching)
// GLOBAL DAT_0022c154 int
// GLOBAL DAT_0022c158 float
// GLOBAL DAT_0022c15c int

uint func_0022C03C(int *param_1,uint param_2,float *param_3)

{
  int iVar1;
  uint uVar2;
  float *pfVar3;
  bool bVar4;
  bool bVar5;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_34 (*(float *)(albw_frame + 0xc))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x14))
  #define local_28 (*(float *)(albw_frame + 0x18))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x20))
  if (param_2 != 3) {
    if (*(char *)((int)param_1 + 0xd09) == '\0') {
      return 0;
    }
    pfVar3 = (float *)(param_1 + 699);
    if (*(short *)(DAT_0022c154 + (int)param_1) < 1) {
      fVar6 = DAT_0022c158;
      func_004FC244(param_1,(int *)param_1[0x10f],0xc,1,1);
      param_1[0x340] = 0x18;
      *pfVar3 = fVar6;
      param_1[700] = (int)ALBW_AS_U32(fVar6);
      param_1[0x2bd] = (int)ALBW_AS_U32(fVar6);
    }
    else {
      uVar2 = param_2 & 0xff;
      bVar5 = 0x1d < uVar2;
      bVar4 = uVar2 != 0x1e;
      if (bVar4) {
        uVar2 = uVar2 - 0xe;
        bVar5 = 2 < uVar2;
      }
      if ((bVar5 && (bVar4 && uVar2 != 3)) && (param_2 != 0x1d)) {
        param_1[0x168] = param_1[0x168] | 0x80;
        return param_2;
      }
      fVar6 = DAT_0022c158;
      func_004FC244(param_1,(int *)param_1[0x10f],0xc,1,1);
      param_1[0x340] = 0x18;
      iVar1 = DAT_0022c15c;
      *pfVar3 = fVar6;
      param_1[700] = (int)ALBW_AS_U32(fVar6);
      param_1[0x2bd] = iVar1;
      func_00115C70(&local_28,(float *)(param_1 + 0xf4),param_3);
      local_34 = local_28;
      uStack_30 = uStack_24;
      uStack_2c = uStack_20;
      uVar2 = func_0068C690(&local_34);
      func_004D7F70(pfVar3,uVar2);
    }
  }
  return 0;
}


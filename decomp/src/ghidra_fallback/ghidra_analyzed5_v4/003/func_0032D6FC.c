#include "ghidra_types.h"

extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_004F88A0(int *param_1,undefined2 *param_2);
extern int func_004F8964(float *param_1,int param_2,float fparam_0);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00521078(int param_1);
extern int func_0058A8F0(int param_1);
extern undefined8 func_0058AB74(int param_1);
extern int func_00665670(undefined4 *param_1,undefined1 param_2);
extern int DAT_0032d80c;
extern float DAT_0032d810;
extern float DAT_0032d814;
extern float DAT_0032d818;
extern float DAT_0032d81c;
extern float DAT_0032d820;

// USA 0032D6FC <- EU 0032D6D8 (Ghidra, non-matching)
// GLOBAL DAT_0032d80c int
// GLOBAL DAT_0032d810 float
// GLOBAL DAT_0032d814 float
// GLOBAL DAT_0032d818 float
// GLOBAL DAT_0032d81c float
// GLOBAL DAT_0032d820 float

undefined4 func_0032D6FC(int *param_1)

{
  bool bVar1;
  uint in_fpscr;
  float fVar2;
  int iVar3;
  float fVar4;
  undefined8 uVar5;
  
  func_0051D2F4(param_1 + 0xfa,param_1[0x310],DAT_0032d80c,0x7fffffff,DAT_0032d810);
  if (param_1[0x2ea] < 0x10) {
    fVar2 = (float)VectorSignedToFloat(0xf - param_1[0x2ea],(byte)(in_fpscr >> 0x15) & 3);
    iVar3 = (int)fVar2;
    if (iVar3 < 2) {
      iVar3 = 1;
    }
    fVar2 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    fVar4 = ALBW_AS_F32(param_1[0x314]);
    fVar4 = fVar4 + (DAT_0032d814 - fVar4) * (DAT_0032d818 / fVar2);
    param_1[0x314] = (int)ALBW_AS_U32(fVar4);
    param_1[0x139] = (int)ALBW_AS_U32(fVar4);
    param_1[0x13a] = (int)ALBW_AS_U32(fVar4);
    param_1[0x13b] = (int)ALBW_AS_U32(fVar4);
  }
  bVar1 = func_00521078((int)param_1);
  if (bVar1) {
    func_00115D70((float *)(param_1 + 0xf7),(float *)(param_1 + 0xf7),DAT_0032d81c);
    if (-1 < param_1[0x167] << 0x18) {
      param_1[0x167] = param_1[0x167] | 0x80;
      func_004F88A0(param_1,(undefined2 *)param_1[0xe9]);
    }
    iVar3 = func_0058A8F0((int)param_1);
    if (iVar3 != 0) {
      uVar5 = func_0058AB74((int)param_1);
      if ((int)uVar5 == 8) {
        return func_004FC07C((int)param_1,9,2,0);
      }
      func_00665670(param_1 + 0x2ea,0xe);
    }
    return 0;
  }
  return func_004F8964((float *)(param_1 + 0xf8),0,DAT_0032d820);
}


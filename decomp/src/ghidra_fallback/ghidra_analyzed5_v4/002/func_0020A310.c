#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004F8964(float *param_1,int param_2,float fparam_0);
extern float func_004F898C(void);
extern int func_0051D39C(int *param_1,int param_2,int param_3);
extern float func_0058AA40(int param_1);
extern float func_0058AC38(int param_1);
extern int func_0065D630(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern float DAT_0020a3b4;

// USA 0020A310 <- EU 0020A310 (Ghidra, non-matching)
// GLOBAL DAT_0020a3b4 float

void func_0020A310(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x14))
  fVar2 = func_004F898C();
  func_004F8964((float *)(param_1 + 0x3e0),0,fVar2);
  func_00115C70(&local_24,(float *)(param_1 + 0xc88),(float *)(param_1 + 0x3d0));
  local_30 = local_24;
  uStack_2c = uStack_20;
  uStack_28 = uStack_1c;
  iVar1 = func_0068C690(&local_30);
  fVar2 = func_0058AC38(param_1);
  fVar3 = func_0058AA40(param_1);
  func_0051D39C((int *)(param_1 + 1000),iVar1,(int)((fVar2 - fVar3) - DAT_0020a3b4));
  if (0x1c < *(int *)(param_1 + 0x8bc)) {
    func_0065D630((undefined4 *)(param_1 + 0x8bc),0x20);
  }
  return;
}


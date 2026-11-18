#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004F8964(float *param_1,int param_2,float fparam_0);
extern float func_004F898C(void);
extern int func_0051D2CC(int *param_1,int param_2,float fparam_0);
extern int func_00520FC0(void);
extern float func_0058AA40(int param_1);
extern float func_0058AC38(int param_1);
extern int func_00660718(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern float DAT_00266f34;

// USA 00266E64 <- EU 00266E8C (Ghidra, non-matching)
// GLOBAL DAT_00266f34 float

void func_00266E64(int param_1)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x14))
  fVar3 = func_004F898C();
  func_004F8964((float *)(param_1 + 0x3e0),1,fVar3);
  pfVar1 = (float *)func_00520FC0();
  func_00115C70(&local_24,pfVar1,(float *)(param_1 + 0x3d0));
  local_30 = local_24;
  uStack_2c = uStack_20;
  uStack_28 = uStack_1c;
  iVar2 = func_0068C690(&local_30);
  func_0051D2CC((int *)(param_1 + 1000),iVar2,DAT_00266f34);
  if (0x78 < *(int *)(param_1 + 0x8c8)) {
    fVar3 = func_0058AA40(param_1);
    fVar4 = func_0058AC38(param_1);
    if (fVar3 == fVar4) {
      func_00660718((undefined4 *)(param_1 + 0x8c8),5);
    }
  }
  return;
}


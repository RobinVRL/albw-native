#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0014FAFC(int param_1,uint param_2,float fparam_0);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00520FC0(void);
extern int func_0065D264(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern float DAT_00203018;
extern float *DAT_0020301c;
extern int DAT_00203020;
extern int DAT_00203024;
extern float DAT_00203028;
extern float DAT_0020302c;

// USA 00202F1C <- EU 00202F1C (Ghidra, non-matching)
// GLOBAL DAT_00203018 float
// GLOBAL DAT_0020301c float *
// GLOBAL DAT_00203020 int
// GLOBAL DAT_00203024 int
// GLOBAL DAT_00203028 float
// GLOBAL DAT_0020302c float

undefined4 func_00202F1C(int param_1)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  undefined4 uVar5;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define fStack_24 (*(float *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  if (*(float *)(param_1 + 0xc) + DAT_00203018 < *(float *)(param_1 + 0x3d4)) {
    return func_0065D264((undefined4 *)(param_1 + 0x8bc),4);
  }
  if (*(char *)(param_1 + 0x924) == '\0') {
    local_28 = *DAT_0020301c;
    fStack_24 = DAT_0020301c[1];
    local_20 = DAT_0020301c[2];
    pfVar2 = (float *)func_00520FC0();
    func_00115C70(&local_28,pfVar2,(float *)(param_1 + 0x3d0));
    iVar3 = func_0068C690(&local_28);
    *(int *)(param_1 + 0x900) = iVar3;
  }
  func_0051D2F4((int *)(param_1 + 0x908),*(int *)(param_1 + 0x900),DAT_00203024,DAT_00203020,
                DAT_00203028);
  fVar1 = DAT_0020302c;
  *(undefined4 *)(param_1 + 1000) = 0;
  fVar4 = *(float *)(param_1 + 0x8f0);
  uVar5 = *(undefined4 *)(param_1 + 0x3e0);
  fVar4 = fVar4 + (fVar1 - fVar4) * fVar1;
  *(float *)(param_1 + 0x8f0) = fVar4;
  func_0014FAFC(param_1,*(uint *)(param_1 + 0x908),fVar4);
  *(undefined4 *)(param_1 + 0x3e0) = uVar5;
  *(undefined1 *)(param_1 + 0x924) = 0;
  return 0;
}


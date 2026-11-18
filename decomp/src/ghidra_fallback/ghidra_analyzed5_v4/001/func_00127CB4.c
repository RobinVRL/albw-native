#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00520FC0(void);
extern int func_005211F4(int param_1,float fparam_0,float fparam_1);
extern int func_006568D8(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern float DAT_00127da4;
extern int *DAT_00127da8;
extern int DAT_00127dac;
extern float DAT_00127db0;
extern float DAT_00127db4;
extern int DAT_00127db8;

// USA 00127CB4 <- EU 00127CB4 (Ghidra, non-matching)
// GLOBAL DAT_00127da4 float
// GLOBAL DAT_00127da8 int *
// GLOBAL DAT_00127dac int
// GLOBAL DAT_00127db0 float
// GLOBAL DAT_00127db4 float
// GLOBAL DAT_00127db8 int

undefined4 func_00127CB4(int param_1)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float fparam_1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define fStack_20 (*(float *)(albw_frame + 0x0))
  #define local_1c (*(float *)(albw_frame + 0x4))
  pfVar1 = (float *)func_00520FC0();
  func_00115C70(&fStack_20,pfVar1,(float *)(param_1 + 0x3d0));
  local_1c = DAT_00127da4;
  fparam_1 = DAT_00127da4;
  func_00115DC8(&fStack_20);
  iVar2 = func_0068C690(&fStack_20);
  func_0051D2F4((int *)(param_1 + 1000),iVar2,DAT_00127dac,*DAT_00127da8,DAT_00127db0);
  if (*(uint *)(param_1 + 0x8e0) < *(uint *)(param_1 + 0x8e4)) {
    *(uint *)(param_1 + 0x8e0) = *(uint *)(param_1 + 0x8e0) + 1;
  }
  else {
    iVar2 = func_005211F4(param_1,DAT_00127db4,fparam_1);
    if (iVar2 == 0) {
      iVar2 = func_00520FC0();
      fVar3 = *(float *)(iVar2 + 4) - *(float *)(param_1 + 0x3d4);
      if (fVar3 <= fparam_1) {
        fVar3 = -fVar3;
      }
      if (DAT_00127db8 <= (int)ALBW_AS_U32(fVar3)) {
        return func_006568D8((undefined4 *)(param_1 + 0x8bc),6);
      }
    }
    else {
      func_006568D8((undefined4 *)(param_1 + 0x8bc),2);
    }
  }
  return 0;
}


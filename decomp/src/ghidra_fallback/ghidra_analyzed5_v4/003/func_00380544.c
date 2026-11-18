#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_00520FC0(void);
extern int func_0068C690(float *param_1);
extern float *DAT_0038057c;

// USA 00380544 <- EU 00380520 (Ghidra, non-matching)
// GLOBAL DAT_0038057c float *

undefined4 func_00380544(int param_1)

{
  float *pfVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define fStack_14 (*(float *)(albw_frame + 0xc))
  #define fStack_10 (*(float *)(albw_frame + 0x10))
  local_18 = *DAT_0038057c;
  fStack_14 = DAT_0038057c[1];
  fStack_10 = DAT_0038057c[2];
  pfVar1 = (float *)func_00520FC0();
  func_00115C70(&local_18,pfVar1,(float *)(param_1 + 0x3d0));
  iVar2 = func_0068C690(&local_18);
  *(int *)(param_1 + 0xad8) = iVar2;
  return func_004FC07C(param_1,0,0xffffffff,0);
}


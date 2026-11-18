#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_002A27C4(int param_1,int param_2);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0051D39C(int *param_1,int param_2,int param_3);
extern int func_00520FC0(void);
extern int func_0058A8F0(int param_1);
extern float func_0058AC38(int param_1);
extern int func_00662128(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern float *DAT_002a6c38;
extern float DAT_002a6c3c;
extern int *DAT_002a6c40;
extern int *DAT_002a6c44;

// USA 002A6B9C <- EU 002A6B78 (Ghidra, non-matching)
// GLOBAL DAT_002a6c38 float *
// GLOBAL DAT_002a6c3c float
// GLOBAL DAT_002a6c40 int *
// GLOBAL DAT_002a6c44 int *

void func_002A6B9C(int param_1)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define fStack_1c (*(float *)(albw_frame + 0x4))
  #define local_18 (*(float *)(albw_frame + 0x8))
  local_20 = *DAT_002a6c38;
  fStack_1c = DAT_002a6c38[1];
  local_18 = DAT_002a6c38[2];
  pfVar1 = (float *)func_00520FC0();
  func_00115C70(&local_20,pfVar1,(float *)(param_1 + 0x3d0));
  func_002A27C4(param_1,0);
  fVar3 = func_0058AC38(param_1);
  fparam_0 = DAT_002a6c3c;
  func_0051D39C((int *)(param_1 + 0xb80),*DAT_002a6c40,(int)(fVar3 - DAT_002a6c3c));
  iVar2 = func_0068C690(&local_20);
  func_0051D2F4((int *)(param_1 + 1000),iVar2,*DAT_002a6c44,*(int *)(param_1 + 0xb80),fparam_0);
  iVar2 = func_0058A8F0(param_1);
  if (iVar2 != 0) {
    func_00662128((undefined4 *)(param_1 + 0x9e0),1);
  }
  return;
}


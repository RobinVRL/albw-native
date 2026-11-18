#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004F68AC();
extern int func_0051D2CC(int *param_1,int param_2,float fparam_0);
extern int func_00588F08(int param_1);
extern int func_00588F14(int param_1);
extern int func_0068C690(float *param_1);
extern int *DAT_002a9b08;
extern float DAT_002a9b0c;

// USA 002A9AB8 <- EU 002A9A94 (Ghidra, non-matching)
// GLOBAL DAT_002a9b08 int *
// GLOBAL DAT_002a9b0c float

undefined4 func_002A9AB8(int param_1,int param_2)

{
  int *piVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_2c (*(float *)(albw_frame + 0x4))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x8))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x18))
  piVar1 = DAT_002a9b08;
  pfVar2 = (float *)func_00588F14(*DAT_002a9b08);
  pfVar3 = (float *)func_00588F08(*piVar1);
  func_00115C70(&local_2c,pfVar2,pfVar3);
  pfVar2 = &local_20;
  local_20 = local_2c;
  uStack_1c = uStack_28;
  uStack_18 = uStack_24;
  iVar4 = func_0068C690(&local_20);
  func_0051D2CC((int *)(param_1 + 1000),iVar4,DAT_002a9b0c);
  return func_004F68AC(param_1,param_2,uStack_24,pfVar2);
}


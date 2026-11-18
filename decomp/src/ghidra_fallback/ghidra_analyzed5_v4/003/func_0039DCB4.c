#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0039DC1C(int param_1,int param_2,int param_3);
extern int func_0048B680(float *param_1,float fparam_0,float fparam_1,float fparam_2);
extern int func_00491C08(float *param_1,float *param_2);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0068A3EC(float *param_1,float fparam_0);
extern int func_0068C690(float *param_1);
extern int *DAT_0039dd90;
extern float DAT_0039dd94;
extern float DAT_0039dd98;
extern undefined4 DAT_0039dd9c;

// USA 0039DCB4 <- EU 0039DC90 (Ghidra, non-matching)
// GLOBAL DAT_0039dd90 int *
// GLOBAL DAT_0039dd94 float
// GLOBAL DAT_0039dd98 float
// GLOBAL DAT_0039dd9c undefined4

undefined4 func_0039DCB4(int param_1)

{
  float fparam_0;
  undefined4 uVar1;
  int iVar2;
  float *pfVar3;
  uint in_fpscr;
  float fparam_1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define local_1c (*(float *)(albw_frame + 0x4))
  #define local_18 (*(float *)(albw_frame + 0x8))
  iVar2 = func_0052FBA0(*DAT_0039dd90 + 0x3dbbc,*(uint *)(param_1 + 0x50));
  if (iVar2 != 0) {
    pfVar3 = (float *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x40c) + 0x24) + 0x14) +
                      *(int *)(iVar2 + 0xb80) * 0x30);
    func_00491C08((float *)(param_1 + 0x51c),pfVar3);
    local_20 = pfVar3[2];
    local_1c = pfVar3[6];
    local_18 = pfVar3[10];
    iVar2 = func_0068C690(&local_20);
    fparam_0 = DAT_0039dd94;
    *(int *)(param_1 + 1000) = iVar2;
    fparam_1 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_0048B680((float *)(param_1 + 0x52c),fparam_0,fparam_1,fparam_0);
    func_0068A3EC(&local_20,DAT_0039dd98);
    func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),&local_20);
  }
  uVar1 = DAT_0039dd9c;
  *(undefined4 *)(param_1 + 0x4f4) = 0x50;
  *(undefined4 *)(param_1 + 0x4f8) = uVar1;
  *(undefined4 *)(param_1 + 0x4f0) = 0;
  *(undefined4 *)(param_1 + 0x454) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(param_1 + 0x458) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(param_1 + 0x45c) = *(undefined4 *)(param_1 + 0x3d8);
  *(undefined4 *)(param_1 + 0x4a0) = 0;
  func_0039DC1C(param_1,4,0x50);
  return (undefined4)param_1;
}


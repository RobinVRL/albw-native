#include "ghidra_types.h"

extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_004F88A0(int *param_1,undefined2 *param_2);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern float func_0058AC38(int param_1);
extern float fRam0020100c;
extern float DAT_00201000;
extern float DAT_00201004;
extern float DAT_00201008;
extern float DAT_00201010;
extern float DAT_00201014;

// USA 00200EBC <- EU 00200EBC (Ghidra, non-matching)
// GLOBAL DAT_00201000 float
// GLOBAL DAT_00201004 float
// GLOBAL DAT_00201008 float
// GLOBAL DAT_00201010 float
// GLOBAL DAT_00201014 float
// GLOBAL UNK_0020100c float

void func_00200EBC(int param_1)

{
  uint in_fpscr;
  float fVar1;
  int iVar2;
  float fVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define local_1c (*(float *)(albw_frame + 0x4))
  #define local_18 (*(float *)(albw_frame + 0x8))
  fVar3 = DAT_00201000;
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xffffffdf;
  local_20 = fVar3;
  local_1c = fVar3;
  local_18 = fVar3;
  func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),&local_20);
  local_20 = fVar3;
  local_1c = fVar3;
  func_00115154(&local_1c,&local_20,*(uint *)(param_1 + 0x24));
  *(float *)(param_1 + 0x3e4) = local_20;
  *(float *)(param_1 + 0x3dc) = local_1c;
  *(float *)(param_1 + 0x3e0) = fVar3;
  if (*(short *)(param_1 + 0x30) == 0) {
    func_00115D70((float *)(param_1 + 0x924),(float *)(param_1 + 0x3dc),DAT_00201010);
    func_00115D70((float *)(param_1 + 0x3dc),(float *)(param_1 + 0x3dc),DAT_00201014);
  }
  else {
    func_00115D70((float *)(param_1 + 0x924),(float *)(param_1 + 0x3dc),DAT_00201004);
    func_00115D70((float *)(param_1 + 0x3dc),(float *)(param_1 + 0x3dc),DAT_00201008);
  }
  func_004FABDC(param_1,8,2,0);
  func_004F88A0((int *)param_1,*(undefined2 **)(param_1 + 0x910));
  *(uint *)(*(int *)(param_1 + 0x424) + 0x2c) =
       *(uint *)(*(int *)(param_1 + 0x424) + 0x2c) | 0x20000;
  *(undefined4 *)(param_1 + 1000) = 0;
  fVar1 = func_0058AC38(param_1);
  iVar2 = (int)fVar1;
  *(int *)(param_1 + 0x91c) = iVar2;
  if (iVar2 == 0) {
    *(float *)(param_1 + 0x920) = fVar3;
  }
  else {
    fVar3 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x920) = fRam0020100c / fVar3;
  }
  *(undefined4 *)(param_1 + 0x918) = 0;
  return;
}


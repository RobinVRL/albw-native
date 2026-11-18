#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_0014EEC8(int param_1,uint param_2,undefined4 *param_3,undefined4 param_4,float fparam_0);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern float DAT_005090a0;
extern float DAT_005090a4;
extern float *DAT_005090a8;
extern int *DAT_005090ac;
extern float DAT_005090b0;

// USA 00508F5C <- EU 00508F34 (Ghidra, non-matching)
// GLOBAL DAT_005090a0 float
// GLOBAL DAT_005090a4 float
// GLOBAL DAT_005090a8 float *
// GLOBAL DAT_005090ac int *
// GLOBAL DAT_005090b0 float

undefined4 func_00508F5C(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  float *pfVar4;
  undefined4 uVar5;
  uint in_fpscr;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define fStack_14 (*(float *)(albw_frame + 0xc))
  #define fStack_10 (*(float *)(albw_frame + 0x10))
  if (*(uint *)(param_1 + 0x4a0) < *(uint *)(param_1 + 0x4a4)) {
    *(uint *)(param_1 + 0x4a0) = *(uint *)(param_1 + 0x4a0) + 1;
  }
  func_0014E2A0(param_1,*(undefined4 *)(param_1 + 0x41c),param_1 + 0x4e8,0x1600,0,0);
  piVar3 = (int *)(*(int *)(param_1 + 0x52c) + *(char *)(param_1 + 0x514) * 8);
  uVar1 = *(uint *)(*(int *)(param_1 + 0x52c) + *(char *)(param_1 + 0x514) * 8 + 4);
  if ((uVar1 & 1) != 0) {
    piVar3 = (int *)(*piVar3 + *(int *)(*(int *)(param_1 + 0x524) + ((int)uVar1 >> 1)));
  }
  (*(code *)*piVar3)();
  iVar2 = *(int *)(param_1 + 0x510) + 1;
  *(int *)(param_1 + 0x510) = iVar2;
  if (*(int *)(param_1 + 0x520) != 0) {
    fVar6 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0x520),1,fVar6);
  }
  fVar6 = *(float *)(param_1 + 0x3e0) - DAT_005090a0;
  if (fVar6 < DAT_005090a4) {
    fVar6 = DAT_005090a4;
  }
  *(float *)(param_1 + 0x3e0) = fVar6;
  *(undefined4 *)(param_1 + 0x4c4) = *(undefined4 *)(param_1 + 0x438);
  func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3dc));
  local_18 = *DAT_005090a8;
  fStack_14 = DAT_005090a8[1];
  fStack_10 = DAT_005090a8[2];
  pfVar4 = (float *)(param_1 + 0x42c);
  piVar3 = DAT_005090ac;
  iVar2 = func_0014EEC8(param_1,(uint)&local_18,pfVar4,DAT_005090ac,DAT_005090b0);
  uVar5 = extraout_r1;
  if (iVar2 != 0) {
    pfVar4 = &local_18;
    func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),pfVar4);
    uVar5 = extraout_r1_00;
  }
  func_00169A80(*(int **)(param_1 + 0x414),uVar5,pfVar4,piVar3);
  uVar5 = 0;
  func_00168E9C(*(int **)(param_1 + 0x414),*(int *)(param_1 + 0x410),(int *)0x0);
  func_00169A80(*(int **)(param_1 + 0x418),extraout_r1_01,uVar5,piVar3);
  return func_00168E9C(*(int **)(param_1 + 0x418),*(int *)(param_1 + 0x410),(int *)0x0);
}


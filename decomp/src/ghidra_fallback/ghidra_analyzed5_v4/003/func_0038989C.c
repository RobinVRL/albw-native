#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_0051D39C(int *param_1,int param_2,int param_3);
extern int func_00667DD0(undefined4 *param_1,undefined1 param_2);
extern float DAT_00389990;

// USA 0038989C <- EU 00389878 (Ghidra, non-matching)
// GLOBAL DAT_00389990 float

undefined4 func_0038989C(int param_1)

{
  int iVar1;
  undefined4 extraout_r1;
  float *pfVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(float *)(albw_frame + 0x0))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x4))
  #define piStack_48 (*(int * *)(albw_frame + 0x8))
  #define local_44 (*(float *)(albw_frame + 0xc))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x10))
  #define piStack_3c (*(int * *)(albw_frame + 0x14))
  #define local_34 (*(float *)(albw_frame + 0x1c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x24))
  #define local_28 (*(float *)(albw_frame + 0x28))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x2c))
  #define piStack_20 (*(int * *)(albw_frame + 0x30))
  iVar3 = 0x2d - *(int *)(param_1 + 0x40c);
  if (iVar3 < 1) {
    iVar3 = 0;
    func_00667DD0((undefined4 *)(param_1 + 0x40c),4);
  }
  iVar1 = iVar3;
  if (iVar3 < 2) {
    iVar1 = 1;
  }
  local_34 = *(float *)(param_1 + 0x470);
  uStack_30 = *(undefined4 *)(param_1 + 0x474);
  uStack_2c = *(undefined4 *)(param_1 + 0x478);
  pfVar2 = (float *)(param_1 + 0x3d0);
  fVar4 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
  fVar4 = DAT_00389990 / fVar4;
  func_00115C70(&local_28,&local_34,pfVar2);
  local_44 = local_28;
  uStack_40 = uStack_24;
  piStack_3c = piStack_20;
  func_00115D70(&local_28,&local_44,fVar4);
  local_50 = local_28;
  uStack_4c = uStack_24;
  piStack_48 = piStack_20;
  func_00115C54(pfVar2,pfVar2,&local_50);
  func_0051D39C((int *)(param_1 + 1000),*(int *)(param_1 + 0x47c),iVar3);
  iVar3 = *(int *)(param_1 + 0x460);
  pfVar2 = (float *)(param_1 + 0x3d0);
  *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar3 + 0x80),*(uint *)(param_1 + 1000),pfVar2);
  func_00169A80(*(int **)(param_1 + 0x464),extraout_r1,pfVar2,piStack_20);
  func_00168E9C(*(int **)(param_1 + 0x464),*(int *)(param_1 + 0x460),(int *)0x0);
  return func_004CEAF0(*(int *)(param_1 + 0x460));
}


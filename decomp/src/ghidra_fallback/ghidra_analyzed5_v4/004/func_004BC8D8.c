#include "ghidra_types.h"

extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_004BDBAC(int param_1,int param_2);
extern int func_004BF418(int param_1);
extern int func_004BF874(int param_1,float *param_2,int param_3);
extern int func_004CEAF0(int param_1);
extern int func_004D7EB0(float *param_1,uint param_2,uint param_3,float *param_4);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);

// USA 004BC8D8 <- EU 004BC8B0 (Ghidra, non-matching)

void func_004BC8D8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  float *pfVar3;
  undefined4 uVar4;
  int *in_r3;
  float *pfVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  pfVar5 = &local_18;
  pfVar3 = &local_18;
  local_18 = *(float *)(param_1 + 0x3d0);
  uStack_14 = *(undefined4 *)(param_1 + 0x3d4);
  uStack_10 = *(undefined4 *)(param_1 + 0x3d8);
  iVar1 = *(int *)(param_1 + 0x828);
  iVar2 = *(int *)(param_1 + 0x7a0);
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  if (iVar1 == 0) {
    func_004D8AEC((float *)(iVar2 + 0x80),*(uint *)(param_1 + 1000),&local_18);
    uVar4 = extraout_r1_00;
  }
  else {
    pfVar3 = *(float **)(param_1 + 1000);
    func_004D7EB0((float *)(iVar2 + 0x80),*(uint *)(param_1 + 0x828),(uint)pfVar3,&local_18);
    uVar4 = extraout_r1;
    in_r3 = (int *)pfVar5;
  }
  func_00169A80(*(int **)(param_1 + 0x7ac),uVar4,pfVar3,in_r3);
  uVar4 = 0;
  func_00168E9C(*(int **)(param_1 + 0x7ac),*(int *)(param_1 + 0x7a0),(int *)0x0);
  if ((*(int **)(param_1 + 0x7b0) != (int *)0x0) && (*(byte *)(param_1 + 0x916) != 0)) {
    func_00169A80(*(int **)(param_1 + 0x7b0),(uint)*(byte *)(param_1 + 0x916),uVar4,in_r3);
    func_00168E9C(*(int **)(param_1 + 0x7b0),*(int *)(param_1 + 0x7a0),(int *)0x0);
  }
  func_004BF418(param_1);
  func_004CEAF0(*(int *)(param_1 + 0x7a0));
  func_004BF874(param_1,&local_18,0);
  func_004BDBAC(param_1,0);
  *(undefined1 *)(param_1 + 0x913) = 2;
  return;
}


#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_001512B4(int param_1,float *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_00491E80(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004CEAF0(int param_1);
extern int func_0052FE18(int param_1,undefined4 *param_2);
extern int func_00530064(int param_1,float *param_2);
extern float DAT_002410f0;

// USA 0024100C <- EU 0024100C (Ghidra, non-matching)
// GLOBAL DAT_002410f0 float

undefined4 func_0024100C(int param_1)

{
  int iVar1;
  undefined4 extraout_r1;
  float *pfVar2;
  int *piVar3;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x4))
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x14))
  #define afStack_18 ((float *)(albw_frame + 0x18))
  func_0052FE18(param_1,&local_30);
  *(float *)(*(int *)(*(int *)(param_1 + 0x4b4) + 0x14) + 0x10) = local_28 * DAT_002410f0;
  func_00530064(param_1,afStack_18);
  func_00115C54(&local_24,afStack_18,(float *)(param_1 + 0x3d0));
  pfVar2 = &local_24;
  local_30 = local_24;
  uStack_2c = uStack_20;
  local_28 = ALBW_AS_F32(uStack_1c);
  func_001512B4(*(int *)(param_1 + 0x4bc),&local_30);
  func_00169A80(*(int **)(param_1 + 0x4b4),extraout_r1,uStack_1c,(int *)pfVar2);
  piVar3 = (int *)(param_1 + 0x4b0);
  func_00168E9C(*(int **)(param_1 + 0x4b4),*(int *)(param_1 + 0x4b0),(int *)0x0);
  iVar1 = *piVar3;
  *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
  func_00491E80((float *)(iVar1 + 0x80),0,*(uint *)(param_1 + 1000),0);
  iVar1 = *piVar3;
  *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
  *(undefined4 *)(iVar1 + 0x8c) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(iVar1 + 0x9c) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(iVar1 + 0xac) = *(undefined4 *)(param_1 + 0x3d8);
  return func_004CEAF0(*piVar3);
}


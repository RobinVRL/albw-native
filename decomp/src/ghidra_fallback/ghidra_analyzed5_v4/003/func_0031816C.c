#include "ghidra_types.h"

extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_004356B4(int *param_1);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern float func_0054DE3C(int param_1,uint param_2,int param_3);
extern float DAT_00318244;
extern float DAT_00318248;
extern int DAT_0031824c;

// USA 0031816C <- EU 00318148 (Ghidra, non-matching)
// GLOBAL DAT_00318244 float
// GLOBAL DAT_00318248 float
// GLOBAL DAT_0031824c int

undefined4 func_0031816C(int param_1)

{
  int *piVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define local_2c (*(float *)(albw_frame + 0x4))
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define local_20 ((float *)(albw_frame + 0x10))
  piVar1 = *(int **)(param_1 + 0x430);
  fVar5 = *(float *)(param_1 + 0x440) * DAT_00318244;
  func_00115154(&local_24,local_20,*(uint *)(param_1 + 1000));
  fVar4 = DAT_00318248;
  piVar1[0x1d] = DAT_0031824c;
  piVar1[0x20] = (int)ALBW_AS_U32(fVar4);
  piVar1[0x1c] = (int)ALBW_AS_U32(fVar4);
  piVar1[0x1e] = (int)ALBW_AS_U32(fVar4);
  piVar1[0x1a] = (int)ALBW_AS_U32(fVar4);
  piVar1[0x19] = (int)ALBW_AS_U32(local_20[0]);
  piVar1[0x1b] = (int)ALBW_AS_U32(local_24);
  piVar1[0x1f] = (int)ALBW_AS_U32(-local_24);
  piVar1[0x21] = (int)ALBW_AS_U32(local_20[0]);
  uVar2 = *(uint *)(param_1 + 1000);
  fVar3 = func_0054DE3C(param_1,0,2);
  func_004D80A4(&local_30,uVar2,fVar3 * fVar5);
  local_2c = fVar4;
  func_00115C54(&local_30,&local_30,(float *)(param_1 + 0x3d0));
  fVar4 = func_0054DE3C(param_1,0,1);
  local_2c = fVar4 + local_2c;
  piVar1[1] = (int)ALBW_AS_U32(local_30);
  piVar1[2] = (int)ALBW_AS_U32(local_2c);
  piVar1[3] = local_28;
  piVar1[0x18] = (int)ALBW_AS_U32((*(float *)(param_1 + 0x444) * fVar5));
  return func_004356B4(piVar1);
}


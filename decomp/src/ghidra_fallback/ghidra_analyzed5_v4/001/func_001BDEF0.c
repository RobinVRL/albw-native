#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_0014EB3C(int param_1);
extern int func_004356B4(int *param_1);
extern undefined4 func_004A7F00(int param_1,int param_2,uint param_3);
extern int func_004EDAD0(int param_1,uint *param_2);
extern float func_0054DE3C(int param_1,uint param_2,int param_3);
extern float DAT_001bdff8;
extern int *DAT_001bdffc;

// USA 001BDEF0 <- EU 001BDEF0 (Ghidra, non-matching)
// GLOBAL DAT_001bdff8 float
// GLOBAL DAT_001bdffc int *

undefined4 func_001BDEF0(int param_1)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_34 (*(float *)(albw_frame + 0xc))
  #define local_30 (*(float *)(albw_frame + 0x10))
  #define local_2c (*(undefined4 *)(albw_frame + 0x14))
  #define local_28 (*(float *)(albw_frame + 0x18))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x20))
  #define local_1c (*(float *)(albw_frame + 0x24))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x28))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_10 (*(uint *)(albw_frame + 0x30))
  local_34 = *(float *)(param_1 + 0x3d0);
  local_30 = *(float *)(param_1 + 0x3d4);
  local_2c = *(undefined4 *)(param_1 + 0x3d8);
  fVar3 = func_0054DE3C(param_1,0,1);
  local_30 = fVar3 + local_30;
  func_0014EB3C(param_1);
  func_00115D70(&local_1c,(float *)(param_1 + 0x374),DAT_001bdff8);
  local_28 = local_1c;
  uStack_24 = uStack_18;
  uStack_20 = uStack_14;
  func_00115C54(&local_34,&local_34,&local_28);
  iVar1 = *(int *)(param_1 + 0x43c);
  *(float *)(iVar1 + 4) = local_34;
  *(float *)(iVar1 + 8) = local_30;
  *(undefined4 *)(iVar1 + 0xc) = local_2c;
  func_004356B4(*(int **)(param_1 + 0x43c));
  piVar2 = (int *)(param_1 + 0x444);
  *(undefined4 *)(*(int *)(param_1 + 0x444) + 0x18) = *(undefined4 *)(param_1 + 0x43c);
  local_10 = *(uint *)(param_1 + 0x2cc);
  func_004EDAD0(*(int *)(param_1 + 0x444),&local_10);
  *(undefined2 *)(*(int *)(*piVar2 + 0x18) + 0x28) = 0x1c4;
  *(undefined2 *)(*piVar2 + 0x2c) = *(undefined2 *)(param_1 + 0x54);
  return func_004A7F00(*DAT_001bdffc,*piVar2,1);
}


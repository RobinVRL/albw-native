#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_0014EB3C(int param_1);
extern int func_004356B4(int *param_1);
extern undefined4 func_004A7F00(int param_1,int param_2,uint param_3);
extern int func_004EDAD0(int param_1,uint *param_2);
extern float func_0054DE3C(int param_1,uint param_2,int param_3);
extern int *DAT_0033105c;

// USA 00330F70 <- EU 00330F4C (Ghidra, non-matching)
// GLOBAL DAT_0033105c int *

undefined4 func_00330F70(int param_1,float fparam_0)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_3c (*(float *)(albw_frame + 0x4))
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define local_34 (*(undefined4 *)(albw_frame + 0xc))
  #define local_30 (*(float *)(albw_frame + 0x10))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x18))
  #define local_24 (*(float *)(albw_frame + 0x1c))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x24))
  #define local_18 ((uint *)(albw_frame + 0x28))
  local_3c = *(float *)(param_1 + 0x3d0);
  local_38 = *(float *)(param_1 + 0x3d4);
  local_34 = *(undefined4 *)(param_1 + 0x3d8);
  fVar3 = func_0054DE3C(param_1,0,1);
  local_38 = fVar3 + local_38;
  func_0014EB3C(param_1);
  func_00115D70(&local_24,(float *)(param_1 + 0x374),fparam_0);
  local_30 = local_24;
  uStack_2c = uStack_20;
  uStack_28 = uStack_1c;
  func_00115C54(&local_3c,&local_3c,&local_30);
  iVar1 = *(int *)(param_1 + 0x410);
  *(float *)(iVar1 + 4) = local_3c;
  *(float *)(iVar1 + 8) = local_38;
  *(undefined4 *)(iVar1 + 0xc) = local_34;
  func_004356B4(*(int **)(param_1 + 0x410));
  piVar2 = (int *)(param_1 + 0x414);
  *(undefined4 *)(*(int *)(param_1 + 0x414) + 0x18) = *(undefined4 *)(param_1 + 0x410);
  local_18[0] = *(uint *)(param_1 + 0x2cc);
  func_004EDAD0(*(int *)(param_1 + 0x414),local_18);
  *(undefined2 *)(*(int *)(*piVar2 + 0x18) + 0x28) = 0xa4;
  *(undefined2 *)(*piVar2 + 0x2c) = *(undefined2 *)(param_1 + 0x54);
  return func_004A7F00(*DAT_0033105c,*piVar2,2);
}


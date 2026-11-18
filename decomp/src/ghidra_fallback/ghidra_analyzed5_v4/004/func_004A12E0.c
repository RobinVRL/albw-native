#include "ghidra_types.h"

extern int func_0010B954(int param_1,int param_2,int *param_3,int param_4,int param_5);
extern int func_0049CE98(undefined4 *param_1);
extern undefined4 DAT_004a13a0;
extern char s_cf_004a138c[];
extern char s_sead__MethodTreeMgr_004a138c[];

// USA 004A12E0 <- EU 004A12B8 (Ghidra, non-matching)
// GLOBAL DAT_004a13a0 undefined4
// GLOBAL s_cf_004a138c string

undefined4 func_004A12E0(int *param_1,int *param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(undefined4 *)(albw_frame + 0x8))
  #define local_34 (*(int *)(albw_frame + 0xc))
  #define local_30 (*(int *)(albw_frame + 0x10))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x14))
  #define piStack_28 (*(int * *)(albw_frame + 0x18))
  #define local_24 (*(int * *)(albw_frame + 0x1c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x20))
  #define local_1c (*(char * *)(albw_frame + 0x24))
  (**(code **)(*param_1 + 0x28))(param_1);
  local_1c = s_sead__MethodTreeMgr_004a138c;
  local_20 = DAT_004a13a0;
  piVar1 = func_0010B954(0,(int)&local_20,param_2,1,0);
  iVar2 = (**(code **)(*param_1 + 0x30))(param_1,piVar1);
  param_1[8] = iVar2;
  (**(code **)(*piVar1 + 0x14))(piVar1);
  param_1[9] = (int)piVar1;
  local_38 = 0x20;
  local_34 = 0x8000;
  local_30 = -1;
  if (*param_4 != 0) {
    local_34 = *param_4;
  }
  if (param_4[1] != -1) {
    local_30 = param_4[1];
  }
  uStack_2c = param_3;
  piStack_28 = param_2;
  local_24 = param_1;
  iVar2 = func_0049CE98(&local_38);
  param_1[7] = iVar2;
  return (**(code **)(*param_1 + 0x2c))(param_1);
}


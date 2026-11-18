#include "ghidra_types.h"

extern int func_0014ED58(int param_1);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A3700(int param_1);
extern int func_005811E8(int *param_1);
extern int DAT_00225b44;
extern int DAT_00225b48;
extern int DAT_00225b4c;
extern int DAT_00225b70;
extern char s_ReactIce_00225b50[];
extern char s_SE_EN_DAMAGE_ICE_00225b5c[];

// USA 00225A6C <- EU 00225A6C (Ghidra, non-matching)
// GLOBAL DAT_00225b44 int
// GLOBAL DAT_00225b48 int
// GLOBAL DAT_00225b4c int
// GLOBAL DAT_00225b70 int
// GLOBAL s_ReactIce_00225b50 string
// GLOBAL s_SE_EN_DAMAGE_ICE_00225b5c string

void func_00225A6C(int *param_1)

{
  int iVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  #define aiStack_18 ((int *)(albw_frame + 0x8))
  *(undefined2 *)(DAT_00225b44 + (int)param_1) = 0x1e;
  iVar2 = DAT_00225b48;
  param_1[0x1c8] = 0x3c;
  param_1[0x1c9] = iVar2;
  iVar2 = DAT_00225b4c;
  param_1[0x1c7] = 0;
  param_1[0x1ca] = 0;
  param_1[0x1cb] = iVar2;
  func_0014ED58(param_1[0x165]);
  iVar1 = func_005811E8(param_1 + 0x103);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = param_1[0x103];
  }
  if ((iVar1 != 0 && iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == param_1[0x104])) {
    *(uint *)(iVar2 + 0x3c) = *(uint *)(iVar2 + 0x3c) & 0xffffffbb | 8;
    func_004A3700(iVar2);
  }
  if (param_1[0xd1] != 0) {
    func_004A1B9C(aiStack_18,param_1[0xd1],(uint *)s_ReactIce_00225b50);
  }
  local_1c = s_SE_EN_DAMAGE_ICE_00225b5c;
  local_20 = DAT_00225b70;
  func_00150A84(param_1,&local_20,0);
  *(undefined1 *)((int)param_1 + 0x5fd) = 0;
  return;
}


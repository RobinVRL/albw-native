// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0010A464(undefined4 *param_1);
extern int func_0025B6A8(int param_1,int param_2);
extern int func_0025B7B0(int param_1,uint param_2);
extern int func_0025B874(undefined4 *param_1);
extern int func_0025BDA4(int *param_1,int *param_2);
extern int func_004EAF8C(int param_1,int *param_2,int param_3);
extern int DAT_004eaecc;
extern char s_SE_OBJ_PL_LIFT_L_004eaeb8[];
extern char s_SE_PV_LIFT_L_004eaed0[];

// USA 004EAE58 <- EU 004EAE30 (Ghidra, non-matching)
// GLOBAL DAT_004eaecc int
// GLOBAL s_SE_OBJ_PL_LIFT_L_004eaeb8 string
// GLOBAL s_SE_PV_LIFT_L_004eaed0 string

void func_004EAE58(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_80 (*(int *)(albw_frame + 0x0))
  #define local_7c (*(char * *)(albw_frame + 0x4))
  #define local_20 (*(int *)(albw_frame + 0x60))
  #define local_1c (*(char * *)(albw_frame + 0x64))
  func_0010A464(&local_80);
  iVar1 = DAT_004eaecc;
  local_1c = s_SE_OBJ_PL_LIFT_L_004eaeb8;
  local_20 = DAT_004eaecc;
  piVar2 = func_0025BDA4(*(int **)(param_1 + 0x40),&local_20);
  if (piVar2 != (int *)0x0) {
    func_0025B6A8((int)&local_80,(int)piVar2);
  }
  func_0025B7B0((int)&local_80,param_2);
  func_0025B874(&local_80);
  if (param_3 != 0) {
    local_7c = s_SE_PV_LIFT_L_004eaed0;
    local_80 = iVar1;
    func_004EAF8C(param_1,&local_80,0);
  }
  return;
}


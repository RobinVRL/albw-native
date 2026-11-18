#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int DAT_005142b8;
extern int DAT_005142cc;
extern char s_SE_KinSta_BOUND_005142bc[];

// USA 00514278 <- EU 00514250 (Ghidra, non-matching)
// GLOBAL DAT_005142b8 int
// GLOBAL DAT_005142cc int
// GLOBAL s_SE_KinSta_BOUND_005142bc string

void func_00514278(int *param_1)

{
  uint *puVar1;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define aiStack_70 ((int *)(albw_frame + 0x0))
  #define local_10 (*(int *)(albw_frame + 0x60))
  #define local_c (*(char * *)(albw_frame + 0x64))
  puVar1 = (uint *)func_002C11E8(aiStack_70,6,6,0);
  func_0016898C(param_1[300],puVar1);
  local_10 = DAT_005142cc;
  param_1[0xf8] = DAT_005142b8;
  local_c = s_SE_KinSta_BOUND_005142bc;
  func_00150A84(param_1,&local_10,0);
  *(undefined1 *)((int)param_1 + 0x559) = 1;
  return;
}


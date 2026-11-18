#include "ghidra_types.h"

extern int func_0014F4EC(int param_1);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int DAT_002257f0;
extern int DAT_00225814;
extern char s_ReactIceBreak_002257f4[];
extern char s_SE_EN_ICE_BREAK_00225804[];

// USA 00225784 <- EU 00225784 (Ghidra, non-matching)
// GLOBAL DAT_002257f0 int
// GLOBAL DAT_00225814 int
// GLOBAL s_ReactIceBreak_002257f4 string
// GLOBAL s_SE_EN_ICE_BREAK_00225804 string

undefined4 func_00225784(int *param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define aiStack_10 ((int *)(albw_frame + 0x10))
  *(undefined1 *)((int)param_1 + 0x5fd) = 1;
  func_0014F4EC(param_1[0x165]);
  iVar1 = DAT_002257f0;
  param_1[0x1cc] = DAT_002257f0;
  param_1[0x1cd] = iVar1;
  param_1[0x1ce] = iVar1;
  if (param_1[0xd1] != 0) {
    func_004A1B9C(aiStack_10,param_1[0xd1],(uint *)s_ReactIceBreak_002257f4);
  }
  local_14 = s_SE_EN_ICE_BREAK_00225804;
  local_18 = DAT_00225814;
  return func_00150A84(param_1,&local_18,0);
}


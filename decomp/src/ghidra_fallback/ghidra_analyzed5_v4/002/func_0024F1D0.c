#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_004A8BFC(int param_1,int param_2,uint param_3);
extern int DAT_0024f254;
extern int *DAT_0024f258;
extern int DAT_0024f25c;
extern char s_SE_SandPillar_SMOKE_0024f240[];

// USA 0024F1D0 <- EU 0024F1D0 (Ghidra, non-matching)
// GLOBAL DAT_0024f254 int
// GLOBAL DAT_0024f258 int *
// GLOBAL DAT_0024f25c int
// GLOBAL s_SE_SandPillar_SMOKE_0024f240 string

void func_0024F1D0(int *param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  local_10 = DAT_0024f254;
  local_c = s_SE_SandPillar_SMOKE_0024f240;
  func_00150A84(param_1,&local_10,0);
  func_004A8BFC(*DAT_0024f258,(int)(param_1 + 0x107),(uint)*(byte *)(param_1 + 0x12e));
  *(undefined1 *)((int)param_1 + 0x4d9) = 1;
  iVar1 = DAT_0024f25c;
  param_1[0x131] = 0x19;
  param_1[0x132] = iVar1;
  param_1[0x130] = 0;
  return;
}


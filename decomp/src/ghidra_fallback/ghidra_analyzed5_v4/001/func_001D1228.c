#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_001CFEF4(int param_1,undefined4 param_2,float fparam_0);
extern int func_004EAF08(int param_1,int param_2);
extern int DAT_001d1298;
extern int *DAT_001d129c;
extern int DAT_001d12b4;
extern float DAT_001d12b8;
extern char s_SE_Kokko_V_ANGLY_001d12a0[];

// USA 001D1228 <- EU 001D1228 (Ghidra, non-matching)
// GLOBAL DAT_001d1298 int
// GLOBAL DAT_001d129c int *
// GLOBAL DAT_001d12b4 int
// GLOBAL DAT_001d12b8 float
// GLOBAL s_SE_Kokko_V_ANGLY_001d12a0 string

undefined4 func_001D1228(int *param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  iVar1 = DAT_001d1298;
  param_1[0xf7] = DAT_001d1298;
  param_1[0xf8] = iVar1;
  param_1[0xf9] = iVar1;
  *(undefined1 *)(param_1[0x15c] + 0x61) = 0;
  func_004EAF08(*DAT_001d129c,1);
  local_c = s_SE_Kokko_V_ANGLY_001d12a0;
  local_10 = DAT_001d12b4;
  func_00150A84(param_1,&local_10,0);
  return func_001CFEF4((int)param_1,6,DAT_001d12b8);
}


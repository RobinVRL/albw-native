#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_001CFEF4(int param_1,undefined4 param_2,float fparam_0);
extern int DAT_001d1324;
extern int DAT_001d1328;
extern float DAT_001d132c;
extern int DAT_001d1330;
extern int DAT_001d1348;
extern char s_SE_Kokko_V_ANGLY_001d1334[];

// USA 001D12BC <- EU 001D12BC (Ghidra, non-matching)
// GLOBAL DAT_001d1324 int
// GLOBAL DAT_001d1328 int
// GLOBAL DAT_001d132c float
// GLOBAL DAT_001d1330 int
// GLOBAL DAT_001d1348 int
// GLOBAL s_SE_Kokko_V_ANGLY_001d1334 string

undefined4 func_001D12BC(int *param_1)

{
  float fparam_0;
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  param_1[0x171] = DAT_001d1324;
  fparam_0 = DAT_001d132c;
  param_1[0xf8] = DAT_001d1328;
  func_001CFEF4((int)param_1,6,fparam_0);
  iVar1 = DAT_001d1330;
  *(undefined1 *)((int)param_1 + 0x391) = 1;
  local_10 = DAT_001d1348;
  param_1[0xeb] = iVar1;
  local_c = s_SE_Kokko_V_ANGLY_001d1334;
  return func_00150A84(param_1,&local_10,0);
}


#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_004FB4E0(int param_1,float fparam_0);
extern undefined DAT_001b2ab0;
extern int DAT_001b2ac8;
extern char s__SE_Stalfos_WAKE_UP_001b2ab3[];
extern undefined4 _DAT_001b2ab0;

// USA 001B2A74 <- EU 001B2A74 [EDITED REGION: check by hand] (Ghidra, non-matching)
// GLOBAL DAT_001b2ab0 undefined
// GLOBAL DAT_001b2ac8 int

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_001B2A74(int *param_1)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  func_004FB4E0((int)param_1,ALBW_AS_F32(_DAT_001b2ab0));
  local_c = s__SE_Stalfos_WAKE_UP_001b2ab3 + 1;
  local_10 = DAT_001b2ac8;
  return func_00150A84(param_1,&local_10,0);
}


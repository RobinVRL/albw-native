#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_004A8304(undefined4 param_1,int param_2);
extern int DAT_001c3034;
extern undefined4 *DAT_001c3038;
extern int DAT_001c3050;
extern char s_SE_Signboard_BURN_001c303c[];

// USA 001C2FE4 <- EU 001C2FE4 (Ghidra, non-matching)
// GLOBAL DAT_001c3034 int
// GLOBAL DAT_001c3038 undefined4 *
// GLOBAL DAT_001c3050 int
// GLOBAL s_SE_Signboard_BURN_001c303c string

undefined4 func_001C2FE4(int *param_1)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  param_1[0x1fc] = DAT_001c3034;
  func_004A8304(*DAT_001c3038,param_1[0x1ef]);
  local_c = s_SE_Signboard_BURN_001c303c;
  local_10 = DAT_001c3050;
  return func_00150A84(param_1,&local_10,0);
}


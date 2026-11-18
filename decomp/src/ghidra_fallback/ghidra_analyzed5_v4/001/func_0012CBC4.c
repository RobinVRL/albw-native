#include "ghidra_types.h"

extern int func_00231448(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_00532F70(int param_1,int *param_2,undefined4 param_3,int param_4);
extern undefined DAT_0012cc18;
extern int DAT_0012cc28;
extern char s__SE_S_DECIDE_0012cc1b[];
extern undefined4 _DAT_0012cc18;

// USA 0012CBC4 <- EU 0012CBC4 (Ghidra, non-matching)
// GLOBAL DAT_0012cc18 undefined
// GLOBAL DAT_0012cc28 int

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_0012CBC4(int param_1)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  func_00231448(param_1 + 0x50);
  func_00231448(param_1 + 0x44);
  func_002317C0((undefined2 *)(param_1 + 0x5c),ALBW_AS_F32(_DAT_0012cc18));
  local_10 = DAT_0012cc28;
  local_c = s__SE_S_DECIDE_0012cc1b + 1;
  return func_00532F70(param_1,&local_10,0,0);
}


#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_003252B8(int param_1,int param_2,float fparam_0);
extern int DAT_00335180;
extern char s_SE_PushPullStatue_MOVE_00335168[];

// USA 00335138 <- EU 00335114 (Ghidra, non-matching)
// GLOBAL DAT_00335180 int
// GLOBAL s_SE_PushPullStatue_MOVE_00335168 string

undefined4 func_00335138(int *param_1)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  *(undefined1 *)(param_1 + 0x133) = 0;
  *(undefined1 *)((int)param_1 + 0x531) = 0;
  func_003252B8((int)param_1,(int)(char)param_1[0x124],ALBW_AS_F32(param_1[0x12a]));
  local_c = s_SE_PushPullStatue_MOVE_00335168;
  local_10 = DAT_00335180;
  return func_00150A84(param_1,&local_10,0);
}


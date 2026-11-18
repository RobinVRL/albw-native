#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_003252B8(int param_1,int param_2,float fparam_0);
extern int func_0054E3D8(int *param_1,float *param_2,int param_3,float fparam_0);
extern undefined DAT_003352fc;
extern int DAT_00335318;
extern char s__SE_PushPullStatue_MOVE_003352ff[];
extern undefined4 _DAT_003352fc;

// USA 003352C4 <- EU 003352A0 (Ghidra, non-matching)
// GLOBAL DAT_003352fc undefined
// GLOBAL DAT_00335318 int

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_003352C4(int *param_1)

{
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  func_0054E3D8(param_1,(float *)(param_1 + 0x11e),(int)(char)param_1[0x124],ALBW_AS_F32(_DAT_003352fc));
  func_003252B8((int)param_1,(int)(char)param_1[0x124],ALBW_AS_F32(param_1[0x12a]));
  local_14 = s__SE_PushPullStatue_MOVE_003352ff + 1;
  local_18 = DAT_00335318;
  return func_00150A84(param_1,&local_18,0);
}


#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_003252B8(int param_1,int param_2,float fparam_0);
extern int DAT_0035cd38;
extern char s_SE_WaterMoveStatue_MOVE_0035cd20[];

// USA 0035CCFC <- EU 0035CCD8 (Ghidra, non-matching)
// GLOBAL DAT_0035cd38 int
// GLOBAL s_SE_WaterMoveStatue_MOVE_0035cd20 string

undefined4 func_0035CCFC(int *param_1)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  func_003252B8((int)param_1,(int)(char)param_1[0x124],ALBW_AS_F32(param_1[0x12a]));
  local_c = s_SE_WaterMoveStatue_MOVE_0035cd20;
  local_10 = DAT_0035cd38;
  return func_00150A84(param_1,&local_10,0);
}


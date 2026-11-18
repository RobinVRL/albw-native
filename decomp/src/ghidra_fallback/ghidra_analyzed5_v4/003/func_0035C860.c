#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int DAT_0035c884;
extern char s_SE_WaterMoveStatue_REBONE_0035c868[];

// USA 0035C860 <- EU 0035C83C (Ghidra, non-matching)
// GLOBAL DAT_0035c884 int
// GLOBAL s_SE_WaterMoveStatue_REBONE_0035c868 string

undefined4 func_0035C860(int *param_1)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  local_c = s_SE_WaterMoveStatue_REBONE_0035c868;
  local_10 = DAT_0035c884;
  return func_00150A84(param_1,&local_10,0);
}


#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int DAT_00153874;
extern char s_SE_Bubble_BURN_00153864[];

// USA 0015381C <- EU 00153820 (Ghidra, non-matching)
// GLOBAL DAT_00153874 int
// GLOBAL s_SE_Bubble_BURN_00153864 string

undefined4 func_0015381C(int *param_1)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  func_004FC07C((int)param_1,4,0xffffffff,0);
  local_c = s_SE_Bubble_BURN_00153864;
  local_10 = DAT_00153874;
  return func_00150A84(param_1,&local_10,0);
}


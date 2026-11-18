#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int DAT_0019104c;
extern char s_SE_IceBlock_MELT_00191038[];

// USA 0019100C <- EU 0019100C (Ghidra, non-matching)
// GLOBAL DAT_0019104c int
// GLOBAL s_SE_IceBlock_MELT_00191038 string

undefined4 func_0019100C(int *param_1)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  local_c = s_SE_IceBlock_MELT_00191038;
  local_10 = DAT_0019104c;
  return func_00150A84(param_1,&local_10,0);
}


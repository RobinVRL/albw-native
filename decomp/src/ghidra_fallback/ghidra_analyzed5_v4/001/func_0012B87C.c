#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int DAT_0012b8d0;
extern char s_SE_Pamet_LAND_FOOTS_0012b8e8[];
extern char s_SE_Pamet_LAND_SHELL_0012b8d4[];

// USA 0012B87C <- EU 0012B87C (Ghidra, non-matching)
// GLOBAL DAT_0012b8d0 int
// GLOBAL s_SE_Pamet_LAND_FOOTS_0012b8e8 string
// GLOBAL s_SE_Pamet_LAND_SHELL_0012b8d4 string

undefined4 func_0012B87C(int *param_1)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  local_10 = DAT_0012b8d0;
  if (param_1[0xe8] == param_1[0x238]) {
    local_c = s_SE_Pamet_LAND_SHELL_0012b8d4;
    return func_00150A84(param_1,&local_10,0);
  }
  local_c = s_SE_Pamet_LAND_FOOTS_0012b8e8;
  return func_00150A84(param_1,&local_10,0);
}


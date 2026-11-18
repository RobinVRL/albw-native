#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0066B94C(undefined4 *param_1,undefined1 param_2);
extern int DAT_00513d3c;
extern char s_SE_KinSta_GET_IN_WATER_00513d24[];

// USA 00513CFC <- EU 00513CD4 (Ghidra, non-matching)
// GLOBAL DAT_00513d3c int
// GLOBAL s_SE_KinSta_GET_IN_WATER_00513d24 string

int * func_00513CFC(int *param_1)

{
  int *piVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  piVar1 = param_1 + 0x123;
  if (0x1e < param_1[0x123]) {
    func_0066B94C(piVar1,9);
    local_c = s_SE_KinSta_GET_IN_WATER_00513d24;
    local_10 = DAT_00513d3c;
    piVar1 = (int *)func_00150A84(param_1,&local_10,0);
  }
  return piVar1;
}


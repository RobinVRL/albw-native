#include "ghidra_types.h"

extern int func_0052FCA4(int param_1,undefined4 *param_2,int *param_3);
extern undefined4 DAT_005841ac;

// USA 005841A8 <- EU 00584180 (Ghidra, non-matching)
// GLOBAL DAT_005841ac undefined4

int * func_005841A8(int param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(undefined4 *)(albw_frame + 0x0))
  #define local_c (*(undefined4 *)(albw_frame + 0x4))
  local_10 = DAT_005841ac;
  local_c = param_2;
  piVar1 = func_0052FCA4(param_1 + 0x3dbbc,&local_10,param_3);
  return piVar1;
}


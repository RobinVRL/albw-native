#include "ghidra_types.h"

extern int func_003C9A84(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,int param_6);
extern int func_00561354(int param_1);

// USA 003C90F8 <- EU 003C90D4 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4
// PARAM param_6 Stack[0x4]:4 int

undefined4 func_003C90F8(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,int param_6)

{
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 ((int *)(albw_frame + 0x0))
  local_20[0] = func_00561354(param_1);
  return func_003C9A84(local_20,param_2,param_3,param_4,param_5,param_6);
}


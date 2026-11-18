#include "ghidra_types.h"

extern int func_003C9B08(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,int param_6,undefined4 param_7);
extern int func_00561354(int param_1);

// USA 003C91C0 <- EU 003C919C (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4
// PARAM param_6 Stack[0x4]:4 int
// PARAM param_7 Stack[0x8]:4 uint

undefined4 func_003C91C0(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,int param_6,uint param_7)

{
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_24 ((int *)(albw_frame + 0xc))
  local_24[0] = func_00561354(param_1);
  return func_003C9B08(local_24,param_2,param_3,param_4,param_5,param_6,
                param_7 & 0xff | (param_7 & 0xff) << 0x10);
}


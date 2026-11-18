#include "ghidra_types.h"

extern int func_003C9B08(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,int param_6,undefined4 param_7);
extern int func_00561354(int param_1);

// USA 003C9138 <- EU 003C9114 (Ghidra, non-matching)

undefined4 func_003C9138(int param_1,undefined4 param_2)

{
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_14 (*(int *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  local_14 = func_00561354(param_1);
  return func_003C9B08(&local_14,&uStack_10,0,0,&uStack_10,0,0x10001);
}


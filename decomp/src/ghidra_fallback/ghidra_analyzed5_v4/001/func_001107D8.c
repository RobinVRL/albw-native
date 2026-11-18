#include "ghidra_types.h"

extern int func_00110DF0(int *param_1,int param_2,int *param_3,int param_4,uint param_5,int param_6);
extern int func_00111008(int *param_1,uint *param_2);

// USA 001107D8 <- EU 001107D8 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4

undefined4 func_001107D8(int *param_1,int param_2,uint *param_3,undefined4 param_4,undefined4 param_5)

{
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 ((int *)(albw_frame + 0x8))
  #define local_1c (*(undefined4 *)(albw_frame + 0x14))
  local_28[0] = func_00111008(*(int **)(*(int *)(param_2 + 0xc) + 0xc),param_3);
  if (local_28[0] == 0) {
    local_28[0] = 0;
  }
  local_28[1] = 0;
  local_28[2] = param_4;
  local_1c = param_5;
  return func_00110DF0(param_1,param_2,local_28,*(int *)(param_2 + 0x24),*(uint *)(param_2 + 0x28),
                *(int *)(param_2 + 0x2c));
}


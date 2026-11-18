#include "ghidra_types.h"

extern int func_00110DF0(int *param_1,int param_2,int *param_3,int param_4,uint param_5,int param_6);
extern int func_00111008(int *param_1,uint *param_2);

// USA 004A1B9C <- EU 004A1B74 (Ghidra, non-matching)

undefined4 func_004A1B9C(int *param_1,int param_2,uint *param_3)

{
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 ((int *)(albw_frame + 0x0))
  local_20[0] = func_00111008(*(int **)(*(int *)(param_2 + 0xc) + 0xc),param_3);
  if (local_20[0] == 0) {
    local_20[0] = 0;
  }
  local_20[1] = 0;
  local_20[2] = 0;
  local_20[3] = 0;
  return func_00110DF0(param_1,param_2,local_20,*(int *)(param_2 + 0x24),*(uint *)(param_2 + 0x28),
                *(int *)(param_2 + 0x2c));
}


#include "ghidra_types.h"

extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern uint *DAT_0029f0fc;

// USA 0029F0D8 <- EU 0029F0B4 (Ghidra, non-matching)
// GLOBAL DAT_0029f0fc uint *

undefined4 func_0029F0D8(int param_1)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 ((uint *)(albw_frame + 0x0))
  local_10[0] = *DAT_0029f0fc;
  local_10[1] = DAT_0029f0fc[1];
  return func_0014E2A0(param_1,*(undefined4 *)(param_1 + 0x420),param_1 + 0x410,
                local_10[*(int *)(param_1 + 0x424)],param_1 + 0x410,0);
}


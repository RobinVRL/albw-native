#include "ghidra_types.h"

extern int func_00110988(int *param_1,int param_2,byte *param_3);
extern int func_00110AEC(int param_1);
extern int func_00110B44(int *param_1,uint *param_2,uint param_3,uint param_4);

// USA 00110244 <- EU 00110244 (Ghidra, non-matching)

undefined4 func_00110244(int *param_1,int param_2,uint *param_3,undefined4 param_4)

{
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 ((byte *)(albw_frame + 0x8))
  #define local_24 (*(int *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x14))
  #define local_18 (*(undefined1 *)(albw_frame + 0x18))
  local_20 = 0;
  uStack_1c = 0xffffffff;
  local_28[0] = 0;
  local_28[1] = 0;
  local_28[2] = 0;
  local_28[3] = 0;
  local_24 = 0;
  local_18 = 0;
  local_24 = func_00110B44(*(int **)(*(int *)(param_2 + 0xc) + 0xc),param_3,
                           *(uint *)(param_2 + 0x1c),*(uint *)(param_2 + 0x20));
  local_20 = param_4;
  func_00110AEC((int)local_28);
  return func_00110988(param_1,param_2,local_28);
}


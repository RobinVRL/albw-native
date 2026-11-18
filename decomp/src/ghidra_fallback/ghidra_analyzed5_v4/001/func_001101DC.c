#include "ghidra_types.h"

extern int func_001108B0(int *param_1,int param_2,int param_3);
extern int func_00110AEC(int param_1);
extern int func_00110B44(int *param_1,uint *param_2,uint param_3,uint param_4);

// USA 001101DC <- EU 001101DC (Ghidra, non-matching)

undefined4 func_001101DC(int *param_1,int param_2,uint *param_3,undefined4 param_4)

{
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(int *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x14))
  #define local_18 (*(undefined1 *)(albw_frame + 0x18))
  local_20 = 0;
  uStack_1c = 0xffffffff;
  local_28 = 0;
  local_24 = 0;
  local_18 = 0;
  local_24 = func_00110B44(*(int **)(*(int *)(param_2 + 0xc) + 0xc),param_3,
                           *(uint *)(param_2 + 0x1c),*(uint *)(param_2 + 0x20));
  local_20 = param_4;
  func_00110AEC((int)&local_28);
  return func_001108B0(param_1,param_2,(int)&local_28);
}


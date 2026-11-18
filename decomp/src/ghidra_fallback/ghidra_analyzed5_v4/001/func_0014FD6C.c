#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0014EC00(int param_1,undefined4 *param_2,undefined4 param_3,int param_4);

// USA 0014FD6C <- EU 0014FD6C (Ghidra, non-matching)

int func_0014FD6C(int param_1,float *param_2,undefined4 param_3)

{
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  local_18 = *(float *)(param_1 + 0x3d0);
  uStack_14 = *(undefined4 *)(param_1 + 0x3d4);
  uStack_10 = *(undefined4 *)(param_1 + 0x3d8);
  func_00115C54(&local_18,&local_18,param_2);
  if (*(int *)(param_1 + 0x3a0) != 0) {
    param_1 = func_0014EC00(param_1,&local_18,param_3,
                            (int)(char)*(undefined2 *)(*(int *)(param_1 + 0x3a0) + 0xc));
  }
  return param_1;
}


#include "ghidra_types.h"

extern int func_00323994(undefined1 *param_1);
extern int func_003A53B0(int *param_1,undefined1 param_2);
extern int func_00503180(int *param_1,int param_2,undefined1 *param_3,int *param_4);

// USA 001E6A6C <- EU 001E6A6C (Ghidra, non-matching)

undefined4 func_001E6A6C(int param_1,int *param_2)

{
  undefined4 uVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define auStack_10 ((undefined1 *)(albw_frame + 0x0))
  func_003A53B0((int *)(param_1 + 0x5fc),0);
  func_00323994(auStack_10);
  uVar1 = func_00503180((int *)(param_1 + 0x478),param_1 + 0x75c,auStack_10,param_2);
  return uVar1;
}


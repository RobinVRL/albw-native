#include "ghidra_types.h"

extern int func_00352128(int param_1,int *param_2,uint *param_3);
extern int func_004A2F38(int param_1,undefined4 *param_2);
extern uint *DAT_002ae758;

// USA 002AE72C <- EU 002AE708 (Ghidra, non-matching)
// GLOBAL DAT_002ae758 uint *

void func_002AE72C(int param_1,undefined4 *param_2)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(int *)(albw_frame + 0x4))
  local_10 = 0;
  func_00352128(param_1 + 0x324,&local_10,DAT_002ae758);
  if ((local_10 != 0) && (*(int *)(local_10 + 0x1c) == local_c)) {
    func_004A2F38(local_10,param_2);
  }
  return;
}


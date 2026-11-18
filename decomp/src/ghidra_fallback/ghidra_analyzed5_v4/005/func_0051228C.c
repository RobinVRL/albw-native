#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern undefined4 DAT_005122b8;
extern int DAT_005122bc;

// USA 0051228C <- EU 00512264 (Ghidra, non-matching)
// GLOBAL DAT_005122b8 undefined4
// GLOBAL DAT_005122bc int

undefined4 func_0051228C(int *param_1,int param_2)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(undefined4 *)(albw_frame + 0x4))
  if (param_2 != 0) {
    (**(code **)(param_1[200] + 0x30))(param_1 + 200);
  }
  *(undefined1 *)((int)param_1 + 0x2d7) = 1;
  local_c = DAT_005122b8;
  local_10 = DAT_005122bc;
  return func_00150A84(param_1,&local_10,0);
}


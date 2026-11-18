#include "ghidra_types.h"


// USA 0048A16C <- EU 0048A144 (Ghidra, non-matching)

undefined4 func_0048A16C(int param_1)

{
  int *piVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_8 ((undefined4 *)(albw_frame + 0x8))
  piVar1 = *(int **)(param_1 + 0x10);
  local_8[0] = 0;
  if ((piVar1 != (int *)0x0) && (local_8[0] = 0, (char)piVar1[0x13] != '\0')) {
    (**(code **)(*piVar1 + 0x48))(piVar1,local_8,param_1);
  }
  return local_8[0];
}


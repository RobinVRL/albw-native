#include "ghidra_types.h"

extern int func_0056137C(uint *param_1,uint *param_2);

// USA 0049991C <- EU 004998F4 (Ghidra, non-matching)

int func_0049991C(int param_1,uint *param_2,int param_3)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(uint *)(albw_frame + 0x8))
  #define iStack_14 (*(int *)(albw_frame + 0xc))
  local_18 = 0;
  iStack_14 = 0;
  iVar1 = func_0056137C((uint *)(param_3 + 0x20),&local_18);
  *(int *)(param_1 + 0x50) = iVar1;
  if (iStack_14 < 0) {
    iVar1 = 0;
  }
  else {
    *param_2 = local_18;
    iVar1 = (*(int *)(param_1 + 0x50) >> 0x1f) + 1;
  }
  return iVar1;
}


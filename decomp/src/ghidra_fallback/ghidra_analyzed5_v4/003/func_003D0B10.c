#include "ghidra_types.h"


// USA 003D0B10 <- EU 003D0AEC (Ghidra, non-matching)

int func_003D0B10(int *param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define auStack_14 ((undefined1 *)(albw_frame + 0xc))
  (**(code **)(*param_1 + 8))(param_1,param_1[1],10,8,auStack_14);
  iVar1 = (**(code **)(*param_1 + 0x30))(param_1,param_1 + 4,0x18c,param_1[1],1,0x14);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*param_1 + 0x34))(param_1,param_1 + 4,0x18c,auStack_14,param_1[1],1,0x12);
  }
  return iVar1;
}


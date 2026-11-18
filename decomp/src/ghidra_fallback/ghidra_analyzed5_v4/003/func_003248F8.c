#include "ghidra_types.h"


// USA 003248F8 <- EU 003248D4 (Ghidra, non-matching)

undefined4 func_003248F8(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_1[2] & 1 << (*(ushort *)(param_2 + 0x20) & 0x1f)) == 0) {
    if (ALBW_AS_F32(param_1[1]) < *(float *)(param_2 + 0x1c)) {
      param_1[1] = ALBW_AS_U32(*(float *)(param_2 + 0x1c));
      *param_1 = *(undefined4 *)(param_2 + 0x28);
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


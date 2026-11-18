#include "ghidra_types.h"


// USA 003248F0 <- EU 003248CC (Ghidra, non-matching)

undefined4 func_003248F0(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x520);
  if ((puVar1[2] & 1 << (*(ushort *)(param_2 + 0x20) & 0x1f)) == 0) {
    if (ALBW_AS_F32(puVar1[1]) < *(float *)(param_2 + 0x1c)) {
      puVar1[1] = ALBW_AS_U32(*(float *)(param_2 + 0x1c));
      *puVar1 = *(undefined4 *)(param_2 + 0x28);
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


#include "ghidra_types.h"

extern int func_0010AA9C(void);

// USA 003DF6CC <- EU 003DF6AC (Ghidra, non-matching)

undefined4 func_003DF6CC(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  
  iVar1 = func_0010AA9C();
  uVar3 = 0;
  if (iVar1 != 0) {
    puVar2 = *(uint **)(param_1 + (*(ushort *)(param_1 + 0x131a) & 1) * 0x60 + param_2 * 4 + 0x10b0)
    ;
    if (*(short *)(*(int *)(param_1 + (uint)*(ushort *)(param_1 + 0x131c) * 0x60 + param_2 * 4 +
                           0x1170) + 8) == *(short *)(param_3 + 0x12)) {
      *(short *)((int)puVar2 + 0xbe) = *(short *)(param_3 + 0x12);
      *(ushort *)(puVar2 + 0x2f) =
           (ushort)puVar2[0x2f] & 0xfffd | ((short)*(char *)(param_3 + 0x10) & 1U) << 1;
      puVar2[0x2c] = *(uint *)(param_3 + 4) >> 0x10 | *(uint *)(param_3 + 4) << 0x10;
      *puVar2 = *puVar2 | 8;
    }
    uVar3 = 1;
  }
  return uVar3;
}


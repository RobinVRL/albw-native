#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);

// USA 00405A44 <- EU 00405A24 (Ghidra, non-matching)

uint func_00405A44(int param_1,uint *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  bVar3 = *(int *)(param_1 + 0xb4) != 0;
  uVar2 = param_3;
  if (bVar3) {
    uVar2 = *(uint *)(param_1 + 0xa4);
  }
  if (bVar3 && uVar2 != 0) {
    uVar1 = 0;
    if (*(short *)(param_1 + 0xcc) != 0) {
      uVar1 = (uint)(ushort)(*(short *)(param_1 + 0xcc) - 1);
    }
    if (param_3 < uVar1) {
      if (uVar1 - param_3 < param_4) {
        param_4 = uVar1 - param_3;
      }
      func_0010E3C4((uint *)(uVar2 + param_3 * 2),param_2,param_4 << 1);
      if (**(short **)(param_1 + 0xa4) == 0) {
        *(undefined2 *)(param_1 + 0xce) = 0;
      }
      else {
        *(short *)(param_1 + 0xce) = (short)param_3 + (short)param_4;
      }
      *(undefined2 *)(*(int *)(param_1 + 0xa4) + (uint)*(ushort *)(param_1 + 0xce) * 2) = 0;
      *(byte *)(param_1 + 0xf4) = *(byte *)(param_1 + 0xf4) | 4;
      return param_4 & 0xffff;
    }
  }
  return 0;
}


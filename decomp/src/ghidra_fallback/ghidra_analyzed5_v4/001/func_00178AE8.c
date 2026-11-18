#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern void *func_0010E74C();

// USA 00178AE8 <- EU 00178AE8 (Ghidra, non-matching)

uint * func_00178AE8(int param_1,uint *param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  float in_s0;
  
  if (param_4 != 0) {
    uVar1 = (uint)*(ushort *)(param_1 + 0x20) - ((int)param_2 - *(int *)(param_1 + 8));
    if (0 < (int)uVar1) {
      func_0010E74C((uint *)((int)param_2 + param_4),param_2,uVar1,in_s0);
    }
    func_0010E3C4(param_2,param_3,param_4);
    *(short *)(param_1 + 0x20) = *(short *)(param_1 + 0x20) + (short)param_4;
    return (uint *)((int)param_2 + param_4);
  }
  return param_2;
}


#include "ghidra_types.h"

extern int func_002BDDA4(int param_1);
extern int func_00532554(int param_1,uint param_2);

// USA 002BC7A4 <- EU 002BC780 (Ghidra, non-matching)

void func_002BC7A4(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = func_002BDDA4(param_1);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)func_00532554((int)puVar1,(int)*(short *)(param_1 + 0x2e));
    *(undefined4 *)(param_1 + 0x920) = *puVar1;
    *(undefined4 *)(param_1 + 0x924) = puVar1[1];
    *(undefined4 *)(param_1 + 0x928) = puVar1[2];
  }
  *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_1 + 0x920);
  *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_1 + 0x924);
  *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_1 + 0x928);
  return;
}


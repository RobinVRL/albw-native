#include "ghidra_types.h"

extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_00401D90(int param_1,uint *param_2);

// USA 0041FFA0 <- EU 0041FF80 (Ghidra, non-matching)

uint * func_0041FFA0(int param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  
  if (param_2 != (uint *)0x0) {
    if (*(char *)(param_1 + 0x30) != '\0') {
      param_2 = (uint *)func_00401D90(param_1,param_2);
    }
    *(undefined1 *)(param_1 + 0x35) = 0;
    *(undefined1 *)(param_1 + 0x31) = 0;
    *(undefined1 *)(param_1 + 0x32) = 0;
    *(undefined1 *)(param_1 + 0x33) = 0;
    *(undefined1 *)(param_1 + 0x34) = 0;
    if ((param_3 & 1) == 0) {
      uVar1 = *(uint *)(param_1 + 0x1c);
      func_00110D44(param_2,*(byte **)(param_1 + 0x18),uVar1);
      param_2 = (uint *)((uVar1 & 0xfffffffc) + (int)param_2);
    }
    return param_2;
  }
  return (uint *)0x0;
}


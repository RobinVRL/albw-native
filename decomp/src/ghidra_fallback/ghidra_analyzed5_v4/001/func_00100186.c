#include "ghidra_types.h"

extern int func_00300028(uint *param_1);
extern int func_00300054(uint *param_1);

// USA 00100186 <- EU 00100186 (Ghidra, function missing from the decomp table)

undefined4 func_00100186(uint *param_1,undefined1 *param_2,uint param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  
  if (param_3 == 1) {
    uVar1 = 1;
  }
  else {
    if ((int)(*param_1 << 0x1a) < 0) {
      param_3 = param_1[7];
    }
    for (uVar1 = 0; (uVar1 < param_3 && (param_2[uVar1] != '\0')); uVar1 = uVar1 + 1) {
    }
  }
  puVar2 = param_2 + uVar1;
  param_1[6] = param_1[6] - uVar1;
  param_1[8] = param_1[8] + uVar1;
  func_00300028(param_1);
  for (; param_2 < puVar2; param_2 = param_2 + 1) {
    (*(code *)param_1[1])(*param_2,param_1[2]);
  }
  return func_00300054(param_1);
}


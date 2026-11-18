#include "ghidra_types.h"

extern int func_001000C0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern int func_0010C1B8(undefined4 param_1,undefined4 param_2,undefined4 param_3);

// USA 00100048 <- EU 00100048 (Ghidra, non-matching)

undefined4 func_00100048(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 in_r1;
  code *pcVar2;
  undefined4 in_r2;
  undefined8 uVar3;
  
  puVar1 = func_001000C0(param_1,in_r1,in_r2);
  pcVar2 = (code *)puVar1[4];
  if (pcVar2 == (code *)0x0) {
    uVar3 = (*(code *)puVar1[2])();
  }
  else {
    in_r2 = 0;
    puVar1[4] = 0;
    uVar3 = (*pcVar2)();
  }
                    /* WARNING: Subroutine does not return */
  return func_0010C1B8((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),in_r2);
}


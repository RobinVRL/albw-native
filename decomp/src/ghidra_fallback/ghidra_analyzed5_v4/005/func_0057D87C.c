#include "ghidra_types.h"

extern undefined4 *DAT_0057d8c0;

// USA 0057D87C <- EU 0057D854 (Ghidra, non-matching)
// GLOBAL DAT_0057d8c0 undefined4 *

undefined4 func_0057D87C(char *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  code *pcVar3;
  
  cVar1 = *param_1;
  uVar2 = 0;
  if (cVar1 == '\x01') {
    pcVar3 = (code *)*DAT_0057d8c0;
  }
  else {
    if (cVar1 == '\x02') {
      uVar2 = (**(code **)(param_1 + 4))(param_2);
      return uVar2;
    }
    if (cVar1 != '\x03') {
      return 0;
    }
    pcVar3 = (code *)DAT_0057d8c0[1];
  }
  if (pcVar3 != (code *)0x0) {
    uVar2 = (*pcVar3)(*(undefined4 *)(param_1 + 4));
  }
  return uVar2;
}


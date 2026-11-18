#include "ghidra_types.h"

extern int func_002D5C70(undefined4 *param_1,int *param_2);
extern undefined4 DAT_0034af88;
extern undefined4 DAT_0034af8c;

// USA 0034AF60 <- EU 0034AF3C (Ghidra, non-matching)
// GLOBAL DAT_0034af88 undefined4
// GLOBAL DAT_0034af8c undefined4

undefined4 func_0034AF60(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)func_002D5C70(param_1,param_2);
  *puVar2 = DAT_0034af88;
  *(undefined1 *)(puVar2 + 0x1c) = 0;
  *(undefined1 *)((int)puVar2 + 0x71) = 0;
  puVar2[0x1f] = 0;
  *(undefined1 *)(puVar2 + 0x1d) = 0;
  puVar2[0x1e] = 0xffffffff;
  uVar1 = DAT_0034af8c;
  puVar2[0x20] = *(undefined4 *)puVar2[0xf];
  puVar2[0x21] = *(undefined4 *)puVar2[0xf];
  puVar2[0x22] = uVar1;
  return (undefined4)param_1;
}


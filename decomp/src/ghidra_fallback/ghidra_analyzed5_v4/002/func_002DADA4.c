#include "ghidra_types.h"

extern int func_002D5C70(undefined4 *param_1,int *param_2);
extern undefined4 DAT_002dadd8;
extern undefined4 DAT_002daddc;

// USA 002DADA4 <- EU 002DAD80 (Ghidra, non-matching)
// GLOBAL DAT_002dadd8 undefined4
// GLOBAL DAT_002daddc undefined4

undefined4 func_002DADA4(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)func_002D5C70(param_1,param_2);
  uVar1 = DAT_002daddc;
  *puVar2 = DAT_002dadd8;
  puVar2[0x1c] = 0;
  *(undefined1 *)(puVar2 + 0x1d) = 0;
  puVar2[0x1e] = *(undefined4 *)puVar2[0xf];
  puVar2[0x1f] = uVar1;
  puVar2[0x20] = uVar1;
  puVar2[0x21] = uVar1;
  puVar2[0x22] = uVar1;
  puVar2[0x23] = uVar1;
  puVar2[0x24] = uVar1;
  *(undefined1 *)(puVar2 + 0x25) = 0;
  puVar2[0x26] = 0;
  return (undefined4)param_1;
}


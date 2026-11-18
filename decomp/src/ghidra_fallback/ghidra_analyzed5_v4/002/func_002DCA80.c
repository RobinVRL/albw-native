#include "ghidra_types.h"

extern int func_002D5C70(undefined4 *param_1,int *param_2);
extern undefined4 DAT_002dcab4;
extern undefined4 DAT_002dcab8;

// USA 002DCA80 <- EU 002DCA5C (Ghidra, non-matching)
// GLOBAL DAT_002dcab4 undefined4
// GLOBAL DAT_002dcab8 undefined4

undefined4 func_002DCA80(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)func_002D5C70(param_1,param_2);
  uVar1 = DAT_002dcab8;
  *puVar2 = DAT_002dcab4;
  puVar2[0x1c] = 0;
  puVar2[0x1d] = 0;
  puVar2[0x1e] = uVar1;
  puVar2[0x1f] = uVar1;
  puVar2[0x20] = uVar1;
  puVar2[0x21] = uVar1;
  puVar2[0x22] = uVar1;
  puVar2[0x23] = uVar1;
  puVar2[0x24] = uVar1;
  puVar2[0x25] = uVar1;
  puVar2[0x26] = uVar1;
  *(undefined1 *)(puVar2 + 0x27) = 0;
  puVar2[0x28] = 0;
  return (undefined4)param_1;
}


#include "ghidra_types.h"

extern int func_0040071C(undefined4 *param_1,int param_2,undefined4 param_3,float *param_4);
extern undefined4 DAT_0026e834;

// USA 0026E7D4 <- EU 0026E7FC (Ghidra, non-matching)
// GLOBAL DAT_0026e834 undefined4

undefined4 * func_0026E7D4(undefined4 *param_1,int param_2,undefined4 param_3,float *param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)func_0040071C(param_1,param_2,param_3,param_4);
  uVar1 = DAT_0026e834;
  puVar2[0x2c] = 0;
  *puVar2 = uVar1;
  puVar2[0x2d] = 0;
  puVar2[0x2e] = 0;
  puVar2[0x2f] = 0;
  *(undefined1 *)(puVar2 + 0x30) = 0;
  *(undefined1 *)((int)puVar2 + 0xc1) = 0;
  return puVar2;
}


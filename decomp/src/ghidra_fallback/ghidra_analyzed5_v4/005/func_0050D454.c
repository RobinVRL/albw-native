#include "ghidra_types.h"

extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern undefined4 DAT_0050d450;

// USA 0050D454 <- EU 0050D42C (Ghidra, non-matching)
// GLOBAL DAT_0050d450 undefined4

undefined4 * func_0050D454(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = func_0010DA7C(param_1,0,3);
  uVar1 = DAT_0050d450;
  puVar2[4] = 0;
  *puVar2 = uVar1;
  return puVar2;
}


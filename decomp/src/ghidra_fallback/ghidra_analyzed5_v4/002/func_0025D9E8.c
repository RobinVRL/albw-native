#include "ghidra_types.h"

extern int func_0048D088(int param_1,int *param_2,int param_3);
extern undefined4 DAT_0025da24;

// USA 0025D9E8 <- EU 0025DA10 (Ghidra, non-matching)
// GLOBAL DAT_0025da24 undefined4

undefined4 * func_0025D9E8(int param_1,int *param_2,int param_3)

{
  undefined4 *puVar1;
  
  puVar1 = func_0048D088(param_1,param_2,param_3);
  *puVar1 = DAT_0025da24;
  return puVar1;
}


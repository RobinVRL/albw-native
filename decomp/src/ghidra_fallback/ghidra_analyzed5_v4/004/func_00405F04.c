#include "ghidra_types.h"

extern int func_00400254(undefined4 *param_1,int param_2,float *param_3);
extern undefined4 DAT_00405efc;

// USA 00405F04 <- EU 00405EE4 (Ghidra, non-matching)
// GLOBAL DAT_00405efc undefined4

void func_00405F04(undefined4 *param_1,int param_2,undefined4 param_3,float *param_4)

{
  undefined4 *puVar1;
  
  puVar1 = func_00400254(param_1,param_2,param_4);
  *puVar1 = DAT_00405efc;
  return;
}


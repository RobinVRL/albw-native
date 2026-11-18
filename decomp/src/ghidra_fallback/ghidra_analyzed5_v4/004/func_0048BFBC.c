#include "ghidra_types.h"

extern int func_0048BAB8(int param_1,int param_2);
extern int func_004A1520();
extern undefined4 DAT_0048bfc4;
extern int *DAT_0048bfc8;

// USA 0048BFBC <- EU 0048BF94 (Ghidra, non-matching)
// GLOBAL DAT_0048bfc4 undefined4
// GLOBAL DAT_0048bfc8 int *

undefined4 * func_0048BFBC(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = DAT_0048bfc4;
  if (*DAT_0048bfc8 != 0) {
    func_0048BAB8(*DAT_0048bfc8,(int)param_1);
  }
  puVar1 = func_004A1520(param_1);
  return puVar1;
}


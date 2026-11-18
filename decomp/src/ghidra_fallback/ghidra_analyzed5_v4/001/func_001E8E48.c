#include "ghidra_types.h"

extern int func_001E89AC(int param_1);
extern int func_004A1520();
extern undefined4 DAT_001e8e6c;

// USA 001E8E48 <- EU 001E8E48 (Ghidra, non-matching)
// GLOBAL DAT_001e8e6c undefined4

undefined4 * func_001E8E48(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = DAT_001e8e6c;
  func_001E89AC((int)param_1);
  puVar1 = func_004A1520(param_1);
  return puVar1;
}


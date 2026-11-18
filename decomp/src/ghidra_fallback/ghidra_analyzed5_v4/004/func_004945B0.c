#include "ghidra_types.h"

extern int func_0041E100(int param_1);
extern int func_0041E234(undefined4 *param_1);
extern int func_0058FA08();
extern int func_0058FA5C();
extern int DAT_004945d0;

// USA 004945B0 <- EU 00494588 (Ghidra, non-matching)
// GLOBAL DAT_004945d0 int

undefined4 func_004945B0(int *param_1)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = DAT_004945d0 + 0x14;
  *param_1 = DAT_004945d0;
  param_1[8] = iVar2;
  func_0041E100((int)param_1);
  if (param_1[9] != 0) {
    func_0058FA08(param_1[9]);
    param_1[9] = 0;
  }
  puVar1 = func_0041E234(param_1);
  return func_0058FA5C((int)puVar1);
}


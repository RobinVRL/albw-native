#include "ghidra_types.h"

extern int func_001510A4();
extern int func_0036D0E0(int *param_1);
extern int DAT_00337af0;

// USA 00337ADC <- EU 00337AB8 (Ghidra, non-matching)
// GLOBAL DAT_00337af0 int

undefined4 func_00337ADC(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00337af0 + 0x54;
  *param_1 = DAT_00337af0;
  param_1[200] = iVar1;
  func_0036D0E0(param_1 + 0x104);
  func_0036D0E0(param_1 + 0x103);
  return func_001510A4(param_1);
}


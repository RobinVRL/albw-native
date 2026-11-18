#include "ghidra_types.h"

extern int func_004A1520();
extern undefined4 DAT_002df920;
extern undefined4 *DAT_002df924;

// USA 002DF8FC <- EU 002DF8D8 (Ghidra, non-matching)
// GLOBAL DAT_002df920 undefined4
// GLOBAL DAT_002df924 undefined4 *

undefined4 func_002DF8FC(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_002df924;
  *param_1 = DAT_002df920;
  if (param_1 == (undefined4 *)puVar1[1]) {
    puVar1[1] = 0;
    (*(code *)**(undefined4 **)*puVar1)((undefined4 *)*puVar1);
    *puVar1 = 0;
  }
  func_004A1520(param_1);
  return (undefined4)param_1;
}


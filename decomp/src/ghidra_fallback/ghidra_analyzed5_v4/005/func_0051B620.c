#include "ghidra_types.h"

extern int func_004A1520();
extern undefined4 DAT_0051b640;
extern undefined4 *DAT_0051b644;

// USA 0051B620 <- EU 0051B5F8 (Ghidra, non-matching)
// GLOBAL DAT_0051b640 undefined4
// GLOBAL DAT_0051b644 undefined4 *

undefined4 func_0051B620(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0051b644;
  *param_1 = DAT_0051b640;
  if (param_1 == (undefined4 *)puVar1[1]) {
    puVar1[1] = 0;
    (*(code *)**(undefined4 **)*puVar1)((undefined4 *)*puVar1);
    *puVar1 = 0;
  }
  func_004A1520(param_1);
  return (undefined4)param_1;
}


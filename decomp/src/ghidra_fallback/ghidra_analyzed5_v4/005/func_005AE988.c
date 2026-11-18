#include "ghidra_types.h"

extern int func_0010DEB0(undefined4 *param_1);
extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005ae98c;
extern undefined4 DAT_005ae990;
extern undefined4 DAT_005ae994;

// USA 005AE988 <- EU 005AE960 (Ghidra, non-matching)
// GLOBAL DAT_005ae98c undefined4 *
// GLOBAL DAT_005ae990 undefined4
// GLOBAL DAT_005ae994 undefined4

undefined4 func_005AE988(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005ae98c;
  *DAT_005ae98c = 0;
  func_0010DEB0(puVar1);
  return func_005902C0(puVar1);
}


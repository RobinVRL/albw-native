#include "ghidra_types.h"

extern int func_0010DEB0(undefined4 *param_1);
extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005d0cb8;
extern undefined4 DAT_005d0cbc;
extern undefined4 DAT_005d0cc0;

// USA 005D0CB4 <- EU 005D0C8C (Ghidra, non-matching)
// GLOBAL DAT_005d0cb8 undefined4 *
// GLOBAL DAT_005d0cbc undefined4
// GLOBAL DAT_005d0cc0 undefined4

undefined4 func_005D0CB4(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005d0cb8;
  *DAT_005d0cb8 = 0;
  func_0010DEB0(puVar1);
  return func_005902C0(puVar1);
}


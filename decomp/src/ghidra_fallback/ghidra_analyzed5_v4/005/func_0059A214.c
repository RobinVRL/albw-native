#include "ghidra_types.h"

extern int func_0010DEB0(undefined4 *param_1);
extern int func_005902C0(void *param_1);
extern undefined4 *DAT_0059a218;
extern undefined4 DAT_0059a21c;
extern undefined4 DAT_0059a220;

// USA 0059A214 <- EU 0059A1EC (Ghidra, non-matching)
// GLOBAL DAT_0059a218 undefined4 *
// GLOBAL DAT_0059a21c undefined4
// GLOBAL DAT_0059a220 undefined4

undefined4 func_0059A214(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0059a218;
  *DAT_0059a218 = 0;
  func_0010DEB0(puVar1);
  return func_005902C0(puVar1);
}


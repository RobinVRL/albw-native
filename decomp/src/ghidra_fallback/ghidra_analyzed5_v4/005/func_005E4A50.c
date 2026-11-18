#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 DAT_005e4a50;
extern undefined4 DAT_005e4a54;
extern undefined4 DAT_005e4a58;
extern undefined4 DAT_005e4a5c;

// USA 005E4A50 <- EU 005E4A28 (Ghidra, non-matching)
// GLOBAL DAT_005e4a50 undefined4
// GLOBAL DAT_005e4a54 undefined4
// GLOBAL DAT_005e4a58 undefined4
// GLOBAL DAT_005e4a5c undefined4

undefined4 func_005E4A50(void)

{
  return func_005902C0(DAT_005e4a5c);
}


#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005c20a4;
extern undefined4 *DAT_005c20a8;
extern undefined4 DAT_005c20ac;
extern undefined4 DAT_005c20bc;
extern undefined4 DAT_005c20c0;
extern char s_Cm_SkipB_005c20b0[];

// USA 005C208C <- EU 005C2064 (Ghidra, non-matching)
// GLOBAL DAT_005c20a4 undefined4 *
// GLOBAL DAT_005c20a8 undefined4 *
// GLOBAL DAT_005c20ac undefined4
// GLOBAL DAT_005c20bc undefined4
// GLOBAL DAT_005c20c0 undefined4
// GLOBAL s_Cm_SkipB_005c20b0 string

undefined4 func_005C208C(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005c20a4;
  *DAT_005c20a4 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005c20a8;
  *DAT_005c20a8 = 0;
  puVar1[1] = 0;
  puVar1[2] = DAT_005c20ac;
  puVar1[3] = s_Cm_SkipB_005c20b0;
  return func_005902C0(puVar1 + 2);
}


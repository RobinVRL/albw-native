#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005ef9bc;
extern undefined4 *DAT_005ef9c0;
extern undefined4 DAT_005ef9c4;
extern undefined4 DAT_005ef9d0;
extern undefined4 DAT_005ef9d4;
extern char s_Cm_Wipe_005ef9c8[];

// USA 005EF9A4 <- EU 005EF97C (Ghidra, non-matching)
// GLOBAL DAT_005ef9bc undefined4 *
// GLOBAL DAT_005ef9c0 undefined4 *
// GLOBAL DAT_005ef9c4 undefined4
// GLOBAL DAT_005ef9d0 undefined4
// GLOBAL DAT_005ef9d4 undefined4
// GLOBAL s_Cm_Wipe_005ef9c8 string

undefined4 func_005EF9A4(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005ef9bc;
  *DAT_005ef9bc = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ef9c0;
  *DAT_005ef9c0 = 0;
  puVar1[1] = 0;
  puVar1[2] = DAT_005ef9c4;
  puVar1[3] = s_Cm_Wipe_005ef9c8;
  return func_005902C0(puVar1 + 2);
}


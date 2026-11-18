#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005e43f8;
extern undefined4 *DAT_005e43fc;
extern undefined4 DAT_005e4400;
extern undefined4 DAT_005e4418;
extern undefined4 DAT_005e441c;
extern char s_Gm_MaskKinstaBtn_005e4404[];

// USA 005E43E0 <- EU 005E43B8 (Ghidra, non-matching)
// GLOBAL DAT_005e43f8 undefined4 *
// GLOBAL DAT_005e43fc undefined4 *
// GLOBAL DAT_005e4400 undefined4
// GLOBAL DAT_005e4418 undefined4
// GLOBAL DAT_005e441c undefined4
// GLOBAL s_Gm_MaskKinstaBtn_005e4404 string

undefined4 func_005E43E0(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005e43f8;
  *DAT_005e43f8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005e43fc;
  *DAT_005e43fc = 0;
  puVar1[1] = 0;
  puVar1[2] = DAT_005e4400;
  puVar1[3] = s_Gm_MaskKinstaBtn_005e4404;
  return func_005902C0(puVar1 + 2);
}


#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005d0370;
extern undefined4 *DAT_005d0374;
extern undefined4 DAT_005d0388;
extern undefined4 DAT_005d038c;
extern undefined4 DAT_005d0390;
extern undefined4 *DAT_005d0394;
extern char s_Gm_KMapDark_005d0398[];
extern char s_Gm_KMapLight_005d0378[];

// USA 005D0334 <- EU 005D030C (Ghidra, non-matching)
// GLOBAL DAT_005d0370 undefined4 *
// GLOBAL DAT_005d0374 undefined4 *
// GLOBAL DAT_005d0388 undefined4
// GLOBAL DAT_005d038c undefined4
// GLOBAL DAT_005d0390 undefined4
// GLOBAL DAT_005d0394 undefined4 *
// GLOBAL s_Gm_KMapDark_005d0398 string
// GLOBAL s_Gm_KMapLight_005d0378 string

undefined4 func_005D0334(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005d0370;
  *DAT_005d0370 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005d0388;
  puVar1 = DAT_005d0374;
  *DAT_005d0374 = 0;
  puVar1[1] = 0;
  puVar1[3] = s_Gm_KMapLight_005d0378;
  puVar1[2] = uVar2;
  puVar1 = DAT_005d0394;
  DAT_005d0394[1] = s_Gm_KMapDark_005d0398;
  *puVar1 = uVar2;
  return func_005902C0(puVar1);
}


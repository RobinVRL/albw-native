#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005e436c;
extern undefined4 *DAT_005e4370;
extern undefined4 DAT_005e4374;
extern undefined4 DAT_005e4384;
extern undefined4 DAT_005e4388;
extern char s_Cm_HomeBtnB_005e4378[];

// USA 005E4354 <- EU 005E432C (Ghidra, non-matching)
// GLOBAL DAT_005e436c undefined4 *
// GLOBAL DAT_005e4370 undefined4 *
// GLOBAL DAT_005e4374 undefined4
// GLOBAL DAT_005e4384 undefined4
// GLOBAL DAT_005e4388 undefined4
// GLOBAL s_Cm_HomeBtnB_005e4378 string

undefined4 func_005E4354(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005e436c;
  *DAT_005e436c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005e4370;
  *DAT_005e4370 = 0;
  puVar1[1] = 0;
  puVar1[2] = DAT_005e4374;
  puVar1[3] = s_Cm_HomeBtnB_005e4378;
  return func_005902C0(puVar1 + 2);
}


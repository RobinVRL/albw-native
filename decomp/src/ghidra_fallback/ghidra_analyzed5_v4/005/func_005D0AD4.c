#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005d0b14;
extern undefined4 *DAT_005d0b18;
extern undefined4 *DAT_005d0b1c;
extern undefined4 DAT_005d0b28;
extern undefined DAT_005d0b2c;
extern undefined4 DAT_005d0b38;
extern undefined4 DAT_005d0b3c;
extern char s_Decide_005d0b30[];
extern char s_InOut_005d0b20[];

// USA 005D0AD4 <- EU 005D0AAC (Ghidra, non-matching)
// GLOBAL DAT_005d0b14 undefined4 *
// GLOBAL DAT_005d0b18 undefined4 *
// GLOBAL DAT_005d0b1c undefined4 *
// GLOBAL DAT_005d0b28 undefined4
// GLOBAL DAT_005d0b2c undefined
// GLOBAL DAT_005d0b38 undefined4
// GLOBAL DAT_005d0b3c undefined4
// GLOBAL s_Decide_005d0b30 string
// GLOBAL s_InOut_005d0b20 string

undefined4 func_005D0AD4(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005d0b14;
  *DAT_005d0b14 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005d0b18;
  *DAT_005d0b18 = 0;
  puVar1[1] = 0;
  uVar2 = DAT_005d0b28;
  puVar1 = DAT_005d0b1c;
  DAT_005d0b1c[1] = s_InOut_005d0b20;
  *puVar1 = uVar2;
  puVar1[2] = uVar2;
  puVar1[3] = s_InOut_005d0b20;
  puVar1[4] = uVar2;
  puVar1[5] = &DAT_005d0b2c;
  puVar1[6] = uVar2;
  puVar1[7] = s_Decide_005d0b30;
  return func_005902C0(0);
}


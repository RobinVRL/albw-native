#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005ecea0;
extern undefined4 *DAT_005ecea4;
extern undefined4 DAT_005ecea8;
extern undefined4 DAT_005ecebc;
extern undefined4 DAT_005ecec0;
extern char s_Mn_LoadIconT_005eceac[];

// USA 005ECE88 <- EU 005ECE60 (Ghidra, non-matching)
// GLOBAL DAT_005ecea0 undefined4 *
// GLOBAL DAT_005ecea4 undefined4 *
// GLOBAL DAT_005ecea8 undefined4
// GLOBAL DAT_005ecebc undefined4
// GLOBAL DAT_005ecec0 undefined4
// GLOBAL s_Mn_LoadIconT_005eceac string

undefined4 func_005ECE88(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005ecea0;
  *DAT_005ecea0 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ecea4;
  *DAT_005ecea4 = 0;
  puVar1[1] = 0;
  puVar1[2] = DAT_005ecea8;
  puVar1[3] = s_Mn_LoadIconT_005eceac;
  return func_005902C0(puVar1 + 2);
}


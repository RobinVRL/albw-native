#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005eae70;
extern undefined4 *DAT_005eae74;
extern undefined4 DAT_005eae78;
extern undefined4 DAT_005eae8c;
extern undefined4 DAT_005eae90;
extern char s_Cm_LoadIconT_005eae7c[];

// USA 005EAE58 <- EU 005EAE30 (Ghidra, non-matching)
// GLOBAL DAT_005eae70 undefined4 *
// GLOBAL DAT_005eae74 undefined4 *
// GLOBAL DAT_005eae78 undefined4
// GLOBAL DAT_005eae8c undefined4
// GLOBAL DAT_005eae90 undefined4
// GLOBAL s_Cm_LoadIconT_005eae7c string

undefined4 func_005EAE58(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005eae70;
  *DAT_005eae70 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005eae74;
  *DAT_005eae74 = 0;
  puVar1[1] = 0;
  puVar1[2] = DAT_005eae78;
  puVar1[3] = s_Cm_LoadIconT_005eae7c;
  return func_005902C0(puVar1 + 2);
}


#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005f6618;
extern undefined4 *DAT_005f661c;
extern undefined4 DAT_005f6630;
extern undefined4 DAT_005f6634;
extern undefined4 DAT_005f6638;
extern undefined4 *DAT_005f663c;
extern char s_Gm_DemoAButton_005f6620[];
extern char s_T_Action_00_005f6640[];

// USA 005F65DC <- EU 005F65B4 (Ghidra, non-matching)
// GLOBAL DAT_005f6618 undefined4 *
// GLOBAL DAT_005f661c undefined4 *
// GLOBAL DAT_005f6630 undefined4
// GLOBAL DAT_005f6634 undefined4
// GLOBAL DAT_005f6638 undefined4
// GLOBAL DAT_005f663c undefined4 *
// GLOBAL s_Gm_DemoAButton_005f6620 string
// GLOBAL s_T_Action_00_005f6640 string

undefined4 func_005F65DC(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005f6618;
  *DAT_005f6618 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005f6630;
  puVar1 = DAT_005f661c;
  *DAT_005f661c = 0;
  puVar1[1] = 0;
  puVar1[3] = s_Gm_DemoAButton_005f6620;
  puVar1[2] = uVar2;
  puVar1 = DAT_005f663c;
  DAT_005f663c[1] = s_T_Action_00_005f6640;
  *puVar1 = uVar2;
  return func_005902C0(puVar1);
}


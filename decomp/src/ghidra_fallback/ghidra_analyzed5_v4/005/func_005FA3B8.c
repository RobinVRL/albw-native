#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005fa418;
extern undefined4 *DAT_005fa41c;
extern undefined4 *DAT_005fa420;
extern undefined DAT_005fa424;
extern undefined4 DAT_005fa42c;
extern undefined4 DAT_005fa45c;
extern undefined4 DAT_005fa460;
extern char s_Decide_005fa438[];
extern char s_OnOff_005fa430[];
extern char s_ScrollL_005fa454[];
extern char s_ScrollR_005fa44c[];
extern char s_SelectItem_005fa440[];

// USA 005FA3B8 <- EU 005FA390 (Ghidra, non-matching)
// GLOBAL DAT_005fa418 undefined4 *
// GLOBAL DAT_005fa41c undefined4 *
// GLOBAL DAT_005fa420 undefined4 *
// GLOBAL DAT_005fa424 undefined
// GLOBAL DAT_005fa42c undefined4
// GLOBAL DAT_005fa45c undefined4
// GLOBAL DAT_005fa460 undefined4
// GLOBAL s_Decide_005fa438 string
// GLOBAL s_OnOff_005fa430 string
// GLOBAL s_ScrollL_005fa454 string
// GLOBAL s_ScrollR_005fa44c string
// GLOBAL s_SelectItem_005fa440 string

undefined4 func_005FA3B8(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005fa418;
  *DAT_005fa418 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005fa41c;
  *DAT_005fa41c = 0;
  puVar1[1] = 0;
  uVar2 = DAT_005fa42c;
  puVar1 = DAT_005fa420;
  *DAT_005fa420 = DAT_005fa42c;
  puVar1[1] = &DAT_005fa424;
  puVar1[2] = uVar2;
  puVar1[3] = s_OnOff_005fa430;
  puVar1[4] = uVar2;
  puVar1[5] = s_OnOff_005fa430;
  puVar1[6] = uVar2;
  puVar1[7] = s_Decide_005fa438;
  puVar1[8] = uVar2;
  puVar1[9] = s_SelectItem_005fa440;
  puVar1[10] = uVar2;
  puVar1[0xb] = s_ScrollR_005fa44c;
  puVar1[0xc] = uVar2;
  puVar1[0xd] = s_ScrollL_005fa454;
  return func_005902C0(0);
}


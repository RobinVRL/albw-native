#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005c4538;
extern undefined4 *DAT_005c453c;
extern undefined4 *DAT_005c4540;
extern undefined4 DAT_005c4550;
extern undefined4 DAT_005c4578;
extern undefined4 DAT_005c457c;
extern char s_N_ArrowB_00_005c4554[];
extern char s_N_ArrowL_00_005c4560[];
extern char s_N_ArrowR_00_005c456c[];
extern char s_N_ArrowT_00_005c4544[];

// USA 005C44F8 <- EU 005C44D0 (Ghidra, non-matching)
// GLOBAL DAT_005c4538 undefined4 *
// GLOBAL DAT_005c453c undefined4 *
// GLOBAL DAT_005c4540 undefined4 *
// GLOBAL DAT_005c4550 undefined4
// GLOBAL DAT_005c4578 undefined4
// GLOBAL DAT_005c457c undefined4
// GLOBAL s_N_ArrowB_00_005c4554 string
// GLOBAL s_N_ArrowL_00_005c4560 string
// GLOBAL s_N_ArrowR_00_005c456c string
// GLOBAL s_N_ArrowT_00_005c4544 string

undefined4 func_005C44F8(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005c4538;
  *DAT_005c4538 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005c453c;
  *DAT_005c453c = 0;
  puVar1[1] = 0;
  uVar2 = DAT_005c4550;
  puVar1 = DAT_005c4540;
  DAT_005c4540[1] = s_N_ArrowT_00_005c4544;
  *puVar1 = uVar2;
  puVar1[2] = uVar2;
  puVar1[3] = s_N_ArrowB_00_005c4554;
  puVar1[4] = uVar2;
  puVar1[5] = s_N_ArrowL_00_005c4560;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_005c456c;
  return func_005902C0(0);
}


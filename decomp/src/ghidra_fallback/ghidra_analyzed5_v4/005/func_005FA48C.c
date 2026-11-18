#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005fa538;
extern undefined4 *DAT_005fa53c;
extern undefined4 *DAT_005fa540;
extern undefined4 DAT_005fa550;
extern undefined4 DAT_005fa578;
extern undefined4 DAT_005fa57c;
extern undefined4 *DAT_005fa580;
extern undefined4 DAT_005fa598;
extern undefined4 *DAT_005fa59c;
extern undefined4 *DAT_005fa5b8;
extern undefined DAT_005fa5bc;
extern undefined DAT_005fa5c0;
extern undefined4 DAT_005fa5c4;
extern char s_Gm_SRCRecordListIndexT_005fa5a0[];
extern char s_Gm_SRCRecordListT_005fa584[];
extern char s_N_ArrowB_00_005fa554[];
extern char s_N_ArrowL_00_005fa560[];
extern char s_N_ArrowR_00_005fa56c[];
extern char s_N_ArrowT_00_005fa544[];

// USA 005FA48C <- EU 005FA464 (Ghidra, non-matching)
// GLOBAL DAT_005fa538 undefined4 *
// GLOBAL DAT_005fa53c undefined4 *
// GLOBAL DAT_005fa540 undefined4 *
// GLOBAL DAT_005fa550 undefined4
// GLOBAL DAT_005fa578 undefined4
// GLOBAL DAT_005fa57c undefined4
// GLOBAL DAT_005fa580 undefined4 *
// GLOBAL DAT_005fa598 undefined4
// GLOBAL DAT_005fa59c undefined4 *
// GLOBAL DAT_005fa5b8 undefined4 *
// GLOBAL DAT_005fa5bc undefined
// GLOBAL DAT_005fa5c0 undefined
// GLOBAL DAT_005fa5c4 undefined4
// GLOBAL s_Gm_SRCRecordListIndexT_005fa5a0 string
// GLOBAL s_Gm_SRCRecordListT_005fa584 string
// GLOBAL s_N_ArrowB_00_005fa554 string
// GLOBAL s_N_ArrowL_00_005fa560 string
// GLOBAL s_N_ArrowR_00_005fa56c string
// GLOBAL s_N_ArrowT_00_005fa544 string

undefined4 func_005FA48C(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005fa538;
  *DAT_005fa538 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005fa550;
  puVar1 = DAT_005fa53c;
  *DAT_005fa53c = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005fa540;
  DAT_005fa540[1] = s_N_ArrowT_00_005fa544;
  *puVar1 = uVar2;
  puVar1[3] = s_N_ArrowB_00_005fa554;
  puVar1[2] = uVar2;
  puVar1[5] = s_N_ArrowL_00_005fa560;
  puVar1[4] = uVar2;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_005fa56c;
  puVar1 = DAT_005fa580;
  DAT_005fa580[1] = s_Gm_SRCRecordListT_005fa584;
  *puVar1 = uVar2;
  puVar1 = DAT_005fa59c;
  DAT_005fa59c[1] = s_Gm_SRCRecordListIndexT_005fa5a0;
  *puVar1 = uVar2;
  puVar1 = DAT_005fa5b8;
  DAT_005fa5b8[1] = &DAT_005fa5bc;
  *puVar1 = uVar2;
  puVar1[2] = uVar2;
  puVar1[3] = &DAT_005fa5c0;
  return func_005902C0(0);
}


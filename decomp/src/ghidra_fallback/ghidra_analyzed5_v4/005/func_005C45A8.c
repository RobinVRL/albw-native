#include "ghidra_types.h"

extern undefined4 *DAT_005c45f8;
extern undefined4 *DAT_005c45fc;
extern undefined4 DAT_005c460c;
extern undefined4 DAT_005c4634;
extern undefined4 DAT_005c4638;
extern char s_N_ArrowB_00_005c4610[];
extern char s_N_ArrowL_00_005c461c[];
extern char s_N_ArrowR_00_005c4628[];
extern char s_N_ArrowT_00_005c4600[];

// USA 005C45A8 <- EU 005C4580 (Ghidra, non-matching)
// GLOBAL DAT_005c45f8 undefined4 *
// GLOBAL DAT_005c45fc undefined4 *
// GLOBAL DAT_005c460c undefined4
// GLOBAL DAT_005c4634 undefined4
// GLOBAL DAT_005c4638 undefined4
// GLOBAL s_N_ArrowB_00_005c4610 string
// GLOBAL s_N_ArrowL_00_005c461c string
// GLOBAL s_N_ArrowR_00_005c4628 string
// GLOBAL s_N_ArrowT_00_005c4600 string

void func_005C45A8(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar1 = DAT_005c45f8;
  DAT_005c45f8[2] = 0xffffffff;
  puVar1[3] = 0xffffffff;
  puVar1[4] = 0;
  puVar1[5] = 0;
  uVar3 = DAT_005c460c;
  puVar2 = DAT_005c45fc;
  DAT_005c45fc[1] = s_N_ArrowT_00_005c4600;
  *puVar2 = uVar3;
  puVar2[2] = uVar3;
  puVar2[3] = s_N_ArrowB_00_005c4610;
  puVar2[4] = uVar3;
  puVar2[5] = s_N_ArrowL_00_005c461c;
  puVar2[6] = uVar3;
  puVar2[7] = s_N_ArrowR_00_005c4628;
  *puVar1 = 0;
  return;
}


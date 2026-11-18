#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern int DAT_005bd748;
extern undefined4 *DAT_005bd74c;
extern undefined4 *DAT_005bd750;
extern undefined4 DAT_005bd760;
extern undefined4 DAT_005bd788;
extern undefined4 DAT_005bd78c;
extern char s_N_ArrowB_00_005bd764[];
extern char s_N_ArrowL_00_005bd770[];
extern char s_N_ArrowR_00_005bd77c[];
extern char s_N_ArrowT_00_005bd754[];

// USA 005BD708 <- EU 005BD6E0 (Ghidra, non-matching)
// GLOBAL DAT_005bd748 int
// GLOBAL DAT_005bd74c undefined4 *
// GLOBAL DAT_005bd750 undefined4 *
// GLOBAL DAT_005bd760 undefined4
// GLOBAL DAT_005bd788 undefined4
// GLOBAL DAT_005bd78c undefined4
// GLOBAL s_N_ArrowB_00_005bd764 string
// GLOBAL s_N_ArrowL_00_005bd770 string
// GLOBAL s_N_ArrowR_00_005bd77c string
// GLOBAL s_N_ArrowT_00_005bd754 string

undefined4 func_005BD708(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_005bd748;
  *(undefined4 *)(DAT_005bd748 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005bd74c;
  *DAT_005bd74c = 0;
  puVar2[1] = 0;
  uVar3 = DAT_005bd760;
  puVar2 = DAT_005bd750;
  DAT_005bd750[1] = s_N_ArrowT_00_005bd754;
  *puVar2 = uVar3;
  puVar2[2] = uVar3;
  puVar2[3] = s_N_ArrowB_00_005bd764;
  puVar2[4] = uVar3;
  puVar2[5] = s_N_ArrowL_00_005bd770;
  puVar2[6] = uVar3;
  puVar2[7] = s_N_ArrowR_00_005bd77c;
  return func_005902C0(0);
}


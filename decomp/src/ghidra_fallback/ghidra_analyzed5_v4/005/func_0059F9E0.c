#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern int DAT_0059fa20;
extern undefined4 *DAT_0059fa24;
extern undefined4 *DAT_0059fa28;
extern undefined4 DAT_0059fa38;
extern undefined4 DAT_0059fa60;
extern undefined4 DAT_0059fa64;
extern char s_N_ArrowB_00_0059fa3c[];
extern char s_N_ArrowL_00_0059fa48[];
extern char s_N_ArrowR_00_0059fa54[];
extern char s_N_ArrowT_00_0059fa2c[];

// USA 0059F9E0 <- EU 0059F9B8 (Ghidra, non-matching)
// GLOBAL DAT_0059fa20 int
// GLOBAL DAT_0059fa24 undefined4 *
// GLOBAL DAT_0059fa28 undefined4 *
// GLOBAL DAT_0059fa38 undefined4
// GLOBAL DAT_0059fa60 undefined4
// GLOBAL DAT_0059fa64 undefined4
// GLOBAL s_N_ArrowB_00_0059fa3c string
// GLOBAL s_N_ArrowL_00_0059fa48 string
// GLOBAL s_N_ArrowR_00_0059fa54 string
// GLOBAL s_N_ArrowT_00_0059fa2c string

undefined4 func_0059F9E0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_0059fa20;
  *(undefined4 *)(DAT_0059fa20 + 0x10) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x14) = 0xffffffff;
  puVar2 = DAT_0059fa24;
  *DAT_0059fa24 = 0;
  puVar2[1] = 0;
  uVar3 = DAT_0059fa38;
  puVar2 = DAT_0059fa28;
  DAT_0059fa28[1] = s_N_ArrowT_00_0059fa2c;
  *puVar2 = uVar3;
  puVar2[2] = uVar3;
  puVar2[3] = s_N_ArrowB_00_0059fa3c;
  puVar2[4] = uVar3;
  puVar2[5] = s_N_ArrowL_00_0059fa48;
  puVar2[6] = uVar3;
  puVar2[7] = s_N_ArrowR_00_0059fa54;
  return func_005902C0(0);
}


#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern int DAT_005d0000;
extern undefined4 *DAT_005d0004;
extern undefined4 *DAT_005d0008;
extern undefined4 DAT_005d0018;
extern undefined4 DAT_005d0040;
extern undefined4 DAT_005d0044;
extern char s_N_ArrowB_00_005d001c[];
extern char s_N_ArrowL_00_005d0028[];
extern char s_N_ArrowR_00_005d0034[];
extern char s_N_ArrowT_00_005d000c[];

// USA 005CFFC0 <- EU 005CFF98 (Ghidra, non-matching)
// GLOBAL DAT_005d0000 int
// GLOBAL DAT_005d0004 undefined4 *
// GLOBAL DAT_005d0008 undefined4 *
// GLOBAL DAT_005d0018 undefined4
// GLOBAL DAT_005d0040 undefined4
// GLOBAL DAT_005d0044 undefined4
// GLOBAL s_N_ArrowB_00_005d001c string
// GLOBAL s_N_ArrowL_00_005d0028 string
// GLOBAL s_N_ArrowR_00_005d0034 string
// GLOBAL s_N_ArrowT_00_005d000c string

undefined4 func_005CFFC0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_005d0000;
  *(undefined4 *)(DAT_005d0000 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005d0004;
  *DAT_005d0004 = 0;
  puVar2[1] = 0;
  uVar3 = DAT_005d0018;
  puVar2 = DAT_005d0008;
  DAT_005d0008[1] = s_N_ArrowT_00_005d000c;
  *puVar2 = uVar3;
  puVar2[2] = uVar3;
  puVar2[3] = s_N_ArrowB_00_005d001c;
  puVar2[4] = uVar3;
  puVar2[5] = s_N_ArrowL_00_005d0028;
  puVar2[6] = uVar3;
  puVar2[7] = s_N_ArrowR_00_005d0034;
  return func_005902C0(0);
}


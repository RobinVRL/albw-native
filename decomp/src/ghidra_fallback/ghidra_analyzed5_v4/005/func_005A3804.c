#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern int DAT_005a3844;
extern undefined4 *DAT_005a3848;
extern undefined4 *DAT_005a384c;
extern undefined4 DAT_005a385c;
extern undefined4 DAT_005a3884;
extern undefined4 DAT_005a3888;
extern char s_N_ArrowB_00_005a3860[];
extern char s_N_ArrowL_00_005a386c[];
extern char s_N_ArrowR_00_005a3878[];
extern char s_N_ArrowT_00_005a3850[];

// USA 005A3804 <- EU 005A37DC (Ghidra, non-matching)
// GLOBAL DAT_005a3844 int
// GLOBAL DAT_005a3848 undefined4 *
// GLOBAL DAT_005a384c undefined4 *
// GLOBAL DAT_005a385c undefined4
// GLOBAL DAT_005a3884 undefined4
// GLOBAL DAT_005a3888 undefined4
// GLOBAL s_N_ArrowB_00_005a3860 string
// GLOBAL s_N_ArrowL_00_005a386c string
// GLOBAL s_N_ArrowR_00_005a3878 string
// GLOBAL s_N_ArrowT_00_005a3850 string

undefined4 func_005A3804(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_005a3844;
  *(undefined4 *)(DAT_005a3844 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005a3848;
  *DAT_005a3848 = 0;
  puVar2[1] = 0;
  uVar3 = DAT_005a385c;
  puVar2 = DAT_005a384c;
  DAT_005a384c[1] = s_N_ArrowT_00_005a3850;
  *puVar2 = uVar3;
  puVar2[2] = uVar3;
  puVar2[3] = s_N_ArrowB_00_005a3860;
  puVar2[4] = uVar3;
  puVar2[5] = s_N_ArrowL_00_005a386c;
  puVar2[6] = uVar3;
  puVar2[7] = s_N_ArrowR_00_005a3878;
  return func_005902C0(0);
}


#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern int DAT_0059a588;
extern undefined4 *DAT_0059a58c;
extern undefined4 *DAT_0059a590;
extern undefined4 DAT_0059a5a0;
extern undefined4 DAT_0059a5c8;
extern undefined4 DAT_0059a5cc;
extern char s_N_ArrowB_00_0059a5a4[];
extern char s_N_ArrowL_00_0059a5b0[];
extern char s_N_ArrowR_00_0059a5bc[];
extern char s_N_ArrowT_00_0059a594[];

// USA 0059A548 <- EU 0059A520 (Ghidra, non-matching)
// GLOBAL DAT_0059a588 int
// GLOBAL DAT_0059a58c undefined4 *
// GLOBAL DAT_0059a590 undefined4 *
// GLOBAL DAT_0059a5a0 undefined4
// GLOBAL DAT_0059a5c8 undefined4
// GLOBAL DAT_0059a5cc undefined4
// GLOBAL s_N_ArrowB_00_0059a5a4 string
// GLOBAL s_N_ArrowL_00_0059a5b0 string
// GLOBAL s_N_ArrowR_00_0059a5bc string
// GLOBAL s_N_ArrowT_00_0059a594 string

undefined4 func_0059A548(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_0059a588;
  *(undefined4 *)(DAT_0059a588 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_0059a58c;
  *DAT_0059a58c = 0;
  puVar2[1] = 0;
  uVar3 = DAT_0059a5a0;
  puVar2 = DAT_0059a590;
  DAT_0059a590[1] = s_N_ArrowT_00_0059a594;
  *puVar2 = uVar3;
  puVar2[2] = uVar3;
  puVar2[3] = s_N_ArrowB_00_0059a5a4;
  puVar2[4] = uVar3;
  puVar2[5] = s_N_ArrowL_00_0059a5b0;
  puVar2[6] = uVar3;
  puVar2[7] = s_N_ArrowR_00_0059a5bc;
  return func_005902C0(0);
}


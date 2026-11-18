#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern int DAT_0059a10c;
extern undefined4 *DAT_0059a110;
extern undefined4 *DAT_0059a114;
extern undefined4 DAT_0059a124;
extern undefined4 DAT_0059a14c;
extern undefined4 DAT_0059a150;
extern char s_N_ArrowB_00_0059a128[];
extern char s_N_ArrowL_00_0059a134[];
extern char s_N_ArrowR_00_0059a140[];
extern char s_N_ArrowT_00_0059a118[];

// USA 0059A0CC <- EU 0059A0A4 (Ghidra, non-matching)
// GLOBAL DAT_0059a10c int
// GLOBAL DAT_0059a110 undefined4 *
// GLOBAL DAT_0059a114 undefined4 *
// GLOBAL DAT_0059a124 undefined4
// GLOBAL DAT_0059a14c undefined4
// GLOBAL DAT_0059a150 undefined4
// GLOBAL s_N_ArrowB_00_0059a128 string
// GLOBAL s_N_ArrowL_00_0059a134 string
// GLOBAL s_N_ArrowR_00_0059a140 string
// GLOBAL s_N_ArrowT_00_0059a118 string

undefined4 func_0059A0CC(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_0059a10c;
  *(undefined4 *)(DAT_0059a10c + 0x10) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x14) = 0xffffffff;
  puVar2 = DAT_0059a110;
  *DAT_0059a110 = 0;
  puVar2[1] = 0;
  uVar3 = DAT_0059a124;
  puVar2 = DAT_0059a114;
  DAT_0059a114[1] = s_N_ArrowT_00_0059a118;
  *puVar2 = uVar3;
  puVar2[2] = uVar3;
  puVar2[3] = s_N_ArrowB_00_0059a128;
  puVar2[4] = uVar3;
  puVar2[5] = s_N_ArrowL_00_0059a134;
  puVar2[6] = uVar3;
  puVar2[7] = s_N_ArrowR_00_0059a140;
  return func_005902C0(0);
}


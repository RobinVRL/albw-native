#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005e182c;
extern undefined4 *DAT_005e1830;
extern undefined4 *DAT_005e1834;
extern undefined4 DAT_005e1844;
extern undefined4 DAT_005e186c;
extern undefined4 DAT_005e1870;
extern char s_N_ArrowB_00_005e1848[];
extern char s_N_ArrowL_00_005e1854[];
extern char s_N_ArrowR_00_005e1860[];
extern char s_N_ArrowT_00_005e1838[];

// USA 005E17EC <- EU 005E17C4 (Ghidra, non-matching)
// GLOBAL DAT_005e182c undefined4 *
// GLOBAL DAT_005e1830 undefined4 *
// GLOBAL DAT_005e1834 undefined4 *
// GLOBAL DAT_005e1844 undefined4
// GLOBAL DAT_005e186c undefined4
// GLOBAL DAT_005e1870 undefined4
// GLOBAL s_N_ArrowB_00_005e1848 string
// GLOBAL s_N_ArrowL_00_005e1854 string
// GLOBAL s_N_ArrowR_00_005e1860 string
// GLOBAL s_N_ArrowT_00_005e1838 string

undefined4 func_005E17EC(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005e182c;
  *DAT_005e182c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005e1830;
  *DAT_005e1830 = 0;
  puVar1[1] = 0;
  uVar2 = DAT_005e1844;
  puVar1 = DAT_005e1834;
  DAT_005e1834[1] = s_N_ArrowT_00_005e1838;
  *puVar1 = uVar2;
  puVar1[2] = uVar2;
  puVar1[3] = s_N_ArrowB_00_005e1848;
  puVar1[4] = uVar2;
  puVar1[5] = s_N_ArrowL_00_005e1854;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_005e1860;
  return func_005902C0(0);
}


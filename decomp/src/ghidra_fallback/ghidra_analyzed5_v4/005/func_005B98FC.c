#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005b993c;
extern undefined4 *DAT_005b9940;
extern undefined4 *DAT_005b9944;
extern undefined4 DAT_005b9954;
extern undefined4 DAT_005b997c;
extern undefined4 DAT_005b9980;
extern char s_N_ArrowB_00_005b9958[];
extern char s_N_ArrowL_00_005b9964[];
extern char s_N_ArrowR_00_005b9970[];
extern char s_N_ArrowT_00_005b9948[];

// USA 005B98FC <- EU 005B98D4 (Ghidra, non-matching)
// GLOBAL DAT_005b993c undefined4 *
// GLOBAL DAT_005b9940 undefined4 *
// GLOBAL DAT_005b9944 undefined4 *
// GLOBAL DAT_005b9954 undefined4
// GLOBAL DAT_005b997c undefined4
// GLOBAL DAT_005b9980 undefined4
// GLOBAL s_N_ArrowB_00_005b9958 string
// GLOBAL s_N_ArrowL_00_005b9964 string
// GLOBAL s_N_ArrowR_00_005b9970 string
// GLOBAL s_N_ArrowT_00_005b9948 string

undefined4 func_005B98FC(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005b993c;
  *DAT_005b993c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005b9940;
  *DAT_005b9940 = 0;
  puVar1[1] = 0;
  uVar2 = DAT_005b9954;
  puVar1 = DAT_005b9944;
  DAT_005b9944[1] = s_N_ArrowT_00_005b9948;
  *puVar1 = uVar2;
  puVar1[2] = uVar2;
  puVar1[3] = s_N_ArrowB_00_005b9958;
  puVar1[4] = uVar2;
  puVar1[5] = s_N_ArrowL_00_005b9964;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_005b9970;
  return func_005902C0(0);
}


#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_00593780;
extern undefined4 *DAT_00593784;
extern undefined4 *DAT_00593788;
extern undefined4 DAT_0059378c;
extern undefined4 DAT_00593790;
extern undefined4 DAT_00593794;
extern undefined4 *DAT_00593798;
extern undefined4 *DAT_0059379c;
extern undefined4 *DAT_005937a0;
extern undefined4 *DAT_005937a4;
extern undefined4 DAT_005937a8;
extern undefined4 DAT_005937ac;

// USA 005936CC <- EU 005936A4 (Ghidra, non-matching)
// GLOBAL DAT_00593780 undefined4 *
// GLOBAL DAT_00593784 undefined4 *
// GLOBAL DAT_00593788 undefined4 *
// GLOBAL DAT_0059378c undefined4
// GLOBAL DAT_00593790 undefined4
// GLOBAL DAT_00593794 undefined4
// GLOBAL DAT_00593798 undefined4 *
// GLOBAL DAT_0059379c undefined4 *
// GLOBAL DAT_005937a0 undefined4 *
// GLOBAL DAT_005937a4 undefined4 *
// GLOBAL DAT_005937a8 undefined4
// GLOBAL DAT_005937ac undefined4

undefined4 func_005936CC(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_0059378c;
  puVar1 = DAT_00593780;
  *DAT_00593780 = *DAT_00593784;
  puVar1[1] = 0;
  puVar1 = DAT_00593788;
  DAT_00593788[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = uVar2;
  puVar1[4] = 0;
  puVar1 = DAT_00593798;
  DAT_00593798[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = uVar2;
  puVar1[4] = 0;
  puVar1 = DAT_0059379c;
  DAT_0059379c[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = uVar2;
  puVar1[4] = 0;
  puVar1 = DAT_005937a0;
  DAT_005937a0[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = uVar2;
  puVar1[4] = 0;
  uVar2 = DAT_005937a8;
  puVar1 = DAT_005937a4;
  DAT_005937a4[1] = 0;
  puVar1[2] = 0;
  *puVar1 = uVar2;
  puVar1[3] = 0;
  return func_005902C0(puVar1);
}


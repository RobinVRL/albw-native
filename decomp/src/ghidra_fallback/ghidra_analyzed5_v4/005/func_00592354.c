#include "ghidra_types.h"

extern int func_00592430(void);
extern int DAT_005923d8;
extern undefined4 DAT_005923dc;
extern undefined4 DAT_005923e0;
extern undefined4 *DAT_005923e4;
extern undefined4 *DAT_005923e8;
extern undefined4 *DAT_005923ec;
extern undefined4 *DAT_005923f0;
extern undefined4 *DAT_005923f4;
extern undefined4 *DAT_005923f8;
extern undefined4 *DAT_005923fc;
extern undefined4 *DAT_00592400;
extern undefined4 *DAT_00592404;

// USA 00592354 <- EU 0059232C (Ghidra, non-matching)
// GLOBAL DAT_005923d8 int
// GLOBAL DAT_005923dc undefined4
// GLOBAL DAT_005923e0 undefined4
// GLOBAL DAT_005923e4 undefined4 *
// GLOBAL DAT_005923e8 undefined4 *
// GLOBAL DAT_005923ec undefined4 *
// GLOBAL DAT_005923f0 undefined4 *
// GLOBAL DAT_005923f4 undefined4 *
// GLOBAL DAT_005923f8 undefined4 *
// GLOBAL DAT_005923fc undefined4 *
// GLOBAL DAT_00592400 undefined4 *
// GLOBAL DAT_00592404 undefined4 *

undefined4 func_00592354(uint *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  
  *param_1 = 0x40000;
  iVar3 = DAT_005923d8;
  uVar6 = *param_1;
  iVar5 = 1;
  do {
    iVar2 = iVar5 * 4;
    iVar1 = iVar5 * 4;
    iVar5 = iVar5 + 2;
    uVar6 = uVar6 | *(uint *)(iVar3 + iVar2);
    *param_1 = uVar6;
    uVar6 = uVar6 | *(uint *)(iVar3 + iVar1 + 4);
    *param_1 = uVar6;
    uVar4 = DAT_005923e0;
  } while (iVar5 < 0x13);
  *DAT_005923e4 = DAT_005923dc;
  *DAT_005923e8 = 8000;
  *DAT_005923ec = uVar4;
  *DAT_005923f0 = 3;
  *DAT_005923f4 = 0xffffff;
  *DAT_005923f8 = 0;
  *DAT_005923fc = 3;
  *DAT_00592400 = 0;
  *DAT_00592404 = 0x3000000;
  return func_00592430();
}


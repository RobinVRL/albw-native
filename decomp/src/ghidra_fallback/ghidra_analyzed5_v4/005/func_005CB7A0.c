#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005cb7e0;
extern undefined4 *DAT_005cb7e4;
extern undefined4 *DAT_005cb7e8;
extern undefined DAT_005cb7ec;
extern undefined4 DAT_005cb7f0;
extern undefined4 DAT_005cb7f4;
extern undefined4 DAT_005cb7f8;
extern undefined4 *DAT_005cb7fc;
extern undefined4 DAT_005cb800;
extern undefined4 DAT_005cb804;
extern undefined4 DAT_005cb808;

// USA 005CB7A0 <- EU 005CB778 (Ghidra, non-matching)
// GLOBAL DAT_005cb7e0 undefined4 *
// GLOBAL DAT_005cb7e4 undefined4 *
// GLOBAL DAT_005cb7e8 undefined4 *
// GLOBAL DAT_005cb7ec undefined
// GLOBAL DAT_005cb7f0 undefined4
// GLOBAL DAT_005cb7f4 undefined4
// GLOBAL DAT_005cb7f8 undefined4
// GLOBAL DAT_005cb7fc undefined4 *
// GLOBAL DAT_005cb800 undefined4
// GLOBAL DAT_005cb804 undefined4
// GLOBAL DAT_005cb808 undefined4

undefined4 func_005CB7A0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005cb7e0;
  *DAT_005cb7e0 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005cb7e4;
  *DAT_005cb7e4 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005cb7e8;
  *DAT_005cb7e8 = DAT_005cb7f0;
  puVar1[1] = &DAT_005cb7ec;
  uVar2 = DAT_005cb800;
  puVar1 = DAT_005cb7fc;
  *DAT_005cb7fc = DAT_005cb804;
  puVar1[1] = uVar2;
  return func_005902C0(puVar1);
}


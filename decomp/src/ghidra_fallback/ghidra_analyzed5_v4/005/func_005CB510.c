#include "ghidra_types.h"

extern int func_0010DEB0(undefined4 *param_1);
extern int func_005902C0(void *param_1);
extern int DAT_005cb554;
extern undefined4 *DAT_005cb558;
extern undefined4 *DAT_005cb55c;
extern undefined4 DAT_005cb560;
extern undefined4 DAT_005cb564;

// USA 005CB510 <- EU 005CB4E8 (Ghidra, non-matching)
// GLOBAL DAT_005cb554 int
// GLOBAL DAT_005cb558 undefined4 *
// GLOBAL DAT_005cb55c undefined4 *
// GLOBAL DAT_005cb560 undefined4
// GLOBAL DAT_005cb564 undefined4

undefined4 func_005CB510(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = DAT_005cb554;
  *(undefined4 *)(DAT_005cb554 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar3 = DAT_005cb55c;
  puVar2 = DAT_005cb558;
  *DAT_005cb558 = 0;
  puVar2[1] = 0;
  *puVar3 = 0;
  func_0010DEB0(puVar3);
  puVar3 = puVar3 + 3;
  *puVar3 = 0;
  func_0010DEB0(puVar3);
  return func_005902C0(puVar3);
}


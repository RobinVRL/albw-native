#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern int DAT_005e4aac;
extern undefined4 *DAT_005e4ab0;
extern undefined4 *DAT_005e4ab4;
extern undefined4 DAT_005e4ab8;
extern undefined4 DAT_005e4abc;
extern undefined4 DAT_005e4ac0;

// USA 005E4A88 <- EU 005E4A60 (Ghidra, non-matching)
// GLOBAL DAT_005e4aac int
// GLOBAL DAT_005e4ab0 undefined4 *
// GLOBAL DAT_005e4ab4 undefined4 *
// GLOBAL DAT_005e4ab8 undefined4
// GLOBAL DAT_005e4abc undefined4
// GLOBAL DAT_005e4ac0 undefined4

undefined4 func_005E4A88(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = DAT_005e4aac;
  *(undefined4 *)(DAT_005e4aac + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005e4ab0;
  *DAT_005e4ab0 = 0;
  puVar2[1] = 0;
  puVar2 = DAT_005e4ab4;
  puVar3 = DAT_005e4ab4 + 2;
  *DAT_005e4ab4 = DAT_005e4ab8;
  *puVar3 = puVar2 + 1;
  puVar2[3] = 0;
  puVar2[1] = puVar2 + 1;
  return func_005902C0(puVar2);
}


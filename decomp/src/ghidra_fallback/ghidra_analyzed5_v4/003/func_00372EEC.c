#include "ghidra_types.h"

extern int func_001510A4();
extern int func_0035D6D0(undefined4 *param_1);
extern int func_0036D0E0(int *param_1);
extern int func_004EE540(undefined4 *param_1);
extern int func_00503368(undefined4 *param_1);
extern int DAT_00372f54;
extern int DAT_00372f58;
extern int DAT_00372f5c;
extern int DAT_00372f60;

// USA 00372EEC <- EU 00372EC8 (Ghidra, non-matching)
// GLOBAL DAT_00372f54 int
// GLOBAL DAT_00372f58 int
// GLOBAL DAT_00372f5c int
// GLOBAL DAT_00372f60 int

undefined4 func_00372EEC(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_00372f54;
  *param_1 = DAT_00372f54;
  param_1[200] = iVar1 + 0xb8;
  puVar2 = func_0035D6D0(param_1 + 0x269);
  iVar1 = DAT_00372f58;
  puVar2[-0x1a1] = DAT_00372f58 + 0xb8;
  puVar2[-0x269] = iVar1;
  func_0036D0E0(puVar2 + -0x4f);
  func_0036D0E0(puVar2 + -0x50);
  iVar1 = DAT_00372f5c;
  puVar2[-0x1a1] = DAT_00372f5c + 0x98;
  puVar2[-0x269] = iVar1;
  puVar2 = func_0035D6D0(puVar2 + -0x92);
  puVar2 = func_00503368(puVar2 + -0xb9);
  iVar1 = DAT_00372f60;
  puVar2[-0x56] = DAT_00372f60 + 0x5c;
  puVar2[-0x11e] = iVar1;
  puVar2 = func_004EE540(puVar2 + -0x1a);
  return func_001510A4(puVar2 + -0x104);
}


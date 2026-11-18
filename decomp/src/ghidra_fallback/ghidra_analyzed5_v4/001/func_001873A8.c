#include "ghidra_types.h"

extern int func_001510A4();
extern int func_002E1B70(int *param_1);
extern int func_0035D6D0(undefined4 *param_1);
extern int func_0036746C(undefined4 *param_1);
extern int func_0036D0E0(int *param_1);
extern int func_004EE540(undefined4 *param_1);
extern int func_00503368(undefined4 *param_1);
extern int DAT_0018744c;
extern int DAT_00187450;
extern int DAT_00187454;
extern int DAT_00187458;

// USA 001873A8 <- EU 001873A8 (Ghidra, non-matching)
// GLOBAL DAT_0018744c int
// GLOBAL DAT_00187450 int
// GLOBAL DAT_00187454 int
// GLOBAL DAT_00187458 int

undefined4 func_001873A8(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_0018744c;
  param_1[200] = DAT_0018744c + 0xb8;
  *param_1 = iVar1;
  func_002E1B70(param_1 + 0x272);
  puVar2 = func_0036746C(param_1 + 0x263);
  iVar1 = DAT_00187450;
  puVar2[-0x19b] = DAT_00187450 + 0xb8;
  puVar2[-0x263] = iVar1;
  func_0036D0E0(puVar2 + -0x49);
  func_0036D0E0(puVar2 + -0x4a);
  iVar1 = DAT_00187454;
  puVar2[-0x19b] = DAT_00187454 + 0x98;
  puVar2[-0x263] = iVar1;
  puVar2 = func_0035D6D0(puVar2 + -0x8c);
  puVar2 = func_00503368(puVar2 + -0xb9);
  iVar1 = DAT_00187458;
  puVar2[-0x56] = DAT_00187458 + 0x5c;
  puVar2[-0x11e] = iVar1;
  puVar2 = func_004EE540(puVar2 + -0x1a);
  return func_001510A4(puVar2 + -0x104);
}


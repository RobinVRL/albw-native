#include "ghidra_types.h"

extern int func_001510A4();
extern int func_002E1B70(int *param_1);
extern int func_0035D6D0(undefined4 *param_1);
extern int func_0036746C(undefined4 *param_1);
extern int func_0036D0E0(int *param_1);
extern int func_004EE540(undefined4 *param_1);
extern int func_00503368(undefined4 *param_1);
extern int DAT_0050fcdc;
extern int DAT_0050fce0;
extern int DAT_0050fce4;
extern int DAT_0050fce8;

// USA 0050FC60 <- EU 0050FC38 (Ghidra, non-matching)
// GLOBAL DAT_0050fcdc int
// GLOBAL DAT_0050fce0 int
// GLOBAL DAT_0050fce4 int
// GLOBAL DAT_0050fce8 int

undefined4 func_0050FC60(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = DAT_0050fcdc;
  *param_1 = DAT_0050fcdc;
  param_1[200] = iVar2 + 0xb8;
  puVar1 = func_0036746C(param_1 + 0x273);
  func_0036D0E0(puVar1 + -3);
  func_002E1B70(puVar1 + -0x10);
  iVar2 = DAT_0050fce0;
  puVar1[-0x1ab] = DAT_0050fce0 + 0xb8;
  puVar1[-0x273] = iVar2;
  func_0036D0E0(puVar1 + -0x59);
  func_0036D0E0(puVar1 + -0x5a);
  iVar2 = DAT_0050fce4 + 0x98;
  puVar1[-0x273] = DAT_0050fce4;
  puVar1[-0x1ab] = iVar2;
  puVar1 = func_0035D6D0(puVar1 + -0x9c);
  puVar1 = func_00503368(puVar1 + -0xb9);
  iVar2 = DAT_0050fce8;
  puVar1[-0x56] = DAT_0050fce8 + 0x5c;
  puVar1[-0x11e] = iVar2;
  puVar1 = func_004EE540(puVar1 + -0x1a);
  return func_001510A4(puVar1 + -0x104);
}


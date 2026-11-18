#include "ghidra_types.h"

extern int func_001510A4();
extern int func_0036746C(undefined4 *param_1);
extern int func_0036CB64(undefined4 *param_1);
extern int func_0036CDD8(undefined4 *param_1);
extern int func_0036D0E0(int *param_1);
extern int DAT_002f8db8;
extern int DAT_002f8dbc;

// USA 002F8D50 <- EU 002F8D2C (Ghidra, non-matching)
// GLOBAL DAT_002f8db8 int
// GLOBAL DAT_002f8dbc int

undefined4 func_002F8D50(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_002f8db8;
  param_1[200] = DAT_002f8db8 + 0x84;
  *param_1 = iVar1;
  func_0036D0E0(param_1 + 0x36c);
  func_0036D0E0(param_1 + 0x36b);
  puVar2 = func_0036746C(param_1 + 0x35d);
  puVar2 = func_0036CDD8(puVar2 + -0xc2);
  puVar2 = func_0036CB64(puVar2 + -0x42);
  func_0036D0E0(puVar2 + -0x28);
  func_0036D0E0(puVar2 + -0x29);
  func_0036D0E0(puVar2 + -0x2a);
  iVar1 = DAT_002f8dbc;
  puVar2[-0x259] = DAT_002f8dbc;
  puVar2[-0x191] = iVar1 + 0x84;
  return func_001510A4(puVar2 + -0x259);
}


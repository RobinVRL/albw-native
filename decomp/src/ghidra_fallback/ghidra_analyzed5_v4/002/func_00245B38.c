#include "ghidra_types.h"

extern int func_001510A4();
extern int func_002E1B70(int *param_1);
extern int func_0035D6D0(undefined4 *param_1);
extern int func_0036746C(undefined4 *param_1);
extern int func_0036D0E0(int *param_1);
extern int func_004EE540(undefined4 *param_1);
extern int func_00503368(undefined4 *param_1);
extern int DAT_00245bd8;
extern int DAT_00245bdc;
extern int DAT_00245be0;
extern int DAT_00245be4;

// USA 00245B38 <- EU 00245B38 (Ghidra, non-matching)
// GLOBAL DAT_00245bd8 int
// GLOBAL DAT_00245bdc int
// GLOBAL DAT_00245be0 int
// GLOBAL DAT_00245be4 int

undefined4 func_00245B38(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_00245bd8;
  param_1[200] = DAT_00245bd8 + 0xb8;
  *param_1 = iVar1;
  func_002E1B70(param_1 + 0x274);
  puVar2 = func_0036746C(param_1 + 0x263);
  iVar1 = DAT_00245bdc;
  puVar2[-0x19b] = DAT_00245bdc + 0xb8;
  puVar2[-0x263] = iVar1;
  func_0036D0E0(puVar2 + -0x49);
  func_0036D0E0(puVar2 + -0x4a);
  iVar1 = DAT_00245be0;
  puVar2[-0x19b] = DAT_00245be0 + 0x98;
  puVar2[-0x263] = iVar1;
  puVar2 = func_0035D6D0(puVar2 + -0x8c);
  puVar2 = func_00503368(puVar2 + -0xb9);
  iVar1 = DAT_00245be4;
  puVar2[-0x56] = DAT_00245be4 + 0x5c;
  puVar2[-0x11e] = iVar1;
  puVar2 = func_004EE540(puVar2 + -0x1a);
  return func_001510A4(puVar2 + -0x104);
}


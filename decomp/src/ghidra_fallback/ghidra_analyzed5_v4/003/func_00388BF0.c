#include "ghidra_types.h"

extern int func_001510A4();
extern int func_002E1B70(int *param_1);
extern int func_0035D6D0(undefined4 *param_1);
extern int func_0036746C(undefined4 *param_1);
extern int func_0036D0E0(int *param_1);
extern int func_004EE540(undefined4 *param_1);
extern int func_00503368(undefined4 *param_1);
extern int DAT_00388c70;
extern int DAT_00388c74;
extern int DAT_00388c78;
extern int DAT_00388c7c;

// USA 00388BF0 <- EU 00388BCC (Ghidra, non-matching)
// GLOBAL DAT_00388c70 int
// GLOBAL DAT_00388c74 int
// GLOBAL DAT_00388c78 int
// GLOBAL DAT_00388c7c int

undefined4 func_00388BF0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_00388c70;
  param_1[200] = DAT_00388c70 + 0xb8;
  *param_1 = iVar1;
  func_002E1B70(param_1 + 0x271);
  puVar2 = func_0036746C(param_1 + 0x263);
  iVar1 = DAT_00388c74;
  puVar2[-0x19b] = DAT_00388c74 + 0xb8;
  puVar2[-0x263] = iVar1;
  func_0036D0E0(puVar2 + -0x49);
  func_0036D0E0(puVar2 + -0x4a);
  iVar1 = DAT_00388c78;
  puVar2[-0x19b] = DAT_00388c78 + 0x98;
  puVar2[-0x263] = iVar1;
  puVar2 = func_0035D6D0(puVar2 + -0x8c);
  puVar2 = func_00503368(puVar2 + -0xb9);
  iVar1 = DAT_00388c7c;
  puVar2[-0x56] = DAT_00388c7c + 0x5c;
  puVar2[-0x11e] = iVar1;
  puVar2 = func_004EE540(puVar2 + -0x1a);
  return func_001510A4(puVar2 + -0x104);
}


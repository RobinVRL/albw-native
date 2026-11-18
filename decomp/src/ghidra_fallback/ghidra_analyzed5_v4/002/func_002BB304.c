#include "ghidra_types.h"

extern int func_001510A4();
extern int func_0036D0E0(int *param_1);
extern int func_004A1520();
extern int func_004C6B2C(int param_1);
extern int func_004EE540(undefined4 *param_1);
extern int DAT_002bb4ac;
extern int *DAT_002bb4b0;
extern int *DAT_002bb4b4;
extern int DAT_002bb4b8;
extern int DAT_002bb4bc;
extern undefined4 DAT_002bb4c0;
extern undefined4 DAT_002bb4c4;
extern undefined4 DAT_002bb4c8;
extern int DAT_002bb4cc;

// USA 002BB304 <- EU 002BB2E0 (Ghidra, non-matching)
// GLOBAL DAT_002bb4ac int
// GLOBAL DAT_002bb4b0 int *
// GLOBAL DAT_002bb4b4 int *
// GLOBAL DAT_002bb4b8 int
// GLOBAL DAT_002bb4bc int
// GLOBAL DAT_002bb4c0 undefined4
// GLOBAL DAT_002bb4c4 undefined4
// GLOBAL DAT_002bb4c8 undefined4
// GLOBAL DAT_002bb4cc int

undefined4 func_002BB304(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = DAT_002bb4ac + 0x84;
  *param_1 = DAT_002bb4ac;
  piVar1 = DAT_002bb4b0;
  param_1[200] = iVar3;
  func_004C6B2C(*piVar1);
  *(undefined4 *)(*DAT_002bb4b4 + 0x5c) = 0;
  func_0036D0E0(param_1 + 0x53a);
  iVar3 = DAT_002bb4b8;
  param_1[0x51e] = DAT_002bb4b8;
  func_0036D0E0(param_1 + 0x520);
  param_1[0x50e] = iVar3;
  func_0036D0E0(param_1 + 0x510);
  param_1[0x4ff] = iVar3;
  func_0036D0E0(param_1 + 0x501);
  param_1[0x4b0] = DAT_002bb4bc;
  puVar2 = func_004EE540(param_1 + 0x4e6);
  puVar2[-0x36] = iVar3;
  func_0036D0E0(puVar2 + -0x34);
  puVar2[-0x7a] = DAT_002bb4c0;
  puVar2 = func_004EE540(puVar2 + -0x54);
  puVar2[-0x26] = iVar3;
  func_0036D0E0(puVar2 + -0x24);
  puVar2[-0x3a] = iVar3;
  func_0036D0E0(puVar2 + -0x38);
  puVar2[-0x4b] = iVar3;
  func_0036D0E0(puVar2 + -0x49);
  puVar2[-0x8b] = DAT_002bb4c4;
  puVar2 = func_004EE540(puVar2 + -0x66);
  puVar2[-0x25] = iVar3;
  func_0036D0E0(puVar2 + -0x23);
  puVar2[-0x35] = iVar3;
  func_0036D0E0(puVar2 + -0x33);
  puVar2[-0x45] = iVar3;
  func_0036D0E0(puVar2 + -0x43);
  puVar2[-0x55] = iVar3;
  func_0036D0E0(puVar2 + -0x53);
  puVar2[-100] = iVar3;
  func_0036D0E0(puVar2 + -0x62);
  puVar2[-0x77] = iVar3;
  func_0036D0E0(puVar2 + -0x75);
  puVar2[-0x87] = iVar3;
  func_0036D0E0(puVar2 + -0x85);
  puVar2[-0xbe] = iVar3;
  func_0036D0E0(puVar2 + -0xbc);
  puVar2[-0x137] = DAT_002bb4c8;
  puVar2 = func_004EE540(puVar2 + -0x10a);
  puVar2[-0x2d] = iVar3;
  func_0036D0E0(puVar2 + -0x2b);
  puVar2 = func_004A1520(puVar2 + -0x87);
  func_0036D0E0(puVar2 + -0x68);
  func_0036D0E0(puVar2 + -0x69);
  func_0036D0E0(puVar2 + -0x6a);
  func_0036D0E0(puVar2 + -0x6b);
  iVar3 = DAT_002bb4cc;
  puVar2[-0x1d3] = DAT_002bb4cc + 0x84;
  puVar2[-0x29b] = iVar3;
  return func_001510A4(puVar2 + -0x29b);
}


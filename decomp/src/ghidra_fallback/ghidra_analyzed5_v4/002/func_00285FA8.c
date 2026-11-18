#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001510A4();
extern int func_0035D6D0(undefined4 *param_1);
extern int func_0036D0E0(int *param_1);
extern int func_004EE540(undefined4 *param_1);
extern int func_00503368(undefined4 *param_1);
extern int DAT_00286104;
extern int *DAT_00286108;
extern int DAT_0028610c;
extern uint *DAT_00286110;
extern undefined4 DAT_00286114;
extern undefined4 *DAT_00286118;
extern int DAT_0028611c;
extern int DAT_00286120;
extern int DAT_00286124;

// USA 00285FA8 <- EU 00285FD0 (Ghidra, non-matching)
// GLOBAL DAT_00286104 int
// GLOBAL DAT_00286108 int *
// GLOBAL DAT_0028610c int
// GLOBAL DAT_00286110 uint *
// GLOBAL DAT_00286114 undefined4
// GLOBAL DAT_00286118 undefined4 *
// GLOBAL DAT_0028611c int
// GLOBAL DAT_00286120 int
// GLOBAL DAT_00286124 int

undefined4 func_00285FA8(int *param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  piVar1 = DAT_00286108;
  iVar4 = DAT_00286104;
  param_1[200] = DAT_00286104 + 0xb8;
  *param_1 = iVar4;
  uVar3 = DAT_00286114;
  puVar2 = DAT_00286110;
  puVar7 = *(undefined4 **)(*piVar1 + 0x3dbc8);
  for (puVar5 = *(undefined4 **)(DAT_0028610c + *piVar1); puVar5 != puVar7; puVar5 = puVar5 + 1) {
    puVar6 = (undefined4 *)*puVar5;
    if (puVar6 != (undefined4 *)0x0) {
      if (((*puVar2 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_00286110), iVar4 != 0)) {
        *DAT_00286118 = uVar3;
      }
      iVar4 = (**(code **)*puVar6)(puVar6,DAT_00286118);
      if (iVar4 == 0) {
        puVar6 = (undefined4 *)0x0;
      }
      if ((puVar6 != (undefined4 *)0x0) && (puVar6[0x12] == 0x3f800000)) {
        puVar6[0x107] = 0;
      }
    }
  }
  iVar4 = DAT_0028611c + 0xb8;
  *param_1 = DAT_0028611c;
  param_1[200] = iVar4;
  func_0036D0E0(param_1 + 0x21a);
  func_0036D0E0(param_1 + 0x219);
  iVar4 = DAT_00286120 + 0x98;
  *param_1 = DAT_00286120;
  param_1[200] = iVar4;
  puVar5 = func_0035D6D0(param_1 + 0x1d7);
  puVar5 = func_00503368(puVar5 + -0xb9);
  iVar4 = DAT_00286124;
  puVar5[-0x56] = DAT_00286124 + 0x5c;
  puVar5[-0x11e] = iVar4;
  puVar5 = func_004EE540(puVar5 + -0x1a);
  return func_001510A4(puVar5 + -0x104);
}


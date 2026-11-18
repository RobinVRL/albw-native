#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern int func_001150B8(undefined4 *param_1,undefined4 *param_2);
extern undefined4 DAT_004060a4;
extern undefined4 DAT_004060a8;
extern uint *DAT_004060ac;
extern undefined4 DAT_004060b0;
extern undefined4 *DAT_004060b4;
extern uint *DAT_004060b8;
extern undefined4 *DAT_004060bc;

// USA 00405F20 <- EU 00405F00 (Ghidra, non-matching)
// GLOBAL DAT_004060a4 undefined4
// GLOBAL DAT_004060a8 undefined4
// GLOBAL DAT_004060ac uint *
// GLOBAL DAT_004060b0 undefined4
// GLOBAL DAT_004060b4 undefined4 *
// GLOBAL DAT_004060b8 uint *
// GLOBAL DAT_004060bc undefined4 *

undefined4 * func_00405F20(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar6 = DAT_004060a8;
  *param_1 = DAT_004060a4;
  param_1[0x29] = uVar6;
  param_1[0x2a] = uVar6;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined1 *)((int)param_1 + 0xb7) = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  *(undefined1 *)((int)param_1 + 0xb9) = 0;
  *(undefined1 *)((int)param_1 + 0xba) = 0;
  *(undefined1 *)((int)param_1 + 0xbb) = 0;
  param_1[0x2f] = 0;
  param_1[0x31] = 0;
  uVar5 = DAT_004060b0;
  if (((*DAT_004060ac & 1) == 0) &&
     (iVar3 = func_00100174((int *)DAT_004060ac), puVar1 = DAT_004060b4, iVar3 != 0)) {
    puVar4 = DAT_004060b4 + 4;
    *DAT_004060b4 = uVar6;
    puVar1[1] = uVar5;
    puVar1[2] = uVar5;
    puVar1[3] = uVar5;
    *puVar4 = uVar5;
    puVar1[5] = uVar6;
    puVar1[6] = uVar5;
    puVar1[7] = uVar5;
    puVar1[8] = uVar5;
    puVar1[9] = uVar5;
    puVar1[10] = uVar6;
    puVar1[0xb] = uVar5;
    puVar1[0xc] = uVar5;
    puVar1[0xd] = uVar5;
    puVar1[0xe] = uVar5;
    puVar1[0xf] = uVar6;
  }
  func_001150B8(param_1 + 1,DAT_004060b4);
  puVar2 = DAT_004060b8;
  if (((*DAT_004060b8 & 1) == 0) &&
     (iVar3 = func_00100174((int *)DAT_004060b8), puVar1 = DAT_004060bc, iVar3 != 0)) {
    puVar4 = DAT_004060bc + 4;
    *DAT_004060bc = uVar6;
    puVar1[1] = uVar5;
    puVar1[2] = uVar5;
    puVar1[3] = uVar5;
    *puVar4 = uVar5;
    puVar1[5] = uVar6;
    puVar1[6] = uVar5;
    puVar1[7] = uVar5;
    puVar1[8] = uVar5;
    puVar1[9] = uVar5;
    puVar1[10] = uVar6;
    puVar1[0xb] = uVar5;
  }
  func_001119F4(param_1 + 0x11,DAT_004060bc);
  if (((*puVar2 & 1) == 0) &&
     (iVar3 = func_00100174((int *)DAT_004060b8), puVar1 = DAT_004060bc, iVar3 != 0)) {
    puVar4 = DAT_004060bc + 4;
    *DAT_004060bc = uVar6;
    puVar1[1] = uVar5;
    puVar1[2] = uVar5;
    puVar1[3] = uVar5;
    *puVar4 = uVar5;
    puVar1[5] = uVar6;
    puVar1[6] = uVar5;
    puVar1[7] = uVar5;
    puVar1[8] = uVar5;
    puVar1[9] = uVar5;
    puVar1[10] = uVar6;
    puVar1[0xb] = uVar5;
  }
  func_001119F4(param_1 + 0x1d,DAT_004060bc);
  return param_1;
}


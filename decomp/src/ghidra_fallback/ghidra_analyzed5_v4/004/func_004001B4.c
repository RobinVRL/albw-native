#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern uint *DAT_00400224;
extern undefined4 DAT_00400228;
extern undefined4 DAT_0040022c;
extern undefined4 *DAT_00400230;

// USA 004001B4 <- EU 00400194 (Ghidra, non-matching)
// GLOBAL DAT_00400224 uint *
// GLOBAL DAT_00400228 undefined4
// GLOBAL DAT_0040022c undefined4
// GLOBAL DAT_00400230 undefined4 *

void func_004001B4(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  if (((*DAT_00400224 & 1) == 0) &&
     (iVar4 = func_00100174((int *)DAT_00400224), puVar3 = DAT_00400230, uVar2 = DAT_0040022c,
     uVar1 = DAT_00400228, iVar4 != 0)) {
    puVar5 = DAT_00400230 + 4;
    *DAT_00400230 = DAT_00400228;
    puVar3[1] = uVar2;
    puVar3[2] = uVar2;
    puVar3[3] = uVar2;
    *puVar5 = uVar2;
    puVar3[5] = uVar1;
    puVar3[6] = uVar2;
    puVar3[7] = uVar2;
    puVar3[8] = uVar2;
    puVar3[9] = uVar2;
    puVar3[10] = uVar1;
    puVar3[0xb] = uVar2;
  }
  func_001119F4((undefined4 *)(param_1 + 0x48),DAT_00400230);
  *(undefined4 *)(param_1 + 0x78) = 0;
  return;
}


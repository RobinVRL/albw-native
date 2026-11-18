#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int DAT_00498884;
extern int *DAT_00498888;
extern uint DAT_0049888c;
extern uint *DAT_00498890;
extern uint DAT_00498894;
extern uint DAT_00498898;
extern uint DAT_0049889c;
extern uint DAT_004988a0;
extern uint DAT_004988a4;
extern uint *DAT_004988a8;

// USA 00498700 <- EU 004986D8 (Ghidra, non-matching)
// GLOBAL DAT_00498884 int
// GLOBAL DAT_00498888 int *
// GLOBAL DAT_0049888c uint
// GLOBAL DAT_00498890 uint *
// GLOBAL DAT_00498894 uint
// GLOBAL DAT_00498898 uint
// GLOBAL DAT_0049889c uint
// GLOBAL DAT_004988a0 uint
// GLOBAL DAT_004988a4 uint
// GLOBAL DAT_004988a8 uint *

undefined8 func_00498700(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  uint *extraout_r1;
  uint *puVar10;
  undefined8 uVar11;
  
  piVar9 = *(int **)(DAT_00498884 + 4);
  puVar10 = param_2;
  if ((((uint)*(int **)(DAT_00498884 + 4) & 1) == 0) &&
     (iVar8 = func_00100174(DAT_00498888), uVar4 = DAT_00498898, uVar3 = DAT_00498894,
     puVar2 = DAT_00498890, uVar1 = DAT_0049888c, piVar9 = (int *)0x0, puVar10 = extraout_r1,
     iVar8 != 0)) {
    *DAT_00498890 = DAT_0049888c;
    puVar2[1] = uVar1;
    puVar2[2] = uVar1;
    puVar2[3] = uVar3;
    puVar2[4] = uVar3;
    puVar2[5] = uVar4;
    puVar2[6] = uVar3;
    puVar2[7] = uVar3;
    puVar2[8] = uVar3;
    uVar7 = DAT_004988a4;
    uVar6 = DAT_004988a0;
    uVar5 = DAT_0049889c;
    puVar2[9] = uVar1;
    puVar2[10] = uVar5;
    puVar2[0xb] = uVar1;
    puVar2[0xc] = uVar3;
    puVar2[0xd] = uVar6;
    puVar2[0xe] = uVar3;
    puVar2[0xf] = uVar3;
    puVar2[0x10] = uVar3;
    puVar2[0x11] = uVar3;
    puVar2[0x12] = uVar1;
    puVar2[0x13] = uVar5;
    puVar2[0x14] = uVar5;
    puVar2[0x15] = uVar6;
    puVar2[0x16] = uVar6;
    puVar2[0x17] = uVar4;
    puVar2[0x18] = uVar3;
    puVar2[0x19] = uVar3;
    puVar2[0x1a] = uVar3;
    puVar2[0x1b] = uVar1;
    puVar2[0x1c] = uVar1;
    puVar2[0x1d] = uVar5;
    puVar10 = puVar2 + 0x25;
    puVar2[0x1e] = uVar6;
    puVar2[0x1f] = uVar3;
    puVar2[0x20] = uVar7;
    puVar2[0x21] = uVar3;
    puVar2[0x22] = uVar3;
    puVar2[0x23] = uVar3;
    puVar2[0x24] = uVar5;
    *puVar10 = uVar1;
    puVar2[0x26] = uVar5;
    puVar2[0x27] = uVar3;
    puVar2[0x28] = uVar3;
    puVar2[0x29] = uVar6;
    puVar2[0x2a] = uVar3;
    puVar2[0x2b] = uVar3;
    puVar2[0x2c] = uVar3;
    puVar2[0x2d] = uVar5;
    puVar2[0x2e] = uVar5;
    puVar2[0x2f] = uVar5;
    puVar2[0x30] = uVar3;
    puVar2[0x31] = uVar6;
    puVar2[0x32] = uVar7;
    puVar2[0x33] = uVar3;
    puVar2[0x34] = uVar3;
    puVar2[0x35] = uVar3;
    puVar2[0x36] = uVar5;
    puVar2[0x37] = uVar5;
    puVar2[0x38] = uVar1;
    puVar2[0x39] = uVar6;
    puVar2[0x3a] = uVar6;
    puVar2[0x3b] = uVar4;
    puVar2[0x3c] = uVar3;
    puVar2[0x3d] = uVar3;
    puVar2[0x3e] = uVar3;
    puVar2[0x3f] = uVar5;
    puVar2[0x40] = uVar1;
    puVar2[0x41] = uVar1;
    puVar2[0x42] = uVar6;
    puVar2[0x43] = uVar3;
    puVar2[0x44] = uVar7;
    puVar2[0x45] = uVar3;
    puVar2[0x46] = uVar3;
    puVar2[0x47] = uVar3;
    piVar9 = DAT_00498888;
  }
  uVar11 = CONCAT44(puVar10,piVar9);
  if (param_1 != (uint *)0x0) {
    uVar11 = func_0010E3C4(param_1,DAT_00498890,0x120);
  }
  if (param_2 != (uint *)0x0) {
    uVar11 = func_0010E3C4(param_2,DAT_004988a8,0x48);
    return uVar11;
  }
  return uVar11;
}


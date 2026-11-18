#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int *DAT_00498ad4;
extern uint DAT_00498ad8;
extern uint DAT_00498adc;
extern uint DAT_00498ae0;
extern uint *DAT_00498ae4;
extern uint DAT_00498ae8;
extern uint *DAT_00498aec;

// USA 004989EC <- EU 004989C4 (Ghidra, non-matching)
// GLOBAL DAT_00498ad4 int *
// GLOBAL DAT_00498ad8 uint
// GLOBAL DAT_00498adc uint
// GLOBAL DAT_00498ae0 uint
// GLOBAL DAT_00498ae4 uint *
// GLOBAL DAT_00498ae8 uint
// GLOBAL DAT_00498aec uint *

undefined8 func_004989EC(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  uint *extraout_r1;
  uint *puVar8;
  undefined8 uVar9;
  
  piVar7 = (int *)*DAT_00498ad4;
  puVar8 = param_2;
  if ((((uint)*DAT_00498ad4 & 1) == 0) &&
     (iVar6 = func_00100174(DAT_00498ad4), puVar4 = DAT_00498ae4, uVar3 = DAT_00498ae0,
     uVar2 = DAT_00498adc, uVar1 = DAT_00498ad8, piVar7 = (int *)0x0, puVar8 = extraout_r1,
     iVar6 != 0)) {
    DAT_00498ae4[2] = DAT_00498ae0;
    uVar5 = DAT_00498ae8;
    puVar8 = puVar4 + 3;
    *puVar4 = uVar1;
    puVar4[1] = uVar2;
    *puVar8 = uVar3;
    puVar4[4] = uVar5;
    puVar4[5] = uVar3;
    puVar4[6] = uVar3;
    puVar4[7] = uVar3;
    puVar4[8] = uVar3;
    puVar4[9] = uVar2;
    puVar4[10] = uVar2;
    puVar4[0xb] = uVar3;
    puVar4[0xc] = uVar5;
    puVar4[0xd] = uVar5;
    puVar4[0xe] = uVar3;
    puVar4[0xf] = uVar3;
    puVar4[0x10] = uVar3;
    puVar4[0x11] = uVar3;
    puVar4[0x12] = uVar1;
    puVar4[0x13] = uVar1;
    puVar4[0x14] = uVar3;
    puVar4[0x15] = uVar3;
    puVar4[0x16] = uVar3;
    puVar4[0x17] = uVar5;
    puVar4[0x18] = uVar3;
    puVar4[0x19] = uVar3;
    puVar4[0x1a] = uVar3;
    puVar4[0x1b] = uVar2;
    puVar4[0x1c] = uVar1;
    puVar4[0x1d] = uVar3;
    puVar4[0x1e] = uVar5;
    puVar4[0x1f] = uVar3;
    puVar4[0x20] = uVar5;
    puVar4[0x21] = uVar3;
    puVar4[0x22] = uVar3;
    puVar4[0x23] = uVar3;
    piVar7 = DAT_00498ad4;
  }
  uVar9 = CONCAT44(puVar8,piVar7);
  if (param_1 != (uint *)0x0) {
    uVar9 = func_0010E3C4(param_1,DAT_00498ae4,0x90);
  }
  if (param_2 != (uint *)0x0) {
    uVar9 = func_0010E3C4(param_2,DAT_00498aec,0xc);
    return uVar9;
  }
  return uVar9;
}


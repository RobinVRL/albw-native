#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern int func_00113F2C(int param_1);
extern int func_0011410C(int param_1,uint param_2);
extern int DAT_001132ac;
extern undefined4 DAT_001132b0;
extern undefined4 DAT_001132b4;
extern uint *DAT_001132b8;
extern undefined4 *DAT_001132bc;

// USA 001130F4 <- EU 001130F4 (Ghidra, non-matching)
// GLOBAL DAT_001132ac int
// GLOBAL DAT_001132b0 undefined4
// GLOBAL DAT_001132b4 undefined4
// GLOBAL DAT_001132b8 uint *
// GLOBAL DAT_001132bc undefined4 *

undefined4 * func_001130F4(undefined4 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  iVar3 = DAT_001132ac;
  param_1[0x36] = param_2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  uVar7 = DAT_001132b4;
  uVar8 = DAT_001132b0;
  uVar2 = param_1[0x22];
  uVar6 = *(uint *)(param_2 + 0x2d4);
  param_1[0x22] = uVar2 * iVar3 + 0x3039;
  puVar1 = DAT_001132b8;
  param_1[0x23] =
       *(int *)(param_2 + 0x2d0) -
       (uVar2 * ((int)uVar6 >> 0x1f) + (int)((ulonglong)uVar6 * (ulonglong)uVar2 >> 0x20));
  param_1[0x24] = uVar8;
  param_1[0x32] = *(undefined4 *)(param_2 + 400);
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3f] = *(undefined4 *)(param_2 + 0x138);
  param_1[0x8b] = uVar7;
  *(undefined1 *)(param_1 + 0x8c) = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  if (((*puVar1 & 1) == 0) &&
     (iVar3 = func_00100174((int *)puVar1), puVar4 = DAT_001132bc, iVar3 != 0)) {
    puVar5 = DAT_001132bc + 4;
    *DAT_001132bc = uVar8;
    puVar4[1] = uVar7;
    puVar4[2] = uVar7;
    puVar4[3] = uVar7;
    *puVar5 = uVar7;
    puVar4[5] = uVar8;
    puVar4[6] = uVar7;
    puVar4[7] = uVar7;
    puVar4[8] = uVar7;
    puVar4[9] = uVar7;
    puVar4[10] = uVar8;
    puVar4[0xb] = uVar7;
  }
  func_001119F4(param_1 + 0x73,DAT_001132bc);
  if (((*puVar1 & 1) == 0) &&
     (iVar3 = func_00100174((int *)DAT_001132b8), puVar4 = DAT_001132bc, iVar3 != 0)) {
    puVar5 = DAT_001132bc + 4;
    *DAT_001132bc = uVar8;
    puVar4[1] = uVar7;
    puVar4[2] = uVar7;
    puVar4[3] = uVar7;
    *puVar5 = uVar7;
    puVar4[5] = uVar8;
    puVar4[6] = uVar7;
    puVar4[7] = uVar7;
    puVar4[8] = uVar7;
    puVar4[9] = uVar7;
    puVar4[10] = uVar8;
    puVar4[0xb] = uVar7;
  }
  func_001119F4(param_1 + 0x7f,DAT_001132bc);
  param_1[0x28] = uVar7;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0x25] = param_1[0xc];
  param_1[0x26] = param_1[0x10];
  param_1[0x27] = param_1[0x14];
  func_0011410C((int)param_1,param_1[0x10]);
  puVar4 = (undefined4 *)func_00113F2C((int)param_1);
  return puVar4;
}


#include "ghidra_types.h"

extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern uint DAT_0041f418;

// USA 0041F3C0 <- EU 0041F3A0 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// GLOBAL DAT_0041f418 uint

uint * func_0041F3C0(undefined4 param_1,uint *param_2,uint *param_3,uint param_4,int param_5)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  uVar1 = DAT_0041f418;
  *param_2 = param_4 & 0xff | 0x80000000;
  param_2[1] = uVar1;
  uVar3 = *param_3;
  param_2[3] = uVar1 | (int)uVar1 >> 0x13 | param_5 * 0x400000 - 0x100000U;
  puVar2 = param_2 + 4;
  param_2[2] = uVar3;
  func_00110D44(puVar2,(byte *)(param_3 + 1),param_5 * 0x10 - 4);
  puVar2[param_5 * 4 + -1] = 0;
  return puVar2 + param_5 * 4 + -1 + 1;
}


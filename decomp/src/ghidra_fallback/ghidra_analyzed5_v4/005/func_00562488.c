#include "ghidra_types.h"

extern int func_00562280(int *param_1,undefined4 *param_2,int param_3);
extern uint DAT_00562504;

// USA 00562488 <- EU 00562460 (Ghidra, non-matching)
// GLOBAL DAT_00562504 uint

undefined4 * func_00562488(char *param_1,uint *param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar2 = DAT_00562504;
  bVar1 = *(byte *)(*(int *)(param_1 + 4) + 0x50);
  uVar4 = bVar1 & 1;
  if ((bVar1 & 1) != 0) {
    uVar4 = 0x100;
  }
  if ((bVar1 & 2) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0x200;
  }
  if ((bVar1 & 4) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0x400;
  }
  if ((bVar1 & 8) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0x800;
  }
  if (param_1[1] == '\0') {
    uVar8 = 0;
  }
  else {
    uVar8 = 0x1000;
  }
  *param_2 = uVar8 | (uint)(*param_1 != '\0') | (uint)(byte)param_1[2] << 4 | uVar4 | uVar5 | uVar6
                     | uVar7;
  param_2[1] = uVar2;
  if (param_3 != 0) {
    puVar3 = func_00562280((int *)(*(int *)(param_1 + 4) + 0x7c),param_2 + 2,1);
    return puVar3;
  }
  return param_2 + 2;
}


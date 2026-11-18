#include "ghidra_types.h"

extern int func_00562280(int *param_1,undefined4 *param_2,int param_3);
extern uint DAT_00561e84;
extern uint DAT_00561e88;

// USA 00561E28 <- EU 00561E00 (Ghidra, non-matching)
// GLOBAL DAT_00561e84 uint
// GLOBAL DAT_00561e88 uint

undefined4 * func_00561E28(char *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  
  uVar1 = DAT_00561e84;
  *param_2 = (uint)(*param_1 != '\0') | (uint)(byte)param_1[4] << 4 | (uint)(byte)param_1[1] << 8 |
             *(int *)(param_1 + 8) << 0x10 | *(int *)(param_1 + 0xc) << 0x18;
  param_2[1] = uVar1;
  uVar1 = DAT_00561e88;
  param_2[2] = (uint)(byte)param_1[0x10] | (uint)(byte)param_1[0x11] << 4 |
               (uint)(byte)param_1[0x12] << 8;
  param_2[3] = uVar1;
  if (param_3 != 0) {
    puVar2 = func_00562280((int *)(*(int *)(param_1 + 0x14) + 0x7c),param_2 + 4,1);
    return puVar2;
  }
  return param_2 + 4;
}


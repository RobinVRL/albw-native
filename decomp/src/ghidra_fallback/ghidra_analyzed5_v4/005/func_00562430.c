#include "ghidra_types.h"

extern int func_00562280(int *param_1,undefined4 *param_2,int param_3);
extern uint DAT_0056245c;

// USA 00562430 <- EU 00562408 (Ghidra, non-matching)
// GLOBAL DAT_0056245c uint

undefined4 * func_00562430(char *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  
  uVar1 = DAT_0056245c;
  *param_2 = (uint)(*param_1 != '\0') | (uint)(byte)param_1[2] << 4 | (uint)(byte)param_1[1] << 8;
  param_2[1] = uVar1;
  if (param_3 != 0) {
    puVar2 = func_00562280((int *)(*(int *)(param_1 + 4) + 0x7c),param_2 + 2,1);
    return puVar2;
  }
  return param_2 + 2;
}


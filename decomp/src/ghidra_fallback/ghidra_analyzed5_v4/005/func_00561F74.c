#include "ghidra_types.h"

extern int func_00562280(int *param_1,undefined4 *param_2,int param_3);
extern undefined4 DAT_00561fc4;

// USA 00561F74 <- EU 00561F4C (Ghidra, non-matching)
// GLOBAL DAT_00561fc4 undefined4

undefined4 * func_00561F74(char *param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  uVar1 = DAT_00561fc4;
  uVar3 = 0;
  if (*param_1 == '\0') goto LAB_00561f94;
  if (param_1[1] == '\0') {
    if (param_1[2] == '\0') goto LAB_00561fb8;
  }
  else if ((param_1[1] == '\x01') && (param_1[2] == '\x01')) {
LAB_00561fb8:
    uVar3 = 2;
    goto LAB_00561f94;
  }
  uVar3 = 1;
LAB_00561f94:
  *param_2 = uVar3;
  param_2[1] = uVar1;
  if (param_3 == 0) {
    return param_2 + 2;
  }
  puVar2 = func_00562280((int *)(*(int *)(param_1 + 4) + 0x7c),param_2 + 2,1);
  return puVar2;
}


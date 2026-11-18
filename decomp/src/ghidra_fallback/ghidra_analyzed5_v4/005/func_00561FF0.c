#include "ghidra_types.h"

extern int func_00562280(int *param_1,undefined4 *param_2,int param_3);
extern undefined4 DAT_0056202c;
extern undefined4 DAT_00562030;
extern undefined4 DAT_00562034;

// USA 00561FF0 <- EU 00561FC8 (Ghidra, non-matching)
// GLOBAL DAT_0056202c undefined4
// GLOBAL DAT_00562030 undefined4
// GLOBAL DAT_00562034 undefined4

undefined4 * func_00561FF0(char *param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  uVar1 = DAT_0056202c;
  if (*param_1 != '\0') {
    *param_2 = 0xe40000;
    param_2[1] = uVar1;
    uVar1 = DAT_00562030;
    param_2[2] = 0x1010000;
    uVar2 = DAT_00562034;
    param_2[3] = uVar1;
    param_2[4] = (uint)(byte)param_1[1];
    param_2[5] = uVar2;
    param_2 = param_2 + 6;
  }
  if (param_3 != 0) {
    puVar3 = func_00562280((int *)(*(int *)(param_1 + 4) + 0x7c),param_2,1);
    return puVar3;
  }
  return param_2;
}


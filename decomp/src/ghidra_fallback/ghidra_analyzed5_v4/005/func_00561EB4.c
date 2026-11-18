#include "ghidra_types.h"

extern int func_00562280(int *param_1,undefined4 *param_2,int param_3);
extern int DAT_00561f40;
extern uint DAT_00561f44;
extern int DAT_00561f48;

// USA 00561EB4 <- EU 00561E8C (Ghidra, non-matching)
// GLOBAL DAT_00561f40 int
// GLOBAL DAT_00561f44 uint
// GLOBAL DAT_00561f48 int

undefined4 * func_00561EB4(char *param_1,int *param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint *puVar5;
  int iVar6;
  
  uVar2 = DAT_00561f44;
  cVar1 = *param_1;
  iVar6 = DAT_00561f40 + -0xe10000;
  *param_2 = DAT_00561f40;
  iVar3 = DAT_00561f48;
  if (cVar1 == '\0') {
    param_2[1] = iVar6;
    param_2[2] = iVar3;
    puVar5 = (uint *)(param_2 + 3);
    *puVar5 = uVar2;
  }
  else {
    param_2[1] = iVar6;
    param_2[2] = (uint)*(uint3 *)(param_1 + 1) | (uint)(byte)param_1[5] << 0x14 |
                 (uint)(byte)param_1[4] << 0x18 | (uint)(byte)param_1[6] << 0x1c;
    param_2[3] = uVar2;
    param_2[4] = 6;
    param_2[5] = uVar2 + 1;
    param_2[6] = *(uint *)(param_1 + 7) & 0xffffff | (uint)(byte)param_1[10] << 0x18;
    param_2[7] = uVar2 | (int)uVar2 >> 0x12;
    puVar5 = (uint *)(param_2 + 7);
  }
  if (param_3 != 0) {
    puVar4 = func_00562280((int *)(*(int *)(param_1 + 0xc) + 0x7c),puVar5 + 1,1);
    return puVar4;
  }
  return puVar5 + 1;
}


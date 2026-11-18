#include "ghidra_types.h"

extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_003CB2EC(int *param_1,int param_2,int param_3);
extern uint DAT_0056192c;
extern uint DAT_00561930;
extern uint DAT_00561934;
extern uint DAT_00561938;

// USA 00561808 <- EU 005617E0 (Ghidra, non-matching)
// GLOBAL DAT_0056192c uint
// GLOBAL DAT_00561930 uint
// GLOBAL DAT_00561934 uint
// GLOBAL DAT_00561938 uint

uint * func_00561808(int *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  
  if (param_3 != 0) {
    param_2 = (uint *)func_003CB2EC((int *)param_2,(param_1[1] >> 0x1f) + 1,
                                    (uint)*(byte *)(param_1 + 0x28));
  }
  iVar2 = param_1[1];
  if (-1 < iVar2) {
    func_00110D44(param_2,(byte *)(param_1[0x2d] + *(int *)(param_1[0x30] + iVar2 * 4) * 4),
                  *(int *)(param_1[0x2e] + iVar2 * 4) << 2);
    uVar1 = DAT_0056192c;
    puVar4 = param_2 + *(int *)(param_1[0x2e] + param_1[1] * 4);
    *puVar4 = param_1[0x2a] | 0x7fff0000;
    param_2 = puVar4 + 2;
    puVar4[1] = uVar1;
  }
  func_00110D44(param_2,(byte *)(param_1[0x2d] + *(int *)(param_1[0x30] + *param_1 * 4) * 4),
                *(int *)(param_1[0x2e] + *param_1 * 4) << 2);
  uVar1 = DAT_00561930;
  puVar4 = param_2 + *(int *)(param_1[0x2e] + *param_1 * 4);
  *puVar4 = param_1[0x29] | 0x7fff0000;
  puVar4[1] = uVar1;
  uVar1 = DAT_00561934;
  uVar3 = 0x100;
  if ((char)param_1[0x28] != '\x03') {
    uVar3 = 0;
  }
  puVar4[2] = uVar3;
  uVar3 = 0x100;
  puVar4[3] = uVar1;
  uVar1 = DAT_00561938;
  if ((char)param_1[0x28] != '\x03') {
    uVar3 = 0;
  }
  puVar4[4] = uVar3;
  puVar4[5] = uVar1;
  func_00110D44(puVar4 + 6,(byte *)(param_1[0x2b] + *(int *)(param_1[0x32] + param_1[2] * 4) * 4),
                *(int *)(param_1[0x2c] + param_1[2] * 4) << 2);
  return puVar4 + 6 + *(int *)(param_1[0x2c] + param_1[2] * 4);
}


#include "ghidra_types.h"

extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_003CB2EC(int *param_1,int param_2,int param_3);
extern int func_00561600(undefined4 param_1,undefined4 *param_2,uint param_3,undefined4 *param_4,uint param_5);
extern uint DAT_005615b0;
extern int DAT_005615b4;
extern uint DAT_005615b8;
extern uint DAT_005615bc;
extern uint DAT_005615c0;
extern int DAT_005615c4;
extern uint DAT_005615c8;
extern uint DAT_005615cc;
extern uint DAT_005615d0;
extern uint DAT_005615d4;

// USA 005613D4 <- EU 005613AC (Ghidra, non-matching)
// GLOBAL DAT_005615b0 uint
// GLOBAL DAT_005615b4 int
// GLOBAL DAT_005615b8 uint
// GLOBAL DAT_005615bc uint
// GLOBAL DAT_005615c0 uint
// GLOBAL DAT_005615c4 int
// GLOBAL DAT_005615c8 uint
// GLOBAL DAT_005615cc uint
// GLOBAL DAT_005615d0 uint
// GLOBAL DAT_005615d4 uint

uint * func_005613D4(int *param_1,int *param_2)

{
  int iVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  
  puVar2 = (uint *)func_003CB2EC(param_2,(param_1[1] >> 0x1f) + 1,(uint)*(byte *)(param_1 + 0x28));
  uVar6 = DAT_005615b0;
  if (-1 < param_1[1]) {
    *puVar2 = 0;
    puVar2[1] = uVar6;
    puVar3 = func_00561600(param_1,puVar2 + 2,0x29c,(undefined4 *)param_1[0x24],param_1[0x25]);
    iVar1 = DAT_005615b4;
    *puVar3 = 1;
    uVar6 = DAT_005615b8;
    puVar3[1] = iVar1;
    puVar3[2] = 0;
    puVar3[3] = iVar1 + 0x16;
    puVar3 = func_00561600(param_1,puVar3 + 4,uVar6,(undefined4 *)param_1[0x26],param_1[0x27]);
    func_00110D44(puVar3,(byte *)(param_1[0x2d] + *(int *)(param_1[0x30] + param_1[1] * 4) * 4),
                  *(int *)(param_1[0x2e] + param_1[1] * 4) << 2);
    uVar6 = DAT_005615bc;
    puVar4 = puVar3 + *(int *)(param_1[0x2e] + param_1[1] * 4);
    *puVar4 = param_1[0x2a] | 0x7fff0000;
    puVar2 = puVar4 + 2;
    puVar4[1] = uVar6;
  }
  uVar6 = DAT_005615c0;
  *puVar2 = 0;
  puVar2[1] = uVar6;
  uVar6 = param_1[0x25];
  if (0x1ff < uVar6) {
    uVar6 = 0x200;
  }
  puVar3 = func_00561600(param_1,puVar2 + 2,0x2cc,(undefined4 *)param_1[0x24],uVar6);
  iVar1 = DAT_005615c4;
  *puVar3 = 1;
  uVar6 = DAT_005615c8;
  puVar3[1] = iVar1;
  puVar3[2] = 0;
  puVar3[3] = iVar1 + 0x16;
  puVar3 = func_00561600(param_1,puVar3 + 4,uVar6,(undefined4 *)param_1[0x26],param_1[0x27]);
  func_00110D44(puVar3,(byte *)(param_1[0x2d] + *(int *)(param_1[0x30] + *param_1 * 4) * 4),
                *(int *)(param_1[0x2e] + *param_1 * 4) << 2);
  uVar6 = DAT_005615cc;
  puVar2 = puVar3 + *(int *)(param_1[0x2e] + *param_1 * 4);
  *puVar2 = param_1[0x29] | 0x7fff0000;
  puVar2[1] = uVar6;
  uVar6 = DAT_005615d0;
  uVar5 = 0x100;
  if ((char)param_1[0x28] != '\x03') {
    uVar5 = 0;
  }
  puVar2[2] = uVar5;
  uVar5 = 0x100;
  puVar2[3] = uVar6;
  uVar6 = DAT_005615d4;
  if ((char)param_1[0x28] != '\x03') {
    uVar5 = 0;
  }
  puVar2[4] = uVar5;
  puVar2[5] = uVar6;
  func_00110D44(puVar2 + 6,(byte *)(param_1[0x2b] + *(int *)(param_1[0x32] + param_1[2] * 4) * 4),
                *(int *)(param_1[0x2c] + param_1[2] * 4) << 2);
  return puVar2 + 6 + *(int *)(param_1[0x2c] + param_1[2] * 4);
}


#include "ghidra_types.h"

extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_003CD000(int *param_1,int param_2,int param_3);
extern int func_00562D5C(undefined4 param_1,undefined4 *param_2,uint param_3,undefined4 *param_4,uint param_5);
extern uint DAT_00562d08;
extern int DAT_00562d0c;
extern uint DAT_00562d10;
extern uint DAT_00562d14;
extern uint DAT_00562d18;
extern int DAT_00562d1c;
extern uint DAT_00562d20;
extern int DAT_00562d24;
extern uint DAT_00562d28;
extern uint DAT_00562d2c;
extern uint DAT_00562d30;

// USA 00562B24 <- EU 00562AFC (Ghidra, non-matching)
// GLOBAL DAT_00562d08 uint
// GLOBAL DAT_00562d0c int
// GLOBAL DAT_00562d10 uint
// GLOBAL DAT_00562d14 uint
// GLOBAL DAT_00562d18 uint
// GLOBAL DAT_00562d1c int
// GLOBAL DAT_00562d20 uint
// GLOBAL DAT_00562d24 int
// GLOBAL DAT_00562d28 uint
// GLOBAL DAT_00562d2c uint
// GLOBAL DAT_00562d30 uint

uint * func_00562B24(int *param_1,int *param_2)

{
  int iVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  
  puVar2 = (uint *)func_003CD000(param_2,(param_1[1] >> 0x1f) + 1,(uint)*(byte *)(param_1 + 0xa6));
  uVar6 = DAT_00562d08;
  if (-1 < param_1[1]) {
    *puVar2 = 0;
    puVar2[1] = uVar6;
    puVar3 = func_00562D5C(param_1,puVar2 + 2,0x29c,(undefined4 *)param_1[0x23],param_1[0x24]);
    iVar1 = DAT_00562d0c;
    *puVar3 = 1;
    uVar6 = DAT_00562d10;
    puVar3[1] = iVar1;
    puVar3[2] = 0;
    puVar3[3] = iVar1 + 0x16;
    puVar3 = func_00562D5C(param_1,puVar3 + 4,uVar6,param_1 + 0x25,param_1[0xa5]);
    func_00110D44(puVar3,(byte *)(param_1 + param_1[1] * 0x24a + 0xda),
                  param_1[param_1[1] + 0x4a1a] << 2);
    uVar6 = DAT_00562d14;
    puVar4 = puVar3 + param_1[param_1[1] + 0x4a1a];
    *puVar4 = param_1[0xa8] | 0x7fff0000;
    puVar2 = puVar4 + 2;
    puVar4[1] = uVar6;
  }
  uVar6 = DAT_00562d18;
  *puVar2 = 0;
  puVar2[1] = uVar6;
  uVar6 = param_1[0x24];
  if (0x1ff < uVar6) {
    uVar6 = 0x200;
  }
  puVar3 = func_00562D5C(param_1,puVar2 + 2,0x2cc,(undefined4 *)param_1[0x23],uVar6);
  iVar1 = DAT_00562d1c;
  *puVar3 = 1;
  uVar6 = DAT_00562d20;
  puVar3[1] = iVar1;
  puVar3[2] = 0;
  puVar3[3] = iVar1 + 0x16;
  puVar3 = func_00562D5C(param_1,puVar3 + 4,uVar6,param_1 + 0x25,param_1[0xa5]);
  func_00110D44(puVar3,(byte *)(param_1 + *param_1 * DAT_00562d24 * 2 + 0xda),
                param_1[*param_1 + 0x4a1a] << 2);
  uVar6 = DAT_00562d28;
  puVar2 = puVar3 + param_1[*param_1 + 0x4a1a];
  *puVar2 = param_1[0xa7] | 0x7fff0000;
  puVar2[1] = uVar6;
  uVar6 = DAT_00562d2c;
  uVar5 = 0x100;
  if ((char)param_1[0xa6] != '\x03') {
    uVar5 = 0;
  }
  puVar2[2] = uVar5;
  uVar5 = 0x100;
  puVar2[3] = uVar6;
  uVar6 = DAT_00562d30;
  if ((char)param_1[0xa6] != '\x03') {
    uVar5 = 0;
  }
  puVar2[4] = uVar5;
  puVar2[5] = uVar6;
  func_00110D44(puVar2 + 6,(byte *)(param_1 + 0xa9),param_1[0xd9] << 2);
  return puVar2 + 6 + param_1[0xd9];
}


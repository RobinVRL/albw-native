#include "ghidra_types.h"

extern int func_00561EB4(char *param_1,int *param_2,int param_3);
extern int func_00562060(float *param_1,undefined4 *param_2);
extern int func_00562280(int *param_1,undefined4 *param_2,int param_3);
extern int func_00562530(char *param_1,uint *param_2,int param_3,int param_4);
extern undefined4 DAT_00561de0;
extern uint DAT_00561de4;
extern uint DAT_00561de8;
extern uint DAT_00561dec;
extern uint DAT_00561df0;
extern uint DAT_00561df4;
extern uint DAT_00561df8;
extern uint DAT_00561dfc;

// USA 00561C34 <- EU 00561C0C (Ghidra, non-matching)
// GLOBAL DAT_00561de0 undefined4
// GLOBAL DAT_00561de4 uint
// GLOBAL DAT_00561de8 uint
// GLOBAL DAT_00561dec uint
// GLOBAL DAT_00561df0 uint
// GLOBAL DAT_00561df4 uint
// GLOBAL DAT_00561df8 uint
// GLOBAL DAT_00561dfc uint

undefined4 * func_00561C34(char *param_1,undefined4 *param_2,int param_3)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar2 = DAT_00561de0;
  uVar4 = 0;
  if (param_1[0x5c] == '\0') goto LAB_00561c60;
  if (param_1[0x5d] == '\0') {
    if (param_1[0x5e] == '\0') goto LAB_00561dd8;
  }
  else if ((param_1[0x5d] == '\x01') && (param_1[0x5e] == '\x01')) {
LAB_00561dd8:
    uVar4 = 2;
    goto LAB_00561c60;
  }
  uVar4 = 1;
LAB_00561c60:
  *param_2 = uVar4;
  param_2[1] = uVar2;
  puVar5 = (uint *)func_00561EB4(param_1,param_2 + 2,0);
  uVar3 = DAT_00561de4;
  if (param_1[0x10] != '\0') {
    *puVar5 = 0xe40000;
    uVar9 = DAT_00561de8;
    puVar5[1] = uVar3;
    puVar5[2] = 0x1010000;
    uVar3 = DAT_00561dec;
    puVar5[3] = uVar9;
    puVar5[4] = (uint)(byte)param_1[0x11];
    puVar5[5] = uVar3;
    puVar5 = puVar5 + 6;
  }
  puVar5 = func_00562530(param_1 + 0x18,puVar5,0,1);
  uVar3 = DAT_00561df0;
  *puVar5 = (uint)(param_1[0x30] != '\0') | (uint)(byte)param_1[0x32] << 4 |
            (uint)(byte)param_1[0x31] << 8;
  puVar5[1] = uVar3;
  uVar3 = DAT_00561df4;
  puVar5[2] = (uint)(param_1[0x38] != '\0') | (uint)(byte)param_1[0x3c] << 4 |
              (uint)(byte)param_1[0x39] << 8 | *(int *)(param_1 + 0x40) << 0x10 |
              *(int *)(param_1 + 0x44) << 0x18;
  puVar5[3] = uVar3;
  uVar3 = DAT_00561df8;
  puVar5[4] = (uint)(byte)param_1[0x48] | (uint)(byte)param_1[0x49] << 4 |
              (uint)(byte)param_1[0x4a] << 8;
  puVar5[5] = uVar3;
  uVar3 = DAT_00561dfc;
  bVar1 = *(byte *)(*(int *)(param_1 + 0x58) + 0x50);
  uVar9 = bVar1 & 1;
  if ((bVar1 & 1) != 0) {
    uVar9 = 0x100;
  }
  if ((bVar1 & 2) == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = 0x200;
  }
  if ((bVar1 & 4) == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = 0x400;
  }
  if ((bVar1 & 8) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0x800;
  }
  if (param_1[0x55] == '\0') {
    uVar8 = 0;
  }
  else {
    uVar8 = 0x1000;
  }
  puVar5[6] = uVar8 | (uint)(param_1[0x54] != '\0') | (uint)(byte)param_1[0x56] << 4 | uVar9 |
                      uVar10 | uVar11 | uVar7;
  puVar5[7] = uVar3;
  puVar6 = func_00562060((float *)(param_1 + 100),puVar5 + 8);
  puVar6 = func_00562280((int *)(param_1 + 0x7c),puVar6,param_3);
  return puVar6;
}


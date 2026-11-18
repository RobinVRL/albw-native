#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001150CC(undefined4 *param_1,undefined4 *param_2,undefined4 param_3);
extern int func_004968B4(int param_1,int *param_2,int *param_3);
extern int func_004979CC(int param_1,uint param_2,int *param_3);
extern int func_004A1828(uint *param_1,uint param_2,uint *param_3);
extern uint *DAT_00496bd4;
extern undefined4 *DAT_00496bd8;
extern undefined4 DAT_00496bdc;
extern uint DAT_00496be0;
extern undefined4 DAT_00496be4;
extern uint DAT_00496be8;
extern uint DAT_00496bec;

// USA 00496ABC <- EU 00496A94 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 uint *
// PARAM param_6 Stack[0x4]:4 uint *
// PARAM param_7 Stack[0x8]:4 uint *
// GLOBAL DAT_00496bd4 uint *
// GLOBAL DAT_00496bd8 undefined4 *
// GLOBAL DAT_00496bdc undefined4
// GLOBAL DAT_00496be0 uint
// GLOBAL DAT_00496be4 undefined4
// GLOBAL DAT_00496be8 uint
// GLOBAL DAT_00496bec uint

undefined4 func_00496ABC(int param_1,undefined4 *param_2,int *param_3,uint *param_4,uint *param_5,
                  uint *param_6,uint *param_7)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  uint uVar8;
  
  if (((*DAT_00496bd4 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_00496bd4), iVar4 != 0)) {
    *DAT_00496bd8 = DAT_00496bdc;
  }
  iVar4 = (**(code **)*param_3)(param_3,DAT_00496bd8);
  if (iVar4 == 0) {
    param_3 = (int *)0x0;
  }
  func_004979CC(param_1,1,param_3);
  uVar1 = DAT_00496be0;
  puVar6 = (undefined4 *)(param_1 + 0x487c);
  puVar7 = (uint *)*puVar6;
  *puVar7 = *(byte *)(param_1 + 0x16) | 0x80000000;
  uVar2 = DAT_00496be4;
  puVar7[1] = uVar1;
  func_001150CC(puVar7 + 2,param_2,uVar2);
  *puVar6 = puVar7 + 0x10;
  puVar7 = func_004A1828(puVar7 + 0x10,(uint)*(byte *)(param_1 + 0x1e),param_4);
  *puVar6 = puVar7;
  puVar7 = func_004A1828(puVar7,(uint)*(byte *)(param_1 + 0x26),param_5);
  *puVar6 = puVar7;
  uVar3 = DAT_00496bec;
  uVar5 = *param_6;
  uVar8 = param_6[1];
  *puVar7 = *(byte *)(param_1 + 0x2e) | 0x80000000;
  uVar1 = DAT_00496be8;
  puVar7[1] = uVar3;
  puVar7[2] = uVar1;
  puVar7[3] = uVar1;
  puVar7[4] = uVar8;
  puVar7[5] = uVar5;
  *puVar6 = puVar7 + 6;
  uVar5 = *param_7;
  uVar8 = param_7[1];
  puVar7[6] = *(byte *)(param_1 + 0x36) | 0x80000000;
  puVar7[7] = uVar3;
  puVar7[8] = uVar1;
  puVar7[9] = uVar1;
  puVar7[10] = uVar8;
  puVar7[0xb] = uVar5;
  *puVar6 = puVar7 + 0xc;
  return func_004968B4(param_1,(int *)(param_1 + 0x32c),(int *)(param_1 + 0xac0));
}


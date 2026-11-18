#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_002D5C70(undefined4 *param_1,int *param_2);
extern int func_004EE484(undefined4 *param_1);
extern undefined4 DAT_00367104;
extern undefined4 DAT_00367108;
extern undefined4 DAT_0036710c;
extern undefined4 DAT_00367110;
extern undefined4 DAT_00367114;
extern uint *DAT_00367118;
extern undefined4 *DAT_0036711c;
extern undefined4 DAT_00367120;

// USA 00366FC8 <- EU 00366FA4 (Ghidra, non-matching)
// GLOBAL DAT_00367104 undefined4
// GLOBAL DAT_00367108 undefined4
// GLOBAL DAT_0036710c undefined4
// GLOBAL DAT_00367110 undefined4
// GLOBAL DAT_00367114 undefined4
// GLOBAL DAT_00367118 uint *
// GLOBAL DAT_0036711c undefined4 *
// GLOBAL DAT_00367120 undefined4

int func_00366FC8(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  puVar2 = (undefined4 *)func_002D5C70(param_1,param_2);
  uVar5 = DAT_00367108;
  *puVar2 = DAT_00367104;
  puVar2[0x1d] = uVar5;
  puVar2[0x1e] = uVar5;
  puVar2[0x1f] = uVar5;
  puVar2[0x20] = uVar5;
  puVar2[0x21] = uVar5;
  puVar2[0x22] = uVar5;
  puVar2[0x23] = uVar5;
  puVar2[0x24] = uVar5;
  puVar2[0x25] = uVar5;
  uVar1 = DAT_0036710c;
  *(undefined2 *)(puVar2 + 0x26) = 0;
  puVar2[0x27] = 0;
  *(undefined1 *)(puVar2 + 0x28) = 0;
  puVar2[0x29] = uVar1;
  puVar2[0x2a] = uVar1;
  puVar2[0x2b] = uVar1;
  uVar1 = DAT_00367110;
  puVar2[0x2c] = DAT_00367110;
  puVar2[0x2d] = uVar1;
  puVar2[0x2e] = uVar1;
  puVar2[0x2f] = 0;
  puVar2[0x30] = 0;
  *(undefined2 *)(puVar2 + 0x31) = 6;
  puVar2[0x1c] = DAT_00367114;
  puVar2[0x32] = uVar5;
  iVar3 = func_004EE484(puVar2 + 0x33);
  *(undefined1 *)(iVar3 + 0x70) = 0;
  *(undefined1 *)(iVar3 + 0x71) = 0;
  *(undefined4 *)(iVar3 + 0x74) = uVar5;
  *(undefined4 *)(iVar3 + 0x78) = uVar5;
  *(undefined4 *)(iVar3 + 0x7c) = uVar5;
  *(undefined4 *)(iVar3 + 0x80) = uVar5;
  *(undefined4 *)(iVar3 + 0x84) = 0;
  *(undefined4 *)(iVar3 + 0x88) = *(undefined4 *)(*(int *)(iVar3 + -0x9c) + 4);
  puVar2 = *(undefined4 **)(*(int *)(iVar3 + -0xa4) + 0x64c);
  if (((*DAT_00367118 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_00367118), iVar4 != 0)) {
    *DAT_0036711c = DAT_00367120;
  }
  if ((puVar2 == (undefined4 *)0x0) ||
     (iVar4 = (**(code **)*puVar2)(puVar2,DAT_0036711c), iVar4 == 0)) {
    puVar2 = (undefined4 *)0x0;
  }
  *(int *)(iVar3 + 0x10) = iVar3 + -0x5c;
  *(undefined4 **)(iVar3 + 0x8c) = puVar2;
  *(undefined1 *)(iVar3 + 0x21) = 8;
  *(undefined1 *)(iVar3 + 0x22) = 0;
  return iVar3 + -0xcc;
}


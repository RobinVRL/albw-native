#include "ghidra_types.h"

extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_0041F3C0(undefined4 param_1,uint *param_2,uint *param_3,uint param_4,int param_5);
extern uint DAT_0041f524;
extern byte *DAT_0041f528;

// USA 0041F43C <- EU 0041F41C (Ghidra, non-matching)
// GLOBAL DAT_0041f524 uint
// GLOBAL DAT_0041f528 byte *

uint * func_0041F43C(int param_1,uint *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = (uint)*(byte *)(param_1 + 0x30);
  puVar1 = func_0041F3C0(param_1,param_2,(uint *)(param_1 + 0x88),9,uVar5);
  *(undefined1 *)(param_1 + 0x30) = 0;
  uVar3 = (uint)*(byte *)(param_1 + 0x32);
  if (uVar3 < *(byte *)(param_1 + 0x31)) {
    puVar1 = func_0041F3C0(param_1,puVar1,(uint *)(param_1 + uVar3 * 0x10 + 0x1f8),uVar3 + 0x20,
                           *(byte *)(param_1 + 0x31) - uVar3);
    *(undefined1 *)(param_1 + 0x31) = 7;
    *(undefined1 *)(param_1 + 0x32) = 7;
  }
  uVar3 = (uint)*(byte *)(param_1 + 0x34);
  if (uVar3 < *(byte *)(param_1 + 0x33)) {
    puVar1 = func_0041F3C0(param_1,puVar1,(uint *)(param_1 + uVar3 * 0x10 + 0x3f8),uVar3 + 0x40,
                           *(byte *)(param_1 + 0x33) - uVar3);
    *(undefined1 *)(param_1 + 0x33) = 0;
    *(undefined1 *)(param_1 + 0x34) = 0;
  }
  uVar3 = DAT_0041f524;
  if (uVar5 * 6 < 0x11) {
    iVar2 = 0;
  }
  else {
    iVar2 = uVar5 * 0xc + -0x20;
  }
  if ((iVar2 + *(int *)(param_1 + 0x28) & 0xfffU) < 0xfe0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x20;
  }
  *puVar1 = uVar4 | 0x80000000;
  puVar1[1] = uVar3;
  puVar1[3] = uVar3 + 1;
  puVar1[2] = uVar5 * 6;
  func_00110D44(puVar1 + 4,DAT_0041f528,0x40);
  return puVar1 + 0x14;
}


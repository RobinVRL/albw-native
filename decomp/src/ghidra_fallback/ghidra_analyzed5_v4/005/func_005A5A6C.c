#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int DAT_005a5ad8;
extern uint DAT_005a5adc;
extern uint DAT_005a5ae0;
extern uint DAT_005a5ae4;
extern uint DAT_005a5ae8;
extern undefined4 DAT_005a5aec;
extern undefined4 DAT_005a5af0;

// USA 005A5A6C <- EU 005A5A44 (Ghidra, non-matching)
// GLOBAL DAT_005a5ad8 int
// GLOBAL DAT_005a5adc uint
// GLOBAL DAT_005a5ae0 uint
// GLOBAL DAT_005a5ae4 uint
// GLOBAL DAT_005a5ae8 uint
// GLOBAL DAT_005a5aec undefined4
// GLOBAL DAT_005a5af0 undefined4

void func_005A5A6C(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  
  iVar1 = DAT_005a5ad8;
  puVar3 = (undefined4 *)(DAT_005a5ad8 + 0xc);
  *(undefined4 *)(DAT_005a5ad8 + 0x20) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x24) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  uVar4 = func_00114608(DAT_005a5adc,0xffffffff);
  *puVar3 = (int)uVar4;
  uVar4 = func_00114608(DAT_005a5ae0,(uint)((ulonglong)uVar4 >> 0x20));
  *(int *)(iVar1 + 0x10) = (int)uVar4;
  uVar4 = func_00114608(DAT_005a5ae4,(uint)((ulonglong)uVar4 >> 0x20));
  *(int *)(iVar1 + 0x14) = (int)uVar4;
  uVar4 = func_00114608(DAT_005a5ae8,(uint)((ulonglong)uVar4 >> 0x20));
  uVar2 = DAT_005a5aec;
  *(int *)(iVar1 + 0x18) = (int)uVar4;
  *(undefined4 *)(iVar1 + 0x1c) = uVar2;
  uVar2 = DAT_005a5af0;
  *(undefined4 *)(iVar1 + 0x30) = DAT_005a5af0;
  *(undefined4 *)(iVar1 + 0x34) = uVar2;
  *(undefined4 *)(iVar1 + 0x38) = uVar2;
  *(undefined4 *)(iVar1 + 0x3c) = uVar2;
  return;
}


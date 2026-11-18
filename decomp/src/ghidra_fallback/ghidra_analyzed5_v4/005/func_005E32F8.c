#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int DAT_005e331c;
extern uint DAT_005e3320;
extern uint DAT_005e3324;

// USA 005E32F8 <- EU 005E32D0 (Ghidra, non-matching)
// GLOBAL DAT_005e331c int
// GLOBAL DAT_005e3320 uint
// GLOBAL DAT_005e3324 uint

void func_005E32F8(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = DAT_005e331c;
  *(undefined4 *)(DAT_005e331c + 0x28) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x30) = 0;
  *(undefined4 *)(iVar1 + 0x34) = 0;
  uVar2 = func_00114608(DAT_005e3320,0xffffffff);
  *(int *)(iVar1 + 0xc) = (int)uVar2;
  uVar2 = func_00114608(0x4e000000,(uint)((ulonglong)uVar2 >> 0x20));
  *(int *)(iVar1 + 0x10) = (int)uVar2;
  uVar2 = func_00114608(DAT_005e3324,(uint)((ulonglong)uVar2 >> 0x20));
  *(int *)(iVar1 + 0x14) = (int)uVar2;
  return;
}


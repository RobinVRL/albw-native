#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern undefined4 *DAT_005ebcb4;
extern undefined4 DAT_005ebcb8;
extern undefined4 DAT_005ebcbc;
extern undefined4 DAT_005ebcc0;
extern undefined4 DAT_005ebcc4;
extern undefined4 DAT_005ebcc8;
extern undefined4 DAT_005ebccc;
extern uint DAT_005ebcd0;
extern uint DAT_005ebcd4;
extern uint DAT_005ebcd8;
extern undefined4 DAT_005ebcdc;
extern undefined4 *DAT_005ebce0;
extern uint DAT_005ebce4;
extern uint DAT_005ebce8;
extern uint DAT_005ebcec;

// USA 005EBBFC <- EU 005EBBD4 (Ghidra, non-matching)
// GLOBAL DAT_005ebcb4 undefined4 *
// GLOBAL DAT_005ebcb8 undefined4
// GLOBAL DAT_005ebcbc undefined4
// GLOBAL DAT_005ebcc0 undefined4
// GLOBAL DAT_005ebcc4 undefined4
// GLOBAL DAT_005ebcc8 undefined4
// GLOBAL DAT_005ebccc undefined4
// GLOBAL DAT_005ebcd0 uint
// GLOBAL DAT_005ebcd4 uint
// GLOBAL DAT_005ebcd8 uint
// GLOBAL DAT_005ebcdc undefined4
// GLOBAL DAT_005ebce0 undefined4 *
// GLOBAL DAT_005ebce4 uint
// GLOBAL DAT_005ebce8 uint
// GLOBAL DAT_005ebcec uint

void func_005EBBFC(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  puVar1 = DAT_005ebcb4;
  DAT_005ebcb4[10] = 0xffffffff;
  puVar1[0xb] = 0xffffffff;
  uVar5 = DAT_005ebcb8;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  uVar2 = DAT_005ebcbc;
  *puVar1 = uVar5;
  uVar5 = DAT_005ebcc4;
  puVar1[1] = 0;
  puVar1[2] = uVar2;
  puVar1[3] = uVar5;
  uVar5 = DAT_005ebcc0;
  puVar1[4] = DAT_005ebcc8;
  puVar1[5] = DAT_005ebccc;
  uVar3 = DAT_005ebcd0;
  puVar1[6] = DAT_005ebcd0;
  uVar6 = func_00114608(DAT_005ebcd4,uVar3);
  uVar3 = DAT_005ebcd8;
  puVar1[7] = (int)uVar6;
  uVar2 = DAT_005ebcdc;
  puVar1[8] = uVar3;
  puVar4 = DAT_005ebce0;
  *DAT_005ebce0 = uVar2;
  puVar4[1] = uVar2;
  puVar4[2] = uVar5;
  puVar4[3] = uVar5;
  uVar6 = func_00114608(DAT_005ebce4,uVar3);
  puVar1[0xe] = (int)uVar6;
  uVar6 = func_00114608(DAT_005ebce8,(uint)((ulonglong)uVar6 >> 0x20));
  puVar1[0x11] = (int)uVar6;
  uVar6 = func_00114608(DAT_005ebcec,(uint)((ulonglong)uVar6 >> 0x20));
  puVar1[0x12] = (int)uVar6;
  return;
}


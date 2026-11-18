#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00110490(undefined4 *param_1,uint param_2);
extern int func_003CD2EC(undefined4 *param_1);
extern undefined *DAT_00497998;
extern undefined *DAT_0049799c;
extern uint DAT_004979a0;

// USA 0049790C <- EU 004978E4 (Ghidra, non-matching)
// GLOBAL DAT_00497998 undefined *
// GLOBAL DAT_0049799c undefined *
// GLOBAL DAT_004979a0 uint

int func_0049790C(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  
  iVar1 = func_00100118(param_1 + 0x160,DAT_00497998,0x70,0xc);
  iVar1 = func_00100118(iVar1 + 0x540,DAT_0049799c,0x14,0xc);
  iVar5 = iVar1 + -0x6a0;
  *(undefined4 *)(iVar1 + -0x6a0) = 0;
  func_00110490((undefined4 *)(iVar1 + -0x69c),0x150);
  uVar7 = (ulonglong)DAT_004979a0;
  uVar3 = 0;
  do {
    *(undefined1 *)(iVar5 + uVar3 + 0x154) = 0;
    func_003CD2EC((undefined4 *)(iVar5 + uVar3 * 0x70 + 0x160));
    uVar4 = uVar3 + 1;
    iVar2 = iVar5 + uVar3 * 0x14;
    *(undefined1 *)(iVar2 + 0x6a0) = 0;
    uVar6 = (undefined4)uVar7;
    *(undefined4 *)(iVar2 + 0x6a4) = uVar6;
    *(undefined4 *)(iVar2 + 0x6a8) = uVar6;
    *(undefined4 *)(iVar2 + 0x6ac) = uVar6;
    *(undefined4 *)(iVar2 + 0x6b0) = uVar6;
    uVar3 = uVar4;
  } while (uVar4 < 0xc);
  *(undefined4 *)(iVar1 + 0xf4) = 0;
  *(undefined4 *)(iVar1 + 0xf8) = 0;
  *(undefined1 *)(iVar1 + 0xfc) = 0;
  return iVar5;
}


#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern undefined *DAT_003cbdb4;

// USA 003CBCDC <- EU 003CBCB8 (Ghidra, non-matching)
// GLOBAL DAT_003cbdb4 undefined *

int func_003CBCDC(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar1 = func_00100118((int)(param_1 + 4),DAT_003cbdb4,0x2c,8);
  iVar2 = iVar1 + -4;
  *(undefined1 *)(iVar1 + 0x180) = 0;
  *(undefined1 *)(iVar1 + 0x181) = 0;
  *(undefined1 *)(iVar1 + 0x182) = 0;
  *(undefined1 *)(iVar1 + 0x183) = 0;
  *(undefined1 *)(iVar1 + 0x184) = 0;
  *(undefined1 *)(iVar1 + 0x185) = 0;
  *(undefined1 *)(iVar1 + 0x186) = 0;
  *(undefined1 *)(iVar1 + 0x187) = 0;
  *(undefined1 *)(iVar1 + 0x188) = 0;
  *(undefined1 *)(iVar1 + 0x189) = 0;
  *(undefined1 *)(iVar1 + 0x18a) = 1;
  *(undefined1 *)(iVar1 + 0x18b) = 0;
  *(undefined1 *)(iVar1 + 0x18c) = 0;
  *(undefined1 *)(iVar1 + 0x18d) = 1;
  *(undefined1 *)(iVar1 + 400) = 0;
  *(undefined1 *)(iVar1 + 0x191) = 0;
  *(undefined1 *)(iVar1 + 0x192) = 0;
  *(undefined1 *)(iVar1 + 0x194) = 0;
  *(undefined1 *)(iVar1 + 0x195) = 0;
  *(undefined1 *)(iVar1 + 0x196) = 0;
  *(undefined1 *)(iVar1 + 0x198) = 0;
  *(undefined1 *)(iVar1 + 0x199) = 0;
  *(undefined1 *)(iVar1 + 0x19a) = 0;
  *(undefined1 *)(iVar1 + 0x19c) = 0;
  *(undefined1 *)(iVar1 + 0x19d) = 0;
  *(undefined1 *)(iVar1 + 0x19e) = 0;
  *(undefined1 *)(iVar1 + 0x1a0) = 0;
  *(undefined1 *)(iVar1 + 0x1a1) = 0;
  *(undefined1 *)(iVar1 + 0x1a2) = 0;
  *(undefined1 *)(iVar1 + 0x1a4) = 0;
  *(undefined1 *)(iVar1 + 0x1a5) = 0;
  *(undefined1 *)(iVar1 + 0x1a6) = 0;
  *(undefined1 *)(iVar1 + 0x1a8) = 0;
  *(undefined1 *)(iVar1 + 0x1a9) = 0;
  iVar4 = 8;
  *(undefined1 *)(iVar1 + 0x1aa) = 0;
  iVar1 = 0;
  do {
    iVar3 = iVar2 + iVar1;
    iVar4 = iVar4 + -1;
    *(undefined1 *)(iVar3 + 0x164) = 0;
    *(undefined1 *)(iVar3 + 0x16c) = 0;
    *(undefined1 *)(iVar3 + 0x174) = 0;
    *(undefined1 *)(iVar3 + 0x17c) = 0;
    *(char *)(iVar2 + iVar1 * 0x2c + 4) = (char)iVar1;
    iVar1 = iVar1 + 1;
  } while (iVar4 != 0);
  return iVar2;
}


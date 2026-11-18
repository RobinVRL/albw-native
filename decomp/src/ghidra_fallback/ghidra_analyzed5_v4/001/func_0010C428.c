#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern undefined4 DAT_0010c474;
extern undefined *DAT_0010c478;
extern undefined4 DAT_0010c47c;
extern undefined4 DAT_0010c480;

// USA 0010C428 <- EU 0010C428 (Ghidra, non-matching)
// GLOBAL DAT_0010c474 undefined4
// GLOBAL DAT_0010c478 undefined *
// GLOBAL DAT_0010c47c undefined4
// GLOBAL DAT_0010c480 undefined4

int func_0010C428(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  *param_1 = DAT_0010c474;
  param_1[1] = 0;
  iVar3 = func_00100118((int)(param_1 + 2),DAT_0010c478,0x10,4);
  uVar2 = DAT_0010c480;
  uVar1 = DAT_0010c47c;
  *(undefined4 *)(iVar3 + 0x40) = DAT_0010c47c;
  *(undefined4 *)(iVar3 + 0x44) = uVar1;
  *(undefined4 *)(iVar3 + 0x48) = uVar2;
  *(undefined1 *)(iVar3 + 0x4c) = 0;
  *(undefined1 *)(iVar3 + 0x4d) = 1;
  return iVar3 + -8;
}


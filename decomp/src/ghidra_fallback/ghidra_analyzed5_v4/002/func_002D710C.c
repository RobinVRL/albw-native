#include "ghidra_types.h"

extern int func_002D5D3C(void *param_1);
extern int func_004EE540(undefined4 *param_1);
extern undefined4 DAT_002d7138;
extern undefined4 DAT_002d713c;
extern undefined4 DAT_002d7140;

// USA 002D710C <- EU 002D70E8 (Ghidra, non-matching)
// GLOBAL DAT_002d7138 undefined4
// GLOBAL DAT_002d713c undefined4
// GLOBAL DAT_002d7140 undefined4

undefined4 func_002D710C(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  *param_1 = DAT_002d7140;
  uVar2 = DAT_002d713c;
  uVar1 = DAT_002d7138;
  iVar4 = param_1[0x14];
  *(undefined1 *)(iVar4 + 0x167) = 0;
  *(undefined4 *)(iVar4 + 0x17c) = uVar1;
  *(undefined4 *)(iVar4 + 0x180) = uVar2;
  *(undefined1 *)(param_1[0x14] + 0x52b) = 0;
  *(undefined4 *)(param_1[10] + 0x724) = uVar1;
  puVar3 = func_004EE540(param_1 + 0x3c);
  func_002D5D3C(puVar3 + -0x3c);
  return (undefined4)param_1;
}


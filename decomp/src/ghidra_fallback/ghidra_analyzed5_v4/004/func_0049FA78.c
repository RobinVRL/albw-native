#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern undefined *DAT_0049faac;

// USA 0049FA78 <- EU 0049FA50 (Ghidra, non-matching)
// GLOBAL DAT_0049faac undefined *

undefined1 * func_0049FA78(undefined1 *param_1)

{
  int iVar1;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  iVar1 = func_00100118((int)(param_1 + 8),DAT_0049faac,0x14,4);
  *(undefined4 *)(iVar1 + 0x50) = 0;
  *(undefined4 *)(iVar1 + 0x54) = 0;
  *(undefined4 *)(iVar1 + 0x58) = 0;
  *(undefined4 *)(iVar1 + 0x5c) = 0;
  *(undefined4 *)(iVar1 + 0x60) = 0;
  *(undefined4 *)(iVar1 + 100) = 0;
  *(undefined4 *)(iVar1 + 0x68) = 0;
  *(undefined4 *)(iVar1 + 0x6c) = 0xffffffff;
  *(undefined1 *)(iVar1 + 0x70) = 1;
  *(undefined4 *)(iVar1 + 0x74) = 0;
  return (undefined1 *)(iVar1 + -8);
}


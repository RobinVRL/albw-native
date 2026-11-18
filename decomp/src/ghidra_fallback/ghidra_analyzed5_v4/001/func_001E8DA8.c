#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern undefined4 DAT_001e8e40;
extern undefined *DAT_001e8e44;

// USA 001E8DA8 <- EU 001E8DA8 (Ghidra, non-matching)
// GLOBAL DAT_001e8e40 undefined4
// GLOBAL DAT_001e8e44 undefined *

undefined4 * func_001E8DA8(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = func_0010DA7C(param_1,0,3);
  *puVar1 = DAT_001e8e40;
  puVar1[4] = 1;
  puVar1[0x38b] = 0;
  puVar1[0x38c] = 0;
  puVar1[0x389] = puVar1 + 5;
  puVar1[0x38a] = 5;
  puVar1[0x38d] = 0;
  iVar2 = func_00100118((int)(puVar1 + 0x38e),DAT_001e8e44,0x1c,4);
  *(undefined4 *)(iVar2 + 0x78) = 0;
  *(undefined4 *)(iVar2 + 0x7c) = 0;
  *(int *)(iVar2 + 0x70) = iVar2;
  *(undefined4 *)(iVar2 + 0x74) = 4;
  *(undefined4 *)(iVar2 + 0xb8) = 0;
  *(undefined4 *)(iVar2 + 0xbc) = 0;
  *(int *)(iVar2 + 0xb0) = iVar2 + 0x80;
  *(undefined4 *)(iVar2 + 0xb4) = 4;
  return (undefined4 *)(iVar2 + -0xe38);
}


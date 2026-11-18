#include "ghidra_types.h"

extern int func_0010BF5C(undefined4 *param_1);
extern int func_0010CA4C(undefined4 *param_1);
extern int func_0010DA24(int param_1,undefined4 param_2);
extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern undefined4 DAT_0010b8ec;

// USA 0010B880 <- EU 0010B880 (Ghidra, non-matching)
// GLOBAL DAT_0010b8ec undefined4

undefined4 * func_0010B880(undefined4 *param_1,byte *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined8 uVar3;
  
  puVar1 = func_0010CA4C(param_1);
  *puVar1 = DAT_0010b8ec;
  uVar3 = func_00110D44(puVar1 + 0x14,param_2,0x50);
  puVar1[0x28] = 0;
  puVar1[0x2a] = 0;
  puVar1[0x2b] = 0;
  iVar2 = func_0010DA24((int)(puVar1 + 0x2c),(int)((ulonglong)uVar3 >> 0x20));
  iVar2 = func_0010DA24(iVar2 + 8,extraout_r1);
  *(undefined4 *)(iVar2 + 8) = 0;
  iVar2 = func_0010BF5C((undefined4 *)(iVar2 + 0x1c));
  *(undefined4 *)(iVar2 + 0x48) = 0;
  *(undefined4 *)(iVar2 + 0x4c) = 0;
  *(undefined4 *)(iVar2 + 0x50) = 0;
  return (undefined4 *)(iVar2 + -0xd4);
}


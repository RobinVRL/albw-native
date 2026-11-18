#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00431F28(int param_1,int param_2);
extern int func_0043227C(undefined4 *param_1);
extern int func_004A8EB4(int param_1);
extern undefined4 DAT_004edc24;
extern undefined4 *DAT_004edc28;
extern undefined4 DAT_004edc2c;
extern undefined4 DAT_004edc30;

// USA 004EDB28 <- EU 004EDB00 (Ghidra, non-matching)
// GLOBAL DAT_004edc24 undefined4
// GLOBAL DAT_004edc28 undefined4 *
// GLOBAL DAT_004edc2c undefined4
// GLOBAL DAT_004edc30 undefined4

undefined4 func_004EDB28(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = func_004A8EB4(param_2);
  puVar2 = (undefined4 *)func_0010BAB4(0x550);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = func_0043227C(puVar2);
    *puVar2 = DAT_004edc24;
    puVar2[0x129] = puVar2;
    *(undefined1 *)(puVar2 + 0x153) = 0;
    uVar3 = DAT_004edc28[1];
    uVar4 = DAT_004edc28[2];
    puVar2[0x12a] = *DAT_004edc28;
    puVar2[299] = uVar3;
    puVar2[300] = uVar4;
    uVar4 = DAT_004edc30;
    uVar3 = DAT_004edc2c;
    puVar2[0x12d] = DAT_004edc2c;
    puVar2[0x12f] = uVar3;
    puVar2[0x130] = uVar4;
    puVar2[0x131] = uVar4;
    puVar2[0x132] = uVar4;
    puVar2[0x133] = uVar3;
    puVar2[0x134] = uVar4;
    puVar2[0x135] = uVar4;
    puVar2[0x136] = uVar4;
    puVar2[0x137] = uVar3;
    puVar2[0x138] = uVar3;
    puVar2[0x139] = uVar4;
    puVar2[0x13a] = uVar4;
    puVar2[0x13b] = uVar4;
    puVar2[0x13c] = uVar3;
    puVar2[0x13d] = uVar4;
    puVar2[0x13e] = uVar4;
    puVar2[0x13f] = uVar4;
    puVar2[0x140] = uVar3;
    puVar2[0x141] = uVar3;
    puVar2[0x142] = uVar4;
    puVar2[0x143] = uVar4;
    puVar2[0x144] = uVar4;
    puVar2[0x145] = uVar3;
    puVar2[0x146] = uVar4;
    puVar2[0x147] = uVar4;
    puVar2[0x148] = uVar4;
    puVar2[0x149] = uVar3;
    puVar2[0x14a] = uVar3;
    puVar2[0x14b] = uVar4;
    puVar2[0x14c] = uVar4;
    puVar2[0x14d] = uVar4;
    puVar2[0x14e] = uVar3;
    puVar2[0x14f] = uVar4;
    puVar2[0x150] = uVar4;
    puVar2[0x151] = uVar4;
    puVar2[0x152] = uVar3;
  }
  *(undefined4 **)(param_1 + 0x10) = puVar2;
  *(undefined4 **)(param_1 + 0x14) = puVar2 + 0x129;
  return func_00431F28((int)puVar2,iVar1);
}


#include "ghidra_types.h"

extern int func_002AED24(int param_1);
extern int func_00520FC0(void);
extern undefined4 *DAT_002ae988;
extern undefined4 DAT_002ae98c;
extern float DAT_002ae990;

// USA 002AE780 <- EU 002AE75C (Ghidra, non-matching)
// GLOBAL DAT_002ae988 undefined4 *
// GLOBAL DAT_002ae98c undefined4
// GLOBAL DAT_002ae990 float

/* WARNING: Removing unreachable block (ram,0x002ae950) */

void func_002AE780(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  undefined4 uVar6;
  uint in_fpscr;
  float fVar7;
  
  *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_1 + 200);
  *(undefined1 *)(param_1 + 0x110) = *(undefined1 *)(param_1 + 0xcc);
  *(undefined1 *)(param_1 + 0x111) = *(undefined1 *)(param_1 + 0xcd);
  *(undefined1 *)(param_1 + 0x112) = *(undefined1 *)(param_1 + 0xce);
  *(undefined1 *)(param_1 + 0x113) = *(undefined1 *)(param_1 + 0xcf);
  *(undefined1 *)(param_1 + 0x114) = *(undefined1 *)(param_1 + 0xd0);
  *(undefined1 *)(param_1 + 0x115) = *(undefined1 *)(param_1 + 0xd1);
  *(undefined1 *)(param_1 + 0x116) = *(undefined1 *)(param_1 + 0xd2);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_1 + 0xd4);
  *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_1 + 0xdc);
  *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_1 + 0xe8);
  *(undefined1 *)(param_1 + 0x24) = 0;
  if ((*(char *)(param_1 + 5) == '\0') || (*(char *)(param_1 + 4) != '\x14')) {
    bVar5 = *(byte *)(param_1 + 0x3a) & 0xfe;
  }
  else {
    bVar5 = *(byte *)(param_1 + 0x3a) | 1;
  }
  *(byte *)(param_1 + 0x3a) = bVar5;
  *(undefined2 *)(param_1 + 0x38) = 0;
  uVar1 = DAT_002ae98c;
  if (*(char *)(param_1 + 0x113) != '\0') {
    *(undefined2 *)(param_1 + 0x38) = 8;
  }
  puVar2 = DAT_002ae988;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = *puVar2;
  *(undefined4 *)(param_1 + 0x74) = puVar2[1];
  uVar6 = puVar2[2];
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x78) = uVar6;
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined2 *)(param_1 + 0x2c0) = 0;
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(*(int *)(param_1 + 0x34) + 1000);
  puVar2 = (undefined4 *)func_00520FC0();
  *(undefined4 *)(param_1 + 0x94) = *puVar2;
  *(undefined4 *)(param_1 + 0x98) = puVar2[1];
  *(undefined4 *)(param_1 + 0x9c) = puVar2[2];
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x4f0);
  func_002AED24(param_1);
  *(uint *)(*(int *)(param_1 + 0x34) + 0x5a0) =
       *(uint *)(*(int *)(param_1 + 0x34) + 0x5a0) & 0xffffdfff;
  if ((*(uint *)(*(int *)(param_1 + 0x34) + 0x59c) & 0x800) == 0) {
    bVar5 = *(byte *)(param_1 + 0x3a) & 0xef;
  }
  else {
    bVar5 = *(byte *)(param_1 + 0x3a) | 0x10;
  }
  *(byte *)(param_1 + 0x3a) = bVar5;
  uVar4 = *(uint *)(*(int *)(param_1 + 0x34) + 0x5a0);
  *(uint *)(*(int *)(param_1 + 0x34) + 0x5a0) = uVar4 | 0x40000000;
  *(uint *)(*(int *)(param_1 + 0x34) + 0x5a0) = uVar4 & 0x7fffffff | 0x40000000;
  if (*(char *)(param_1 + 0x110) == '\b') {
    iVar3 = *(int *)(param_1 + 0x34);
    *(undefined4 *)(iVar3 + 0x6ec) = 0x5a;
    fVar7 = (float)VectorUnsignedToFloat(0x5a,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(iVar3 + 0x6f0) = DAT_002ae990 / fVar7;
    *(undefined4 *)(iVar3 + 0x6e8) = 0;
  }
  return;
}


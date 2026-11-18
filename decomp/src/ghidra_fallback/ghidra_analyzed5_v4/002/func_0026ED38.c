#include "ghidra_types.h"

extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int func_00110490(undefined4 *param_1,uint param_2);
extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern int func_00494058(undefined4 *param_1);
extern int func_00498624(undefined4 *param_1);
extern undefined4 DAT_0026eeb0;
extern undefined4 DAT_0026eeb4;
extern undefined4 *DAT_0026eeb8;
extern undefined4 DAT_0026eebc;
extern undefined4 DAT_0026eec0;
extern undefined4 DAT_0026eec4;
extern undefined4 DAT_0026eec8;
extern undefined4 DAT_0026eecc;

// USA 0026ED38 <- EU 0026ED60 (Ghidra, non-matching)
// GLOBAL DAT_0026eeb0 undefined4
// GLOBAL DAT_0026eeb4 undefined4
// GLOBAL DAT_0026eeb8 undefined4 *
// GLOBAL DAT_0026eebc undefined4
// GLOBAL DAT_0026eec0 undefined4
// GLOBAL DAT_0026eec4 undefined4
// GLOBAL DAT_0026eec8 undefined4
// GLOBAL DAT_0026eecc undefined4

undefined4 * func_0026ED38(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar4 = func_0010DA7C(param_1,0,3);
  puVar5 = DAT_0026eeb8;
  uVar1 = DAT_0026eeb4;
  *puVar4 = DAT_0026eeb0;
  puVar4[4] = uVar1;
  func_001119F4(puVar4 + 5,puVar5);
  uVar3 = DAT_0026eec4;
  uVar2 = DAT_0026eec0;
  puVar4[4] = DAT_0026eebc;
  puVar4[0x11] = uVar2;
  puVar4[0x12] = uVar2;
  puVar4[0x13] = uVar3;
  puVar4[0x14] = uVar2;
  puVar4[0x15] = uVar2;
  puVar4[0x16] = uVar2;
  uVar3 = DAT_0026eec8;
  puVar4[0x17] = uVar2;
  puVar4[0x18] = uVar3;
  puVar4[0x19] = uVar2;
  puVar4 = func_00498624(puVar4 + 0x1a);
  puVar4[0x4a] = uVar1;
  func_001119F4(puVar4 + 0x4b,DAT_0026eeb8);
  puVar5 = DAT_0026eeb8;
  puVar4[0x4a] = DAT_0026eecc;
  func_001119F4(puVar4 + 0x57,puVar5);
  puVar5 = func_00494058(puVar4 + 99);
  puVar5[0x35] = 0;
  *(undefined1 *)(puVar5 + 0x36) = 0;
  *(undefined1 *)((int)puVar5 + 0xd9) = 0;
  *(undefined1 *)((int)puVar5 + 0xda) = 0;
  *(undefined1 *)((int)puVar5 + 0xdb) = 0;
  *(undefined1 *)(puVar5 + 0x37) = 0;
  func_00110490(puVar5 + 0x38,0x210);
  puVar5[0xbc] = 0;
  puVar5[0xbd] = 0;
  puVar5[0xbe] = 0;
  puVar5[0xbf] = 0;
  puVar5[0xc0] = 0;
  puVar5[0xc1] = 0;
  puVar5[0xc2] = 0;
  puVar5[0xc3] = 0;
  puVar5[0xc4] = 0;
  puVar5[0xc5] = 0;
  puVar5[0xc6] = 0;
  puVar5[200] = 0;
  puVar5[0xc9] = 0;
  puVar5[0xca] = 0;
  puVar5[199] = 0xffffffff;
  puVar5[0xcb] = 0;
  *(undefined1 *)(puVar5 + 0xcc) = 1;
  (**(code **)(puVar5[-0x79] + 0x10))(puVar5 + -0x79,puVar5 + -0x78);
  (**(code **)(puVar5[-0x19] + 0x10))(puVar5 + -0x19,puVar5 + -0x18);
  return puVar5 + -0x7d;
}


#include "ghidra_types.h"

extern int func_00230740(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4, undefined1 param_5);
extern int func_002E1BB4(undefined4 *param_1,undefined2 param_2);
extern undefined4 DAT_00166454;
extern undefined4 DAT_00166458;
extern undefined4 DAT_0016645c;
extern undefined4 DAT_00166460;

// USA 001663BC <- EU 001663C0 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:1 undefined1
// GLOBAL DAT_00166454 undefined4
// GLOBAL DAT_00166458 undefined4
// GLOBAL DAT_0016645c undefined4
// GLOBAL DAT_00166460 undefined4

undefined4 *
func_001663BC(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
             undefined1 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar3 = func_00230740(param_1,DAT_00166454,param_3,param_4,param_5);
  *puVar3 = DAT_00166458;
  puVar3 = func_002E1BB4(puVar3 + 0x2b,0);
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  puVar3[0xd] = 0;
  puVar3[0xe] = 0;
  uVar1 = DAT_0016645c;
  puVar3[0xf] = 0;
  *(undefined2 *)(puVar3 + 0x10) = 0;
  puVar3[0x11] = uVar1;
  puVar3[0x12] = uVar1;
  *(undefined1 *)(puVar3 + 0x13) = 0;
  *(undefined1 *)((int)puVar3 + 0x4d) = 0;
  *(undefined1 *)((int)puVar3 + 0x4e) = 0;
  uVar2 = DAT_00166460;
  *(undefined1 *)((int)puVar3 + 0x4f) = 1;
  puVar3[0x14] = uVar2;
  puVar3[0x15] = uVar1;
  puVar3[0x16] = uVar2;
  *(undefined1 *)(puVar3 + -0x27) = 1;
  return puVar3 + -0x2b;
}


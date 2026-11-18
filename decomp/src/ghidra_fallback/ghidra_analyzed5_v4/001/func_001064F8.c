#include "ghidra_types.h"

extern int func_00109D6C(int param_1);
extern int func_00109D78(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
extern int func_0010B418(undefined4 *param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010C58C(int param_1,undefined4 *param_2);
extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern undefined4 DAT_001066a0;
extern undefined4 DAT_001066a4;
extern undefined4 DAT_001066a8;
extern undefined4 DAT_001066ac;
extern undefined4 DAT_001066b0;
extern undefined4 DAT_001066b4;
extern undefined4 DAT_001066b8;
extern undefined4 DAT_001066bc;
extern undefined4 DAT_001066c0;
extern undefined4 DAT_001066c4;
extern undefined4 *DAT_001066c8;
extern undefined4 DAT_001066cc;
extern undefined4 DAT_001066d0;
extern undefined4 DAT_001066d4;
extern undefined4 DAT_001066d8;

// USA 001064F8 <- EU 001064F8 (Ghidra, non-matching)
// GLOBAL DAT_001066a0 undefined4
// GLOBAL DAT_001066a4 undefined4
// GLOBAL DAT_001066a8 undefined4
// GLOBAL DAT_001066ac undefined4
// GLOBAL DAT_001066b0 undefined4
// GLOBAL DAT_001066b4 undefined4
// GLOBAL DAT_001066b8 undefined4
// GLOBAL DAT_001066bc undefined4
// GLOBAL DAT_001066c0 undefined4
// GLOBAL DAT_001066c4 undefined4
// GLOBAL DAT_001066c8 undefined4 *
// GLOBAL DAT_001066cc undefined4
// GLOBAL DAT_001066d0 undefined4
// GLOBAL DAT_001066d4 undefined4
// GLOBAL DAT_001066d8 undefined4

undefined4 * func_001064F8(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  puVar1 = func_0010B418(param_1);
  *puVar1 = DAT_001066a0;
  puVar2 = (undefined4 *)func_0010BAB4(0x4c);
  uVar3 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = func_00109D78(puVar2,puVar1,puVar1 + 0x20);
  }
  puVar1[6] = uVar3;
  puVar2 = (undefined4 *)func_0010BAB4(0x18);
  uVar6 = DAT_001066b4;
  uVar5 = DAT_001066b0;
  uVar7 = DAT_001066ac;
  uVar4 = DAT_001066a8;
  uVar3 = DAT_001066a4;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = DAT_001066a4;
    puVar2[1] = uVar4;
    puVar2[2] = uVar7;
    puVar2[3] = 0;
    puVar2[4] = uVar5;
    puVar2[5] = uVar6;
  }
  puVar1[7] = puVar2;
  puVar2 = (undefined4 *)func_0010BAB4(0x18);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = uVar3;
    puVar2[1] = DAT_001066b8;
    puVar2[2] = uVar7;
    puVar2[3] = 0;
    puVar2[4] = uVar5;
    puVar2[5] = uVar6;
  }
  puVar1[8] = puVar2;
  puVar2 = (undefined4 *)func_0010BAB4(0x18);
  uVar3 = DAT_001066bc;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = DAT_001066c0;
    puVar2[1] = uVar3;
    puVar2[2] = uVar3;
    puVar2[3] = 0;
    puVar2[4] = uVar5;
    puVar2[5] = uVar6;
  }
  puVar1[9] = puVar2;
  puVar2 = DAT_001066c8;
  puVar1[10] = DAT_001066c4;
  func_001119F4(puVar1 + 0xb,puVar2);
  uVar7 = DAT_001066d0;
  puVar1[10] = DAT_001066cc;
  puVar1[0x17] = uVar4;
  puVar1[0x18] = uVar4;
  puVar1[0x19] = uVar7;
  puVar1[0x1a] = uVar4;
  puVar1[0x1b] = uVar4;
  puVar1[0x1c] = uVar4;
  uVar7 = DAT_001066d4;
  puVar1[0x1d] = uVar4;
  puVar1[0x1e] = uVar7;
  puVar1[0x1f] = uVar4;
  puVar1[0x20] = uVar4;
  puVar1[0x21] = uVar7;
  puVar1[0x22] = uVar4;
  uVar7 = DAT_001066d8;
  puVar1[0x23] = 0;
  puVar1[0x24] = uVar7;
  puVar1[0x25] = uVar4;
  puVar1[0x26] = uVar3;
  puVar1[0x27] = uVar3;
  *(undefined1 *)(puVar1 + 0x28) = 0;
  *(undefined1 *)((int)puVar1 + 0xa1) = 1;
  *(undefined1 *)((int)puVar1 + 0xa2) = 0;
  func_00109D6C(puVar1[6]);
  func_0010C58C((int)puVar1,(undefined4 *)puVar1[7]);
  *(undefined1 *)(puVar1 + 0x28) = 1;
  return puVar1;
}


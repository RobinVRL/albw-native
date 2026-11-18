#include "ghidra_types.h"

extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int func_0048FB4C(undefined4 *param_1);
extern undefined4 DAT_002347b4;
extern undefined4 DAT_002347b8;
extern undefined4 DAT_002347bc;
extern undefined4 DAT_002347c0;
extern int DAT_002347c4;

// USA 00234700 <- EU 00234700 (Ghidra, non-matching)
// GLOBAL DAT_002347b4 undefined4
// GLOBAL DAT_002347b8 undefined4
// GLOBAL DAT_002347bc undefined4
// GLOBAL DAT_002347c0 undefined4
// GLOBAL DAT_002347c4 int

undefined4 * func_00234700(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  
  puVar2 = func_0048FB4C(param_1);
  puVar2[10] = puVar2 + 0xc;
  puVar2[0xb] = 0x80;
  *(undefined1 *)(puVar2[10] + 0x7f) = 0;
  uVar1 = DAT_002347bc;
  *(undefined1 *)puVar2[10] = 0;
  puVar2[9] = uVar1;
  *(undefined1 *)(puVar2 + 0x2c) = 7;
  *(undefined1 *)((int)puVar2 + 0xb1) = 0xff;
  *puVar2 = DAT_002347c0;
  piVar3 = func_0010DA7C(puVar2 + 0x2d,0,3);
  iVar4 = DAT_002347c4 + 0x2c;
  piVar3[-0x2d] = DAT_002347c4;
  *piVar3 = iVar4;
  piVar3[4] = 0;
  piVar3[5] = 0;
  piVar3[6] = 0;
  piVar3[7] = 0;
  piVar3[8] = 0;
  piVar3[9] = 0;
  piVar3[10] = 0;
  piVar3[0xb] = 0;
  piVar3[0x14] = 0;
  piVar3[0x15] = 0;
  piVar3[0x16] = 0;
  *(undefined1 *)(piVar3 + 0x1a) = 0;
  *(undefined1 *)((int)piVar3 + 0x69) = 0;
  return piVar3 + -0x2d;
}


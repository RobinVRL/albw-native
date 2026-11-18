#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CE7C(undefined4 *param_1);
extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int func_0032FEE4(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
extern int func_00351F6C(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5);
extern int func_004CD7C8(int param_1,int param_2);
extern undefined4 DAT_002e2810;
extern undefined4 DAT_002e2814;
extern undefined4 *DAT_002e2818;
extern undefined4 DAT_002e281c;
extern undefined4 DAT_002e2820;
extern int *DAT_002e2824;

// USA 002E26E8 <- EU 002E26C4 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4
// PARAM param_6 Stack[0x4]:4 undefined4
// GLOBAL DAT_002e2810 undefined4
// GLOBAL DAT_002e2814 undefined4
// GLOBAL DAT_002e2818 undefined4 *
// GLOBAL DAT_002e281c undefined4
// GLOBAL DAT_002e2820 undefined4
// GLOBAL DAT_002e2824 int *

undefined4 *
func_002E26E8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  puVar2 = func_0010DA7C(param_1,0,3);
  *puVar2 = DAT_002e2810;
  puVar2[4] = param_6;
  *(undefined1 *)(puVar2 + 5) = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  *(undefined1 *)(puVar2 + 8) = 1;
  *(undefined1 *)((int)puVar2 + 0x21) = 0;
  *(undefined1 *)((int)puVar2 + 0x22) = 0;
  *(undefined1 *)((int)puVar2 + 0x23) = 0;
  uVar6 = DAT_002e2814;
  *(undefined1 *)(puVar2 + 9) = 0;
  *(undefined1 *)((int)puVar2 + 0x25) = 0;
  puVar2[10] = uVar6;
  puVar2[0xb] = uVar6;
  puVar2[0xc] = uVar6;
  puVar3 = DAT_002e2818;
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  uVar6 = *puVar3;
  uVar7 = puVar3[1];
  puVar3 = func_0010CE7C(puVar2 + 0xf);
  *puVar3 = DAT_002e281c;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = puVar3;
  puVar3[7] = 0;
  puVar4 = puVar3 + 9;
  puVar3[8] = 0;
  *(undefined1 *)(puVar3 + 0xe) = 0;
  if (puVar4 != (undefined4 *)0x0) {
    puVar3[10] = puVar2;
    uVar1 = DAT_002e2820;
    puVar3[0xb] = uVar6;
    puVar3[0xc] = uVar7;
    *puVar4 = uVar1;
  }
  puVar3[8] = puVar4;
  puVar3[0xf] = 0;
  puVar5 = puVar3 + -0xf;
  puVar4 = (undefined4 *)func_0010BAB4(0x2c);
  puVar2 = (undefined4 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    puVar2 = func_00351F6C(puVar4,puVar5,param_3,param_4,param_5);
  }
  puVar3[0x10] = puVar2;
  puVar4 = (undefined4 *)func_0010BAB4(0x308);
  puVar2 = (undefined4 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    puVar2 = func_0032FEE4(puVar4,puVar5,param_6);
  }
  puVar3[0x11] = puVar2;
  func_004CD7C8(*DAT_002e2824,(int)puVar3);
  return puVar5;
}


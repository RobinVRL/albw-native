#include "ghidra_types.h"

extern int func_0010961C(int param_1);
extern int func_00109698(int param_1);
extern int func_0010BA60(undefined4 *param_1);
extern int func_0010CE7C(undefined4 *param_1);
extern int func_004900D0(int param_1,int *param_2,int param_3);
extern undefined4 DAT_0049ff54;
extern undefined4 DAT_0049ff58;
extern undefined4 DAT_0049ff5c;
extern undefined4 DAT_0049ff60;
extern undefined8 *DAT_0049ff64;
extern undefined4 DAT_0049ff68;
extern undefined4 DAT_0049ff6c;

// USA 0049FE74 <- EU 0049FE4C (Ghidra, non-matching)
// GLOBAL DAT_0049ff54 undefined4
// GLOBAL DAT_0049ff58 undefined4
// GLOBAL DAT_0049ff5c undefined4
// GLOBAL DAT_0049ff60 undefined4
// GLOBAL DAT_0049ff64 undefined8 *
// GLOBAL DAT_0049ff68 undefined4
// GLOBAL DAT_0049ff6c undefined4

undefined4 * func_0049FE74(int param_1,int *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  puVar2 = (undefined4 *)func_004900D0(param_1,param_2,param_3);
  *puVar2 = DAT_0049ff54;
  puVar3 = func_0010BA60(puVar2 + 0x5b);
  uVar4 = DAT_0049ff5c;
  puVar3[6] = DAT_0049ff58;
  puVar3[5] = uVar4;
  puVar3[4] = puVar2 + 0x57;
  puVar2 = func_0010CE7C(puVar3 + -4);
  puVar1 = DAT_0049ff64;
  *puVar2 = DAT_0049ff60;
  puVar2[0x11] = 0;
  puVar2[0xf] = 0;
  puVar2[0x12] = 0;
  puVar2[0x13] = 0;
  if (puVar2 + 0xb != (undefined4 *)0x0) {
    puVar2[0xc] = 0;
    uVar4 = *(undefined4 *)((int)puVar1 + 0xc);
    puVar2[0xd] = *(undefined4 *)(puVar1 + 1);
    puVar2[0xe] = uVar4;
    puVar2[0xb] = DAT_0049ff68;
  }
  func_0010961C((int)puVar2);
  puVar3 = (undefined4 *)puVar2[0x12];
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(puVar3,puVar2,3);
  }
  puVar2[0x11] = 3;
  func_00109698((int)puVar2);
  uVar5 = *puVar1;
  func_0010961C((int)puVar2);
  if (puVar2 + 0xb != (undefined4 *)0x0) {
    puVar2[0xc] = puVar2 + -0x57;
    uVar4 = DAT_0049ff6c;
    puVar2[0xd] = (int)uVar5;
    puVar2[0xe] = (int)((ulonglong)uVar5 >> 0x20);
    puVar2[0xb] = uVar4;
  }
  func_00109698((int)puVar2);
  if (param_3 != 0) {
    puVar2[10] = param_3;
  }
  return puVar2 + -0x57;
}


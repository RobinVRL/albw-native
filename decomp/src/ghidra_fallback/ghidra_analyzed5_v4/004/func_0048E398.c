#include "ghidra_types.h"

extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_00490C38(int param_1);
extern int func_0049FAD8(undefined4 *param_1);
extern int func_004A1520();
extern undefined4 DAT_0048e408;
extern undefined4 DAT_0048e40c;
extern undefined4 DAT_0048e410;

// USA 0048E398 <- EU 0048E370 (Ghidra, non-matching)
// GLOBAL DAT_0048e408 undefined4
// GLOBAL DAT_0048e40c undefined4
// GLOBAL DAT_0048e410 undefined4

undefined4 func_0048E398(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  float in_s0;
  
  uVar1 = DAT_0048e40c;
  *param_1 = DAT_0048e408;
  param_1[0x61] = uVar1;
  func_00490C38((int)(param_1 + 0x61));
  puVar2 = func_004A1520(param_1 + 0x61);
  puVar2[-0x14] = uVar1;
  func_00490C38((int)(puVar2 + -0x14));
  puVar2 = func_004A1520(puVar2 + -0x14);
  puVar2[-0xf] = DAT_0048e410;
  if (*(char *)(puVar2 + -1) != '\0') {
    iVar3 = puVar2[-8];
    if (iVar3 != 0) {
      puVar2[-8] = 0;
      func_0010F1F8(puVar2 + -0xb,in_s0);
      *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + -1;
    }
    *(undefined1 *)(puVar2 + -1) = 0;
  }
  puVar2 = func_004A1520(puVar2 + -0xf);
  return func_0049FAD8(puVar2 + -0x3e);
}


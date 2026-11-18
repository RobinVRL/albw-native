#include "ghidra_types.h"

extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_00490C38(int param_1);
extern int func_0049FAD8(undefined4 *param_1);
extern int func_004A1520();
extern undefined4 DAT_00323db8;
extern undefined4 DAT_00323dbc;
extern undefined4 DAT_00323dc0;
extern undefined4 DAT_00323dc4;

// USA 00323D3C <- EU 00323D18 (Ghidra, non-matching)
// GLOBAL DAT_00323db8 undefined4
// GLOBAL DAT_00323dbc undefined4
// GLOBAL DAT_00323dc0 undefined4
// GLOBAL DAT_00323dc4 undefined4

undefined4 func_00323D3C(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  float in_s0;
  
  uVar2 = DAT_00323dc0;
  uVar1 = DAT_00323db8;
  *param_1 = DAT_00323dbc;
  param_1[0x7c] = uVar1;
  puVar3 = param_1 + 0x61;
  *puVar3 = uVar2;
  func_00490C38((int)puVar3);
  puVar3 = func_004A1520(puVar3);
  puVar3[-0x14] = uVar2;
  func_00490C38((int)(puVar3 + -0x14));
  puVar3 = func_004A1520(puVar3 + -0x14);
  puVar3[-0xf] = DAT_00323dc4;
  if (*(char *)(puVar3 + -1) != '\0') {
    iVar4 = puVar3[-8];
    if (iVar4 != 0) {
      puVar3[-8] = 0;
      func_0010F1F8(puVar3 + -0xb,in_s0);
      *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + -1;
    }
    *(undefined1 *)(puVar3 + -1) = 0;
  }
  puVar3 = func_004A1520(puVar3 + -0xf);
  return func_0049FAD8(puVar3 + -0x3e);
}


#include "ghidra_types.h"

extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_002E1B70(int *param_1);
extern int func_004A1520();
extern undefined4 uRam0029942c;
extern undefined4 DAT_004ed15c;
extern undefined4 DAT_004ed160;

// GLOBAL DAT_004ed15c undefined4
// GLOBAL DAT_004ed160 undefined4
// GLOBAL UNK_0029942c undefined4
// USA 00299364 <- EU 00299408 (Ghidra, function missing from the decomp table)

/* WARNING: Unknown calling convention */

undefined4 * func_00299364(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  float in_s0;
  
  *param_1 = uRam0029942c;
  func_002E1B70(param_1 + 0xe6);
  *param_1 = DAT_004ed15c;
  param_1[0xb9] = DAT_004ed160;
  if (*(char *)(param_1 + 199) != '\0') {
    iVar2 = param_1[0xc0];
    if (iVar2 != 0) {
      param_1[0xc0] = 0;
      func_0010F1F8(param_1 + 0xbd,in_s0);
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + -1;
    }
    *(undefined1 *)(param_1 + 199) = 0;
  }
  puVar1 = func_004A1520(param_1 + 0xb9);
  return puVar1 + -0xb9;
}


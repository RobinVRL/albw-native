#include "ghidra_types.h"

extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_004A1520();
extern undefined4 DAT_0036ce14;
extern undefined4 DAT_0036ce18;

// USA 0036CDD8 <- EU 0036CDB4 (Ghidra, non-matching)
// GLOBAL DAT_0036ce14 undefined4
// GLOBAL DAT_0036ce18 undefined4

undefined4 * func_0036CDD8(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  float in_s0;
  
  *param_1 = DAT_0036ce14;
  param_1[3] = DAT_0036ce18;
  if (*(char *)(param_1 + 0x11) != '\0') {
    iVar2 = param_1[10];
    if (iVar2 != 0) {
      param_1[10] = 0;
      func_0010F1F8(param_1 + 7,in_s0);
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + -1;
    }
    *(undefined1 *)(param_1 + 0x11) = 0;
  }
  puVar1 = func_004A1520(param_1 + 3);
  return puVar1 + -3;
}


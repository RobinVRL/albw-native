#include "ghidra_types.h"

extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_004A1520();
extern undefined4 DAT_00688a2c;

// USA 00688A00 <- EU 006889D8 (Ghidra, non-matching)
// GLOBAL DAT_00688a2c undefined4

undefined4 * func_00688A00(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  float in_s0;
  
  *param_1 = DAT_00688a2c;
  if (*(char *)(param_1 + 0xe) != '\0') {
    iVar2 = param_1[7];
    if (iVar2 != 0) {
      param_1[7] = 0;
      func_0010F1F8(param_1 + 4,in_s0);
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + -1;
    }
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  puVar1 = func_004A1520(param_1);
  return puVar1;
}


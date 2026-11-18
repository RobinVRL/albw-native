// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_00361658();
extern int func_004A1520();
extern undefined4 DAT_0036cbc0;
extern int *DAT_0036cbc4;
extern undefined4 DAT_0036cbc8;

// USA 0036CB64 <- EU 0036CB40 (Ghidra, non-matching)
// GLOBAL DAT_0036cbc0 undefined4
// GLOBAL DAT_0036cbc4 int *
// GLOBAL DAT_0036cbc8 undefined4

undefined4 * func_0036CB64(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  float in_s0;
  
  *param_1 = DAT_0036cbc0;
  if (*(char *)((int)param_1 + 0xfb) != '\0') {
    if (*DAT_0036cbc4 != 0) {
      func_00361658(*DAT_0036cbc4);
    }
    *(undefined1 *)((int)param_1 + 0xfb) = 0;
  }
  param_1[0x12] = DAT_0036cbc8;
  if (*(char *)(param_1 + 0x20) != '\0') {
    iVar2 = param_1[0x19];
    if (iVar2 != 0) {
      param_1[0x19] = 0;
      func_0010F1F8(param_1 + 0x16,in_s0);
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + -1;
    }
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  puVar1 = func_004A1520(param_1 + 0x12);
  return puVar1 + -0x12;
}


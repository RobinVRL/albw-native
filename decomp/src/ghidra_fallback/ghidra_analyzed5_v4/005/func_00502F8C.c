#include "ghidra_types.h"

extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_002BEA00(undefined4 *param_1);
extern int func_004A1520();
extern undefined4 DAT_00502fc8;
extern undefined4 DAT_00502fcc;

// USA 00502F8C <- EU 00502F64 (Ghidra, non-matching)
// GLOBAL DAT_00502fc8 undefined4
// GLOBAL DAT_00502fcc undefined4

undefined4 * func_00502F8C(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  float in_s0;
  
  *param_1 = DAT_00502fc8;
  param_1[0xbe] = DAT_00502fcc;
  if (*(char *)(param_1 + 0xcc) != '\0') {
    iVar2 = param_1[0xc5];
    if (iVar2 != 0) {
      param_1[0xc5] = 0;
      func_0010F1F8(param_1 + 0xc2,in_s0);
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + -1;
    }
    *(undefined1 *)(param_1 + 0xcc) = 0;
  }
  puVar1 = func_004A1520(param_1 + 0xbe);
  puVar1 = func_002BEA00(puVar1 + -0xbe);
  return puVar1;
}


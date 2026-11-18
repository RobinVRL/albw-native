#include "ghidra_types.h"

extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_004A1520();
extern undefined4 DAT_002e288c;
extern undefined4 DAT_002e2890;

// USA 002E284C <- EU 002E2828 (Ghidra, non-matching)
// GLOBAL DAT_002e288c undefined4
// GLOBAL DAT_002e2890 undefined4

undefined4 * func_002E284C(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  float in_s0;
  
  *param_1 = DAT_002e288c;
  param_1[0xf] = DAT_002e2890;
  if (*(char *)(param_1 + 0x1d) != '\0') {
    iVar2 = param_1[0x16];
    if (iVar2 != 0) {
      param_1[0x16] = 0;
      func_0010F1F8(param_1 + 0x13,in_s0);
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + -1;
    }
    *(undefined1 *)(param_1 + 0x1d) = 0;
  }
  puVar1 = func_004A1520(param_1 + 0xf);
  puVar1 = func_004A1520(puVar1 + -0xf);
  return puVar1;
}


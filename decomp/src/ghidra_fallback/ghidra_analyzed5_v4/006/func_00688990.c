#include "ghidra_types.h"

extern void func_0010F1F8(int *param_1,float fparam_0);
extern undefined4 DAT_006889d4;

// USA 00688990 <- EU 00688968 (Ghidra, non-matching)
// GLOBAL DAT_006889d4 undefined4

undefined4 * func_00688990(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  float in_s0;
  
  *param_1 = DAT_006889d4;
  puVar2 = (undefined4 *)param_1[2];
  while (puVar2 != param_1 + 1) {
    iVar1 = puVar2[2];
    puVar2 = (undefined4 *)puVar2[1];
    if (*(char *)(iVar1 + 0x38) != '\0') {
      iVar3 = *(int *)(iVar1 + 0x1c);
      if (iVar3 != 0) {
        *(undefined4 *)(iVar1 + 0x1c) = 0;
        func_0010F1F8((int *)(iVar1 + 0x10),in_s0);
        *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + -1;
      }
      *(undefined1 *)(iVar1 + 0x38) = 0;
    }
  }
  return param_1;
}


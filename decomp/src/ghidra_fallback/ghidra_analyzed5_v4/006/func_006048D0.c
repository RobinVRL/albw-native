#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0026463C(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_006048dc;
extern int DAT_006048e0;

// USA 006048D0 <- EU 006048A8 (Ghidra, non-matching)
// GLOBAL DAT_006048dc undefined4
// GLOBAL DAT_006048e0 int

void func_006048D0(uint *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_006048dc);
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = (int *)func_0026463C(puVar1,param_1);
    iVar3 = DAT_006048e0 + 0x84;
    *piVar2 = DAT_006048e0;
    piVar2[200] = iVar3;
  }
  return;
}


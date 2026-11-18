#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00338B24(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_0060a3e0;
extern int DAT_0060a3e4;

// USA 0060A3D4 <- EU 0060A3AC (Ghidra, non-matching)
// GLOBAL DAT_0060a3e0 undefined4
// GLOBAL DAT_0060a3e4 int

void func_0060A3D4(uint *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_0060a3e0);
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = func_00338B24(puVar1,param_1);
    iVar3 = DAT_0060a3e4 + 0x54;
    *piVar2 = DAT_0060a3e4;
    piVar2[200] = iVar3;
  }
  return;
}


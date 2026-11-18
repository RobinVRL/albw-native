#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00306CE0(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_006096b8;
extern int DAT_006096bc;

// USA 006096AC <- EU 00609684 (Ghidra, non-matching)
// GLOBAL DAT_006096b8 undefined4
// GLOBAL DAT_006096bc int

void func_006096AC(uint *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_006096b8);
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = func_00306CE0(puVar1,param_1);
    iVar3 = DAT_006096bc + 0x54;
    *piVar2 = DAT_006096bc;
    piVar2[200] = iVar3;
  }
  return;
}


#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_001CD098(int param_1);
extern int func_001CD73C(undefined4 *param_1,uint *param_2);
extern int func_004ECF6C(int param_1);
extern int DAT_00604414;

// USA 006043E4 <- EU 006043BC (Ghidra, non-matching)
// GLOBAL DAT_00604414 int

int * func_006043E4(uint *param_1)

{
  int iVar1;
  bool bVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  puVar3 = (undefined4 *)func_0010BAB4(0x510);
  piVar4 = (int *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    piVar4 = func_001CD73C(puVar3,param_1);
    iVar1 = DAT_00604414;
    *piVar4 = DAT_00604414;
    *(undefined1 *)((int)piVar4 + 0x4f9) = 1;
    piVar4[200] = iVar1 + 100;
    bVar2 = func_001CD098((int)piVar4);
    if (bVar2) {
      func_004ECF6C((int)piVar4);
    }
  }
  return piVar4;
}


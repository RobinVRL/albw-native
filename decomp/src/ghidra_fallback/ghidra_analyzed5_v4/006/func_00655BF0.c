#include "ghidra_types.h"

extern int func_004FC570();
extern int DAT_00655c1c;
extern int *DAT_00655c20;

// USA 00655BF0 <- EU 00655BC8 (Ghidra, non-matching)
// GLOBAL DAT_00655c1c int
// GLOBAL DAT_00655c20 int *

void func_00655BF0(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_2 != 5) {
    func_004FC570(param_1);
    *(undefined2 *)(DAT_00655c1c + (int)param_1) = 0x96;
    piVar1 = (int *)(*(int *)(*DAT_00655c20 + 0x3dbe8) + 0x10);
    iVar2 = *piVar1;
    if ((iVar2 != 0) && (iVar2 == param_1[0xb3])) {
      *piVar1 = 0;
    }
    return;
  }
  return;
}


#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00315E64(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_006043b4;
extern int DAT_006043b8;

// USA 006043A0 <- EU 00604378 (Ghidra, non-matching)
// GLOBAL DAT_006043b4 undefined4
// GLOBAL DAT_006043b8 int

void func_006043A0(uint *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  
  puVar2 = (undefined4 *)func_0010BAB4(DAT_006043b4);
  if (puVar2 != (undefined4 *)0x0) {
    piVar3 = (int *)func_00315E64(puVar2,param_1);
    iVar1 = DAT_006043b8;
    iVar4 = DAT_006043b8 + 0x58;
    *piVar3 = DAT_006043b8;
    piVar3[200] = iVar4;
    piVar3[0x103] = iVar1 + 0xbc;
  }
  return;
}


#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00261468(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_006067e0;
extern int DAT_006067e4;

// USA 006067C0 <- EU 00606798 (Ghidra, non-matching)
// GLOBAL DAT_006067e0 undefined4
// GLOBAL DAT_006067e4 int

void func_006067C0(uint *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  puVar2 = (undefined4 *)func_0010BAB4(DAT_006067e0);
  if (puVar2 != (undefined4 *)0x0) {
    piVar3 = func_00261468(puVar2,param_1);
    iVar1 = DAT_006067e4;
    piVar3[200] = DAT_006067e4 + 0x58;
    *piVar3 = iVar1;
    *(short *)(piVar3 + 0x109) = (short)param_1[10];
    *(undefined2 *)((int)piVar3 + 0x426) = *(undefined2 *)((int)param_1 + 0x2a);
  }
  return;
}


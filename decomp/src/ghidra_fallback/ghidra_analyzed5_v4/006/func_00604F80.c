#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_003AAC44(int param_1);
extern int func_003AB048(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00604fc8;
extern int DAT_00604fcc;
extern int DAT_00604fd0;
extern int DAT_00604fd4;
extern int DAT_00604fd8;

// USA 00604F80 <- EU 00604F58 (Ghidra, non-matching)
// GLOBAL DAT_00604fc8 undefined4
// GLOBAL DAT_00604fcc int
// GLOBAL DAT_00604fd0 int
// GLOBAL DAT_00604fd4 int
// GLOBAL DAT_00604fd8 int

int * func_00604F80(uint *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  
  puVar2 = (undefined4 *)func_0010BAB4(DAT_00604fc8);
  piVar3 = (int *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    piVar3 = (int *)func_003AB048(puVar2,param_1);
    iVar1 = DAT_00604fd0;
    iVar4 = DAT_00604fcc;
    piVar3[200] = DAT_00604fd0 + 0x54;
    *piVar3 = iVar1;
    piVar3[0x103] = iVar4;
    iVar1 = DAT_00604fd8;
    if (*(short *)((int)param_1 + 0x2e) == 1) {
      iVar4 = DAT_00604fd4;
    }
    piVar3[0x104] = iVar4;
    piVar3[0x105] = iVar1;
    *(undefined2 *)(piVar3 + 0x106) = 5;
    func_003AAC44((int)piVar3);
  }
  return piVar3;
}


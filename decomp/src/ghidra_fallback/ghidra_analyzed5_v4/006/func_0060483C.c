#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00202014(undefined4 *param_1,uint *param_2,uint *param_3);
extern uint *DAT_0060484c;
extern int DAT_00604850;

// USA 0060483C <- EU 00604814 (Ghidra, non-matching)
// GLOBAL DAT_0060484c uint *
// GLOBAL DAT_00604850 int

void func_0060483C(uint *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)func_0010BAB4(0x940);
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = (int *)func_00202014(puVar1,param_1,DAT_0060484c);
    iVar3 = DAT_00604850 + 0x84;
    *piVar2 = DAT_00604850;
    piVar2[200] = iVar3;
  }
  return;
}


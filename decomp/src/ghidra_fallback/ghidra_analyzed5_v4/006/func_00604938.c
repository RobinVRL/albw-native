#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00202014(undefined4 *param_1,uint *param_2,uint *param_3);
extern uint *DAT_00604948;
extern int DAT_0060494c;

// USA 00604938 <- EU 00604910 (Ghidra, non-matching)
// GLOBAL DAT_00604948 uint *
// GLOBAL DAT_0060494c int

void func_00604938(uint *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)func_0010BAB4(0x940);
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = (int *)func_00202014(puVar1,param_1,DAT_00604948);
    iVar3 = DAT_0060494c + 0x84;
    *piVar2 = DAT_0060494c;
    piVar2[200] = iVar3;
  }
  return;
}


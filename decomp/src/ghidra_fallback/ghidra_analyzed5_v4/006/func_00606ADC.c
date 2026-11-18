#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00279840(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00606ae8;
extern int DAT_00606aec;

// USA 00606ADC <- EU 00606AB4 (Ghidra, non-matching)
// GLOBAL DAT_00606ae8 undefined4
// GLOBAL DAT_00606aec int

void func_00606ADC(uint *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00606ae8);
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = func_00279840(puVar1,param_1);
    iVar3 = DAT_00606aec + 0x5c;
    *piVar2 = DAT_00606aec;
    piVar2[200] = iVar3;
  }
  return;
}


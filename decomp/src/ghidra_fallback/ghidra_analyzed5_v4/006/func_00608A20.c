#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_002E0DAC(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00608a2c;
extern int DAT_00608a30;

// USA 00608A20 <- EU 006089F8 (Ghidra, non-matching)
// GLOBAL DAT_00608a2c undefined4
// GLOBAL DAT_00608a30 int

void func_00608A20(uint *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00608a2c);
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = func_002E0DAC(puVar1,param_1);
    iVar3 = DAT_00608a30 + 0x58;
    *piVar2 = DAT_00608a30;
    piVar2[200] = iVar3;
  }
  return;
}


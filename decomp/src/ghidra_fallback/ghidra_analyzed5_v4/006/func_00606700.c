#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_002E0DAC(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_0060670c;
extern int DAT_00606710;

// USA 00606700 <- EU 006066D8 (Ghidra, non-matching)
// GLOBAL DAT_0060670c undefined4
// GLOBAL DAT_00606710 int

void func_00606700(uint *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_0060670c);
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = func_002E0DAC(puVar1,param_1);
    iVar3 = DAT_00606710 + 0x58;
    *piVar2 = DAT_00606710;
    piVar2[200] = iVar3;
  }
  return;
}


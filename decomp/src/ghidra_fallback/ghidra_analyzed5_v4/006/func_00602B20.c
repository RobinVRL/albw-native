#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00137F88(undefined4 *param_1,uint *param_2);
extern int DAT_00602b2c;

// USA 00602B20 <- EU 00602AF8 (Ghidra, non-matching)
// GLOBAL DAT_00602b2c int

void func_00602B20(uint *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)func_0010BAB4(0x450);
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = func_00137F88(puVar1,param_1);
    iVar3 = DAT_00602b2c + 0x54;
    *piVar2 = DAT_00602b2c;
    piVar2[200] = iVar3;
  }
  return;
}


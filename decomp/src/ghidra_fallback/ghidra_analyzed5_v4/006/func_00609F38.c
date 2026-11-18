#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00381E94(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00609f44;
extern int DAT_00609f48;

// USA 00609F38 <- EU 00609F10 (Ghidra, non-matching)
// GLOBAL DAT_00609f44 undefined4
// GLOBAL DAT_00609f48 int

void func_00609F38(uint *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00609f44);
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = func_00381E94(puVar1,param_1);
    iVar3 = DAT_00609f48 + 0x84;
    *piVar2 = DAT_00609f48;
    piVar2[200] = iVar3;
  }
  return;
}


#include "ghidra_types.h"

extern int func_00404138(undefined4 param_1,undefined1 param_2);
extern int func_00404500(int param_1,undefined4 param_2);
extern int func_00404C78(undefined4 *param_1);
extern int DAT_00503910;

// USA 0050389C <- EU 00503874 (Ghidra, non-matching)
// GLOBAL DAT_00503910 int

int * func_0050389C(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  uVar1 = func_00404500(param_1,param_2);
  puVar2 = (undefined4 *)func_00404138(0x34,4);
  piVar3 = (int *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    piVar3 = (int *)func_00404C78(puVar2);
    *piVar3 = DAT_00503910;
  }
  (**(code **)(*piVar3 + 0x38))(piVar3,uVar1,*(undefined4 *)(param_1 + 0x24),param_4,param_3);
  return piVar3;
}


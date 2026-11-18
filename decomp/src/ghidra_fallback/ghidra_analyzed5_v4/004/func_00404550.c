#include "ghidra_types.h"

extern int func_00112364(int *param_1,int param_2,int *param_3);
extern int func_003FF044(undefined4 *param_1);
extern undefined4 *DAT_00404584;

// USA 00404550 <- EU 00404530 (Ghidra, non-matching)
// GLOBAL DAT_00404584 undefined4 *

int func_00404550(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(**(code **)(*(int *)*DAT_00404584 + 8))((int *)*DAT_00404584,0x24,4);
  if (puVar1 == (undefined4 *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = func_003FF044(puVar1);
    if (iVar2 != 0) {
      func_00112364((int *)(param_1 + 4),param_1 + 8,(int *)(iVar2 + 4));
    }
  }
  return iVar2;
}


#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int *DAT_0051cf30;
extern uint *DAT_0051cf34;
extern undefined4 DAT_0051cf38;
extern undefined4 *DAT_0051cf3c;

// USA 0051CE88 <- EU 0051CE60 (Ghidra, non-matching)
// GLOBAL DAT_0051cf30 int *
// GLOBAL DAT_0051cf34 uint *
// GLOBAL DAT_0051cf38 undefined4
// GLOBAL DAT_0051cf3c undefined4 *

undefined4 func_0051CE88(int *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  uVar2 = DAT_0051cf38;
  puVar1 = DAT_0051cf34;
  if (*param_1 == 0) {
    puVar4 = *(undefined4 **)(*DAT_0051cf30 + 0x3dbc0);
    puVar6 = *(undefined4 **)(*DAT_0051cf30 + 0x3dbc8);
    while( true ) {
      if (puVar4 == puVar6) {
        *param_1 = 0;
        return 0;
      }
      puVar5 = (undefined4 *)*puVar4;
      if (((*puVar1 & 1) == 0) && (iVar3 = func_00100174((int *)DAT_0051cf34), iVar3 != 0)) {
        *DAT_0051cf3c = uVar2;
      }
      if ((puVar5 == (undefined4 *)0x0) ||
         (iVar3 = (**(code **)*puVar5)(puVar5,DAT_0051cf3c), iVar3 == 0)) {
        puVar5 = (undefined4 *)0x0;
      }
      if (puVar5 != (undefined4 *)0x0) break;
      puVar4 = puVar4 + 1;
    }
    uVar2 = 1;
    *param_1 = (int)puVar5;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


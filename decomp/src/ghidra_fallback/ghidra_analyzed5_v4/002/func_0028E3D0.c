#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_002D5C70(undefined4 *param_1,int *param_2);
extern undefined4 DAT_0028e494;
extern uint *DAT_0028e498;
extern undefined4 *DAT_0028e49c;
extern undefined4 DAT_0028e4a0;
extern undefined4 DAT_0028e4a4;

// USA 0028E3D0 <- EU 0028E3F8 (Ghidra, non-matching)
// GLOBAL DAT_0028e494 undefined4
// GLOBAL DAT_0028e498 uint *
// GLOBAL DAT_0028e49c undefined4 *
// GLOBAL DAT_0028e4a0 undefined4
// GLOBAL DAT_0028e4a4 undefined4

undefined4 * func_0028E3D0(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar2 = (undefined4 *)func_002D5C70(param_1,param_2);
  *puVar2 = DAT_0028e494;
  puVar4 = *(undefined4 **)(puVar2[10] + 0x644);
  if (((*DAT_0028e498 & 1) == 0) && (iVar3 = func_00100174((int *)DAT_0028e498), iVar3 != 0)) {
    *DAT_0028e49c = DAT_0028e4a0;
  }
  if ((puVar4 == (undefined4 *)0x0) ||
     (iVar3 = (**(code **)*puVar4)(puVar4,DAT_0028e49c), iVar3 == 0)) {
    puVar4 = (undefined4 *)0x0;
  }
  puVar2[0x1c] = puVar4;
  uVar1 = DAT_0028e4a4;
  *(undefined1 *)(puVar2 + 0x1d) = 0;
  puVar2[0x1e] = uVar1;
  puVar2[0x1f] = uVar1;
  puVar2[0x20] = uVar1;
  return puVar2;
}


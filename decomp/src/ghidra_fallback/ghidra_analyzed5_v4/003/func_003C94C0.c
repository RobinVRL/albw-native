#include "ghidra_types.h"

extern int func_00110778(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
extern undefined4 DAT_003c9518;
extern undefined4 DAT_003c951c;

// USA 003C94C0 <- EU 003C949C (Ghidra, non-matching)
// GLOBAL DAT_003c9518 undefined4
// GLOBAL DAT_003c951c undefined4

undefined4 * func_003C94C0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  uVar1 = DAT_003c9518;
  param_1[2] = 0;
  iVar3 = 0;
  *param_1 = uVar1;
  do {
    if ((int *)param_1[iVar3 + 3] != (int *)0x0) {
      (**(code **)(*(int *)param_1[iVar3 + 3] + 0x30))((int *)param_1[iVar3 + 3]);
    }
    uVar1 = DAT_003c951c;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 5);
  param_1[0x3d] = DAT_003c951c;
  iVar3 = param_1[0x46];
  if (iVar3 != 0) {
    param_1[0x46] = 0;
  }
  puVar2 = func_00110778(param_1 + 0x3d,iVar3,param_3);
  puVar2[-0xf] = uVar1;
  iVar3 = puVar2[-6];
  if (iVar3 != 0) {
    puVar2[-6] = 0;
  }
  puVar2 = func_00110778(puVar2 + -0xf,iVar3,param_3);
  return puVar2 + -0x2e;
}


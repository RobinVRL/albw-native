#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_003e2184;
extern undefined4 DAT_003e2188;
extern undefined4 DAT_003e218c;
extern undefined4 *DAT_003e2190;

// USA 003E2134 <- EU 003E2114 (Ghidra, non-matching)
// GLOBAL DAT_003e2184 uint *
// GLOBAL DAT_003e2188 undefined4
// GLOBAL DAT_003e218c undefined4
// GLOBAL DAT_003e2190 undefined4 *

undefined4 * func_003E2134(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if (((*DAT_003e2184 & 1) == 0) &&
     (iVar4 = func_00100174((int *)DAT_003e2184), puVar3 = DAT_003e2190, uVar2 = DAT_003e218c,
     uVar1 = DAT_003e2188, iVar4 != 0)) {
    puVar5 = DAT_003e2190 + 4;
    *DAT_003e2190 = DAT_003e2188;
    puVar3[1] = uVar2;
    puVar3[2] = uVar2;
    puVar3[3] = uVar2;
    *puVar5 = uVar2;
    puVar3[5] = uVar1;
    puVar3[6] = uVar2;
    puVar3[7] = uVar2;
    puVar3[8] = uVar2;
    puVar3[9] = uVar2;
    puVar3[10] = uVar1;
    puVar3[0xb] = uVar2;
  }
  return DAT_003e2190;
}


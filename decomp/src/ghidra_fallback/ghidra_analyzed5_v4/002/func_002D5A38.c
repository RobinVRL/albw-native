#include "ghidra_types.h"

extern int func_0052E454(int param_1,float *param_2,int param_3,float fparam_0);
extern uint DAT_002d5a84;
extern float DAT_002d5a88;

// USA 002D5A38 <- EU 002D5A14 (Ghidra, non-matching)
// GLOBAL DAT_002d5a84 uint
// GLOBAL DAT_002d5a88 float

undefined4 func_002D5A38(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  
  bVar1 = *(byte *)(*(int *)(param_1 + 0x50) + 0x324);
  bVar4 = (bVar1 & 1) == 0;
  bVar5 = (bVar1 & 8) == 0;
  bVar6 = bVar4 && bVar5;
  if (bVar4 && bVar5) {
    bVar6 = *(char *)(*(int *)(param_1 + 0x50) + 0x168) == '\0';
  }
  if ((((bVar6) && (DAT_002d5a84 < *(uint *)(*(int *)(param_1 + 0x34) + 4))) &&
      (uVar2 = func_0052E454(*(int *)(param_1 + 0x28),(float *)(*(int *)(param_1 + 0x28) + 0x3d0),1,
                             DAT_002d5a88), uVar2 != 0)) &&
     (*(undefined2 *)(param_1 + 4) = 7, param_1 != -8)) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


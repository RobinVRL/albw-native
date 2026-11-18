#include "ghidra_types.h"

extern int func_00547724(int *param_1);
extern int *DAT_00276974;

// USA 00276890 <- EU 002768B8 (Ghidra, non-matching)
// GLOBAL DAT_00276974 int *

int func_00276890(int param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0x18);
  piVar2 = piVar3 + *(int *)(param_1 + 0x10);
  while( true ) {
    if (piVar3 == piVar2) {
      return 0;
    }
    if (*(short *)(*piVar3 + 0x54) == param_2) break;
    piVar3 = piVar3 + 1;
  }
  iVar1 = func_00547724((int *)*piVar3);
  if (iVar1 != *DAT_00276974) {
    return 0;
  }
  *(undefined2 *)(*piVar3 + 0x5a + (uint)*(byte *)(*piVar3 + 0x58) * 6) = param_3;
  *(undefined2 *)(*piVar3 + (uint)*(byte *)(*piVar3 + 0x58) * 6 + 0x5c) = 0;
  *(undefined2 *)(*piVar3 + (uint)*(byte *)(*piVar3 + 0x58) * 6 + 0x5e) = 0;
  *(char *)(*piVar3 + 0x58) = *(char *)(*piVar3 + 0x58) + '\x01';
  return *piVar3;
}


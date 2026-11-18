#include "ghidra_types.h"


// USA 0057559C <- EU 00575574 (Ghidra, non-matching)

bool func_0057559C(int param_1,byte *param_2,byte *param_3,byte *param_4)

{
  byte bVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x110);
  *param_2 = *(byte *)(*piVar2 + 0x84);
  *param_3 = *(byte *)(piVar2[1] + 0x84);
  bVar1 = *(byte *)(piVar2[2] + 0x84);
  *param_4 = bVar1;
  return (uint)bVar1 + (uint)*param_2 + (uint)*param_3 != 0;
}


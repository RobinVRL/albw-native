#include "ghidra_types.h"

extern int func_002DF5C4(int param_1);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int *DAT_0029da5c;

// USA 0029D9FC <- EU 0029D9D8 (Ghidra, non-matching)
// GLOBAL DAT_0029da5c int *

undefined4 func_0029D9FC(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint in_fpscr;
  float fparam_0;
  
  func_002DF5C4(*DAT_0029da5c);
  uVar1 = *(uint *)(*(int *)(param_1 + 0xd8) + *(char *)(param_1 + 0xc0) * 8 + 4);
  piVar3 = (int *)(*(int *)(param_1 + 0xd8) + *(char *)(param_1 + 0xc0) * 8);
  if ((uVar1 & 1) != 0) {
    piVar3 = (int *)(*piVar3 + *(int *)(*(int *)(param_1 + 0xd0) + ((int)uVar1 >> 1)));
  }
  (*(code *)*piVar3)();
  iVar2 = *(int *)(param_1 + 0xbc) + 1;
  *(int *)(param_1 + 0xbc) = iVar2;
  if (*(int *)(param_1 + 0xcc) != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    return func_00352210(*(int *)(param_1 + 0xcc),1,fparam_0);
  }
  return 0;
}


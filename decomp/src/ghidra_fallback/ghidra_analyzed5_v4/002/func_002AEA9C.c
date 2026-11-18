#include "ghidra_types.h"

extern float func_002B0D7C(int param_1,int param_2,uint param_3,int param_4,float fparam_0);
extern float DAT_002aeae0;
extern float DAT_002aeae8;

// USA 002AEA9C <- EU 002AEA78 (Ghidra, non-matching)
// GLOBAL DAT_002aeae0 float
// GLOBAL DAT_002aeae8 float

/* WARNING: Removing unreachable block (ram,0x002aeab4) */
/* WARNING: Removing unreachable block (ram,0x002aeabc) */

void func_002AEA9C(int param_1)

{
  int iVar1;
  uint in_fpscr;
  float fVar2;
  
  func_002B0D7C(param_1,8,10,0,DAT_002aeae0);
  *(ushort *)(param_1 + 0x38) = *(ushort *)(param_1 + 0x38) | 8;
  iVar1 = *(int *)(param_1 + 0x34);
  *(undefined4 *)(iVar1 + 0x728) = 0x28;
  fVar2 = (float)VectorUnsignedToFloat(0x28,(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(iVar1 + 0x72c) = DAT_002aeae8 / fVar2;
  *(undefined4 *)(iVar1 + 0x724) = 0;
  return;
}


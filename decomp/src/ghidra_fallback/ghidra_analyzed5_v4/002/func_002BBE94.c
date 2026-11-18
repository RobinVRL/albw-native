#include "ghidra_types.h"

extern int func_002BB5A0(int param_1);
extern int func_004F87F8(int param_1,int param_2);
extern float DAT_002bbef0;
extern float DAT_002bbef4;

// USA 002BBE94 <- EU 002BBE70 (Ghidra, non-matching)
// GLOBAL DAT_002bbef0 float
// GLOBAL DAT_002bbef4 float

undefined4 func_002BBE94(int param_1)

{
  int iVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;
  
  if ((*(uint *)(param_1 + 0x900) < *(uint *)(param_1 + 0x904)) &&
     (iVar1 = *(uint *)(param_1 + 0x900) + 1, *(int *)(param_1 + 0x900) = iVar1, iVar1 != 0)) {
    *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x30;
    func_004F87F8(param_1,0);
  }
  fVar2 = (float)VectorUnsignedToFloat(*(uint *)(param_1 + 0x900),(byte)(in_fpscr >> 0x15) & 3);
  if ((*(uint *)(param_1 + 0x904) <= *(uint *)(param_1 + 0x900)) ||
     (fVar3 = fVar2 * DAT_002bbef0, 0x3f800000 < (int)ALBW_AS_U32((fVar2 * DAT_002bbef0)))) {
    fVar3 = DAT_002bbef4;
  }
  *(float *)(param_1 + 0x4f8) = fVar3;
  return func_002BB5A0(param_1);
}


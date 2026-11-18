#include "ghidra_types.h"

extern int func_004F87F8(int param_1,int param_2);
extern int func_0058A8F0(int param_1);
extern int func_006628D0(undefined4 *param_1,undefined1 param_2);
extern float DAT_002bb56c;
extern float DAT_002bb570;

// USA 002BB4F4 <- EU 002BB4D0 (Ghidra, non-matching)
// GLOBAL DAT_002bb56c float
// GLOBAL DAT_002bb570 float

void func_002BB4F4(int param_1)

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
     (fVar3 = fVar2 * DAT_002bb56c, 0x3f800000 < (int)ALBW_AS_U32((fVar2 * DAT_002bb56c)))) {
    fVar3 = DAT_002bb570;
  }
  *(float *)(param_1 + 0x4f8) = fVar3;
  iVar1 = func_0058A8F0(param_1);
  if (iVar1 != 0) {
    func_006628D0((undefined4 *)(param_1 + 0x8bc),2);
  }
  return;
}


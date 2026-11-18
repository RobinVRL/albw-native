#include "ghidra_types.h"

extern int func_001E405C(int param_1,undefined4 param_2);
extern int func_001E4090(int param_1,undefined4 param_2);
extern int func_002E01FC(int param_1);
extern float func_0052F864(int param_1);
extern int DAT_00304324;
extern float DAT_00304328;

// USA 003042B8 <- EU 00304294 (Ghidra, non-matching)
// GLOBAL DAT_00304324 int
// GLOBAL DAT_00304328 float

undefined4 func_003042B8(int param_1)

{
  uint in_fpscr;
  float fVar1;
  int iVar2;
  int iVar3;
  
  *(undefined1 *)(param_1 + 0x494) = 1;
  if ((int)*(float *)(param_1 + 0x48) != 1) {
    *(undefined1 *)(param_1 + 0x518) = 1;
  }
  func_001E4090(param_1,0);
  func_001E405C(param_1,0);
  fVar1 = func_0052F864(param_1);
  iVar2 = VectorFloatToUnsigned(fVar1,3);
  iVar3 = iVar2;
  if (iVar2 == 0) {
    iVar3 = DAT_00304324;
  }
  *(int *)(param_1 + 0x4e8) = iVar2;
  if (iVar2 == 0) {
    *(int *)(param_1 + 0x4ec) = iVar3;
  }
  else {
    fVar1 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x4ec) = DAT_00304328 / fVar1;
  }
  *(undefined4 *)(param_1 + 0x4e4) = 0;
  return func_002E01FC(param_1);
}


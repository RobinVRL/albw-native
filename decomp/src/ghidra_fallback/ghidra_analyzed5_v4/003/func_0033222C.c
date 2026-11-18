#include "ghidra_types.h"

extern int func_001E405C(int param_1,undefined4 param_2);
extern int func_001E4090(int param_1,undefined4 param_2);
extern int func_001E43DC(int param_1,float fparam_0);
extern int func_001E43F8(int param_1,float fparam_0);
extern int func_002E01FC(int param_1);
extern float func_0052F864(int param_1);
extern float DAT_003322c0;
extern float DAT_003322c4;

// USA 0033222C <- EU 00332208 (Ghidra, non-matching)
// GLOBAL DAT_003322c0 float
// GLOBAL DAT_003322c4 float

void func_0033222C(int param_1)

{
  uint in_fpscr;
  float fVar1;
  int iVar2;
  float fparam_0;
  
  *(undefined1 *)(param_1 + 0x494) = 1;
  if ((*(char *)(param_1 + 0x4bc) == '\0') && (*(char *)(param_1 + 0x4c5) != '\x05')) {
    *(undefined1 *)(param_1 + 0x514) = 1;
  }
  func_002E01FC(param_1);
  func_001E4090(param_1,0);
  func_001E405C(param_1,0);
  fparam_0 = DAT_003322c0;
  func_001E43F8(param_1,DAT_003322c0);
  func_001E43DC(param_1,fparam_0);
  fVar1 = func_0052F864(param_1);
  iVar2 = VectorFloatToUnsigned(fVar1,3);
  if (iVar2 == 0) {
    fVar1 = DAT_003322c4;
  }
  *(int *)(param_1 + 0x4e8) = iVar2;
  if (iVar2 == 0) {
    *(float *)(param_1 + 0x4ec) = fVar1;
  }
  else {
    fVar1 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x4ec) = fparam_0 / fVar1;
  }
  *(undefined4 *)(param_1 + 0x4e4) = 0;
  return;
}


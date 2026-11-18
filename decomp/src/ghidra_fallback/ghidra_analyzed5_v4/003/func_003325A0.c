#include "ghidra_types.h"

extern int func_001E405C(int param_1,undefined4 param_2);
extern int func_001E4090(int param_1,undefined4 param_2);
extern int func_001E43DC(int param_1,float fparam_0);
extern int func_001E43F8(int param_1,float fparam_0);
extern int func_004CF478(int param_1,int param_2);
extern float func_0052F864(int param_1);
extern float DAT_00332654;
extern float DAT_00332658;

// USA 003325A0 <- EU 0033257C (Ghidra, non-matching)
// GLOBAL DAT_00332654 float
// GLOBAL DAT_00332658 float

void func_003325A0(int param_1)

{
  uint in_fpscr;
  float fVar1;
  int iVar2;
  float fparam_0;
  
  *(undefined1 *)(param_1 + 0x494) = 0;
  if ((*(char *)(param_1 + 0x4bc) == '\0') && (*(char *)(param_1 + 0x4c5) != '\x01')) {
    *(undefined1 *)(param_1 + 0x514) = 1;
  }
  func_001E4090(param_1,1);
  func_001E405C(param_1,1);
  fparam_0 = DAT_00332654;
  func_001E43F8(param_1,DAT_00332654);
  func_001E43DC(param_1,fparam_0);
  fVar1 = func_0052F864(param_1);
  iVar2 = VectorFloatToUnsigned(fVar1,3);
  if (iVar2 == 0) {
    fVar1 = DAT_00332658;
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
  func_004CF478(*(int *)(param_1 + 0x47c),1);
  if (*(short *)(param_1 + 0x2e) != 5 && *(short *)(param_1 + 0x2e) != 6) {
    *(undefined4 *)(param_1 + 0x510) = 0;
  }
  return;
}

